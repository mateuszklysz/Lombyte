#!/usr/bin/env python3
"""Create, update and validate the per-file STATE header on ``src/**/*.c``.

Every configured source file carries a short provenance block at the top:

    /*
    STATE: C_NON_MATCHING
    SYMBOL: FUN_XXXXXXXX
    SCORE: code=95 functions=100 data=100 complete_data=100
    COMPILER: himuro-O2 -O2 -g2 -gstabs
    DECISION: retained
    BLOCKER: none
    */

``STATE`` is ``C_EXACT``, ``C_NON_MATCHING`` or ``INTENTIONAL_LOW_LEVEL_ASM``.
``SYMBOL`` is the objdiff/audit identity; ``SCORE`` carries the measured
percentages; ``DECISION`` is ``promoted``, ``retained``, ``rejected`` or
``stuck``. ``COMPILER``, ``BLOCKER`` and ``NOTE`` are optional; ``NOTE`` is a
short implementation note for future readers (no run IDs or private paths).

Do not put evidence paths in this block. ``EVIDENCE:`` is rejected by the
validator because those artifacts live with the maintainers, not in this
repository. See docs/source-headers.md.

Usage:
    # insert or refresh a block
    python3 scripts/stamp_source_header.py src/ee/set_background_color.c \
        --state C_EXACT --symbol SetBackgroundColor \
        --score "code=100 functions=100 data=100 complete_data=100" \
        --compiler "himuro-O2 -O2 -g2 -gstabs" --decision promoted --apply

    # structural / value check (exit 1 when a file needs work)
    python3 scripts/stamp_source_header.py --check src/
"""
from __future__ import annotations

import argparse
import re
from pathlib import Path

FIELD_ORDER = ("STATE", "SYMBOL", "SCORE", "COMPILER", "DECISION", "BLOCKER", "NOTE")
REQUIRED_FIELDS = ("STATE", "SYMBOL", "SCORE", "DECISION")
FORBIDDEN_FIELDS = ("EVIDENCE",)
LEAD_CHARS = 4000

COMMENT_RE = re.compile(r"/\*.*?\*/", re.S)
FIELD_PREFIX = r"^([ \t]*(?:/\*[ \t]*|\*[ \t]*)?)"
FIELD_LINE_RE = re.compile(FIELD_PREFIX + r"([A-Z][A-Z_]*)\s*:", re.M)
STATE_FIELD_RE = re.compile(FIELD_PREFIX + r"STATE\s*:", re.M)
CONTINUATION_RE = re.compile(r"^(?:[ \t]+\S|[ \t]*\*[ \t]{2,}\S)")


def _field_line_re(key: str) -> re.Pattern:
    return re.compile(FIELD_PREFIX + rf"({key})\s*:")


def render_block(fields: dict[str, str | None]) -> str:
    """Render a canonical block; keys follow FIELD_ORDER, extras after."""
    keys = [key for key in FIELD_ORDER if fields.get(key) is not None]
    keys += [key for key, value in fields.items()
             if key not in FIELD_ORDER and value is not None]
    return "\n".join(["/*"] + [f"{key}: {fields[key]}" for key in keys] + ["*/"])


def find_state_block(text: str) -> tuple[int, int] | None:
    """Span of the first comment in the leading region that has a STATE field."""
    window = text[:LEAD_CHARS]
    for match in COMMENT_RE.finditer(window):
        if STATE_FIELD_RE.search(match.group(0)):
            return match.start(), match.end()
    return None


def _block_prefix(block: str) -> str:
    for line in block.splitlines()[1:]:
        stripped = line.lstrip()
        if stripped.startswith("*") and not stripped.startswith("*/"):
            return " * "
    return ""


def _remove_field(block: str, key: str) -> str:
    """Remove a field line and its wrapped continuation lines from a block."""
    pattern = _field_line_re(key)
    lines = block.splitlines()
    kept: list[str] = []
    index = 0
    while index < len(lines):
        if pattern.match(lines[index]):
            index += 1
            while index < len(lines):
                nxt = lines[index]
                if FIELD_LINE_RE.match(nxt) or nxt.strip().startswith("*/"):
                    break
                if not CONTINUATION_RE.match(nxt):
                    break
                index += 1
            continue
        kept.append(lines[index])
        index += 1
    return "\n".join(kept)


def _set_field(block: str, key: str, value: str) -> str:
    """Set a field inside a block, preserving the line's own ``/*``/`` *`` prefix."""
    lines = block.splitlines()
    pattern = _field_line_re(key)
    for index, line in enumerate(lines):
        match = pattern.match(line)
        if match:
            replacement = f"{match.group(1)}{key}: {value}"
            end = index + 1
            while end < len(lines):
                nxt = lines[end]
                if FIELD_LINE_RE.match(nxt) or nxt.strip().startswith("*/"):
                    break
                if not CONTINUATION_RE.match(nxt):
                    break
                end += 1
            lines[index:end] = [replacement]
            return "\n".join(lines)
    replacement = f"{_block_prefix(block)}{key}: {value}"
    order = {name: index for index, name in enumerate(FIELD_ORDER)}
    insert_at = None
    for index, line in enumerate(lines):
        match = FIELD_LINE_RE.match(line)
        if match and order.get(match.group(2), len(FIELD_ORDER)) > order.get(key, len(FIELD_ORDER)):
            insert_at = index
            break
    if insert_at is None:
        for index in range(len(lines) - 1, -1, -1):
            if lines[index].strip() in ("*/", "* /"):
                insert_at = index
                break
    if insert_at is None:
        insert_at = len(lines)
    lines.insert(insert_at, replacement)
    return "\n".join(lines)


def remove_field_lines(text: str, key: str) -> str:
    """Remove KEY fields anywhere in the leading region, block or not."""
    pattern = _field_line_re(key)
    lines = text.splitlines(keepends=True)
    kept: list[str] = []
    consumed = 0
    index = 0
    changed = False
    while index < len(lines):
        line = lines[index]
        if consumed < LEAD_CHARS and pattern.match(line):
            changed = True
            index += 1
            while index < len(lines):
                nxt = lines[index]
                if FIELD_LINE_RE.match(nxt) or nxt.strip().startswith("*/"):
                    break
                if not CONTINUATION_RE.match(nxt):
                    break
                index += 1
            continue
        kept.append(line)
        consumed += len(line)
        index += 1
    return "".join(kept) if changed else text


def update(text: str, fields: dict[str, str | None] | None = None,
           remove: tuple[str, ...] = ()) -> str:
    """Insert or update the state block; ``None`` values remove a field."""
    fields = fields or {}
    span = find_state_block(text)
    if span is None:
        supplied = {key: value for key, value in fields.items() if value is not None}
        if supplied:
            body = text.lstrip("\n")
            text = render_block(supplied) + "\n\n" + body if body else render_block(supplied) + "\n"
    else:
        start, end = span
        block = text[start:end]
        for key, value in fields.items():
            if value is None:
                block = _remove_field(block, key)
            else:
                block = _set_field(block, key, value)
        text = text[:start] + block + text[end:]
    for key in remove:
        text = remove_field_lines(text, key)
    return text


def validate(text: str) -> list[str]:
    """Structural problems with a file's state block (empty list is good)."""
    span = find_state_block(text)
    if span is None:
        return ["missing STATE block"]
    block = text[span[0]:span[1]]
    present = {match.group(2) for match in FIELD_LINE_RE.finditer(block)}
    problems = [f"missing {key}" for key in REQUIRED_FIELDS if key not in present]
    problems += [f"{key} is not allowed in this repository" for key in FORBIDDEN_FIELDS if key in present]
    return problems


def _collect(paths: list[Path]) -> list[Path]:
    files: list[Path] = []
    for path in paths:
        if path.is_dir():
            files.extend(sorted(path.rglob("*.c")))
        else:
            files.append(path)
    return files


def main(argv=None) -> int:
    parser = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("paths", nargs="+", type=Path, help="source file or directory")
    parser.add_argument("--state")
    parser.add_argument("--symbol")
    parser.add_argument("--score", help='e.g. "code=100 functions=100 data=100 complete_data=100"')
    parser.add_argument("--compiler")
    parser.add_argument("--decision")
    parser.add_argument("--blocker")
    parser.add_argument("--note", help="short implementation note for future readers")
    parser.add_argument("--remove", action="append", default=[], metavar="FIELD",
                        help="drop a field (repeatable), e.g. --remove EVIDENCE")
    mode = parser.add_mutually_exclusive_group()
    mode.add_argument("--apply", action="store_true", help="write changes")
    mode.add_argument("--check", action="store_true",
                      help="exit 1 when a header is invalid or out of date")
    parser.add_argument("--quiet", action="store_true")
    args = parser.parse_args(argv)

    fields = {"STATE": args.state, "SYMBOL": args.symbol, "SCORE": args.score,
              "COMPILER": args.compiler, "DECISION": args.decision, "BLOCKER": args.blocker,
              "NOTE": args.note}
    updates = {key: value for key, value in fields.items() if value is not None}

    failures = 0
    changed = 0
    for path in _collect(args.paths):
        text = path.read_text()
        new = update(text, updates, tuple(args.remove))
        if args.check:
            problems = validate(text)
            if (updates or args.remove) and new != text:
                problems.append("header out of date")
            if problems:
                failures += 1
                print(f"FAIL {path}: {'; '.join(problems)}")
            elif not args.quiet:
                print(f"ok   {path}")
            continue
        if new == text:
            if not args.quiet:
                print(f"ok   {path}")
            continue
        changed += 1
        if args.apply:
            path.write_text(new)
            if not args.quiet:
                print(f"updated {path}")
        elif not args.quiet:
            print(f"would update {path}")

    if args.check:
        return 1 if failures else 0
    if not args.quiet:
        print(f"files changed: {changed}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
