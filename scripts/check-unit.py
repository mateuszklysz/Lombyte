#!/usr/bin/env python3
"""Measure one unit's C against the retail object, rebuilding only that object.

Usage:
  python3 scripts/check-unit.py <unit> [--workspace DIR] [--json]

``<unit>`` is a configured unit path such as ``assembly/textbin/fast_sin``; a
leading ``src/`` and a trailing ``.c`` are accepted.  When the file keeps its
assembly oracle under ``#ifndef NON_MATCHING``, the readable C body under
``#else`` is staged into the workspace and measured alone, so the source tree
keeps its oracle while you iterate.

This is the fast inner loop, not the acceptance gate.  It needs a baseline
workspace built once with ``./verify-baseline.sh`` (default ``~/rnc-baseline``)
and only rebuilds a single object.  The full-image run of
``./verify-baseline.sh`` stays the authoritative check.

Usage examples:
  python3 scripts/check-unit.py assembly/math/subtract_integer_with_clamp
  python3 scripts/check-unit.py assembly/textbin/fast_sin --workspace /tmp/ws
"""

from __future__ import annotations

import argparse
import json
import os
import shutil
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import rnc_units  # noqa: E402

ROOT = Path(__file__).resolve().parents[1]
DEFAULT_WORKSPACE = Path("~/rnc-baseline")


def parse_args(argv=None):
    parser = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter
    )
    parser.add_argument("unit", help="configured unit path, e.g. assembly/textbin/fast_sin")
    parser.add_argument(
        "--workspace",
        type=Path,
        default=None,
        help="baseline workspace directory (default: $BASELINE_ROOT or ~/rnc-baseline)",
    )
    parser.add_argument("--json", action="store_true", help="print the result as JSON")
    return parser.parse_args(argv)


def error(message: str, code: int = 2) -> int:
    print(f"check-unit: error: {message}", file=sys.stderr)
    return code


def normalize_unit(value: str) -> str:
    unit = value.strip().replace(os.sep, "/")
    if unit.startswith("./"):
        unit = unit[2:]
    if unit.startswith("src/"):
        unit = unit[4:]
    if unit.endswith(".c"):
        unit = unit[:-2]
    return unit


def find_ninja() -> str | None:
    venv_ninja = ROOT / ".venv" / "bin" / "ninja"
    if venv_ninja.is_file():
        return str(venv_ninja)
    return shutil.which("ninja")


def build_environment() -> dict:
    env = dict(os.environ)
    prefix = []
    venv_bin = ROOT / ".venv" / "bin"
    if venv_bin.is_dir():
        prefix.append(str(venv_bin))
    binutils = Path(os.environ.get("BINUTILS_ROOT", "/opt/binutils-mips-ps2-decompals"))
    if binutils.is_dir():
        prefix.append(str(binutils))
    if prefix:
        env["PATH"] = os.pathsep.join(prefix + [env.get("PATH", "")])
    return env


def objdiff_report(objdiff: Path, project: Path, unit: str, config: str | None):
    command = [
        str(objdiff),
        "diff",
        "-p",
        str(project),
        "-u",
        unit,
        "--format",
        "json",
        "-o",
        "-",
    ]
    if config:
        command += ["-c", config]
    return subprocess.run(
        command, capture_output=True, text=True, cwd=str(project)
    )


def function_rows(side: dict) -> list[dict]:
    return [
        {
            "name": symbol["name"],
            "size": int(symbol.get("size") or 0),
            "match_percent": symbol.get("match_percent"),
        }
        for symbol in side.get("symbols", [])
        if symbol.get("kind") == "SYMBOL_FUNCTION"
    ]


def first_differences(left: dict, right: dict, limit: int = 3) -> list[str]:
    """Human-readable first mismatching instructions (retail vs candidate)."""
    candidates = {symbol["name"]: symbol for symbol in right.get("symbols", [])}
    rows = []
    for target in left.get("symbols", []):
        if target.get("kind") != "SYMBOL_FUNCTION":
            continue
        candidate = candidates.get(target["name"], {})
        target_instructions = target.get("instructions") or []
        candidate_instructions = candidate.get("instructions") or []
        for index in range(max(len(target_instructions), len(candidate_instructions))):
            target_row = (
                target_instructions[index] if index < len(target_instructions) else {}
            )
            candidate_row = (
                candidate_instructions[index] if index < len(candidate_instructions) else {}
            )
            if not target_row.get("diff_kind") and not candidate_row.get("diff_kind"):
                continue
            address = (target_row.get("instruction") or candidate_row.get("instruction") or {}).get(
                "address"
            )
            retail_text = (target_row.get("instruction") or {}).get("formatted", "").strip()
            candidate_text = (candidate_row.get("instruction") or {}).get("formatted", "").strip()
            rows.append(
                "  0x{address:<4} {retail:<32} {candidate}".format(
                    address=address if address is not None else "0",
                    retail=retail_text or "(missing)",
                    candidate=candidate_text or "(missing)",
                )
            )
            if len(rows) >= limit:
                return rows
    return rows


def print_result(result: dict) -> None:
    print(f"unit       {result['unit']}")
    print(f"source     {result['source']} ({result['staged_from']})")
    print(f"retail     {result['retail_bytes']} bytes")
    for index, path in enumerate(result["retail_asm"]):
        label = "retail asm" if index == 0 else "          "
        print(f"{label} {result['workspace']}/{path}")
    print(f"workspace  {result['workspace']}")
    print()
    print(f"rebuilt build/src/{result['unit']}.c.o")
    print()
    print("object score (objdiff; relocation names ignored for linked bytes)")
    print(f"  .text   {result['text_match_percent']:.1f}%")
    for function in result["functions"]:
        percent = function["match_percent"]
        shown = "n/a" if percent is None else f"{percent:.1f}%"
        print(f"  {function['name']}   {shown}")
    for section in result["other_sections"]:
        print(
            f"  {section['name']}   {section['match_percent']:.1f}% "
            f"({section['size']} bytes)"
        )
    print()
    if result["ok"]:
        print("Object matches.")
        if result["strict_match_percent"] not in (None, 100.0):
            print(
                "Strict symbol-name comparison still differs "
                f"({result['strict_match_percent']:.1f}%); the linked bytes are "
                "equal, so the full-image gate decides."
            )
        print("Run ./verify-baseline.sh for the authoritative full-image SHA gate.")
        return
    print(f"Not matching yet ({result['text_match_percent']:.1f}%).")
    for note in result["notes"]:
        print()
        print(f"note: {note}")
    if result["differences"]:
        print()
        print("first differences (retail vs your C)")
        for row in result["differences"]:
            print(row)
    print()
    print("Edit the C body, then run this command again.")


def main(argv=None) -> int:
    args = parse_args(argv)
    unit = normalize_unit(args.unit)
    source = rnc_units.unit_source(ROOT, unit)
    if not source.is_file():
        return error(f"no such unit source: {source}")
    _, intentional = rnc_units.load_categories(ROOT / rnc_units.CATEGORY_PATH)
    if unit in intentional:
        return error(
            f"{unit} is intentional low-level asm and is excluded from the C "
            "goal; pick another unit (see scripts/list-functions.py)"
        )

    text = source.read_text(errors="replace")
    uses_guard, body = rnc_units.split_oracle_guard(text)
    if uses_guard and body is None:
        return error(
            f"{unit} has no readable C body yet; write your C under `#else` "
            "and run this command again"
        )
    if not uses_guard and "INCLUDE_ASM" in text:
        return error(
            f"{unit} is assembly-only (`INCLUDE_ASM` without a C body); "
            "pick a unit that has a C body (see scripts/list-functions.py)"
        )
    staged = body if uses_guard else text
    staged_from = (
        "C body staged from the NON_MATCHING guard" if uses_guard else "staged as-is"
    )

    workspace = args.workspace or Path(
        os.environ.get("BASELINE_ROOT") or str(DEFAULT_WORKSPACE)
    )
    workspace = workspace.expanduser().resolve()
    if not (workspace / ".rnc-baseline-root").is_file():
        return error(
            f"{workspace} is not a baseline workspace; run ./verify-baseline.sh "
            "once (or pass --workspace)"
        )
    project = workspace / "config" / "us"
    objdiff = workspace / "tools" / "objdiff" / "objdiff-cli"
    if not (project / "build.ninja").is_file() or not objdiff.is_file():
        return error(f"{workspace} is incomplete; re-run ./verify-baseline.sh")
    workspace_source = workspace / "src" / f"{unit}.c"
    if not workspace_source.is_file():
        return error(
            f"{unit} is not part of {workspace}; re-run ./verify-baseline.sh "
            "after pulling the latest source"
        )

    ninja = find_ninja()
    if ninja is None:
        return error("ninja was not found; install the requirements into .venv")

    workspace_source.write_text(staged)
    object_target = f"build/src/{unit}.c.o"
    build = subprocess.run(
        [ninja, "-C", str(project), object_target],
        capture_output=True,
        text=True,
        env=build_environment(),
    )
    if build.returncode != 0:
        print(build.stdout, end="", file=sys.stderr)
        print(build.stderr, end="", file=sys.stderr)
        return error(f"compiling {unit} failed; fix the compile errors above", 1)

    scored = objdiff_report(objdiff, project, unit, "functionRelocDiffs=none")
    if scored.returncode != 0:
        print(scored.stderr, end="", file=sys.stderr)
        return error(f"objdiff failed for {unit}", 1)
    try:
        payload = json.loads(scored.stdout)
    except json.JSONDecodeError:
        return error(f"objdiff returned no usable JSON for {unit}", 1)

    left = payload.get("left") or {}
    text_sections = [
        section
        for section in left.get("sections", [])
        if section["name"] == ".text" and section.get("match_percent") is not None
    ]
    text_match = text_sections[0]["match_percent"] if text_sections else None
    functions = function_rows(left)
    other_sections = []
    for section in left.get("sections", []):
        percent = section.get("match_percent")
        if section["name"] != ".text" and percent is not None and percent != 100.0:
            other_sections.append(
                {
                    "name": section["name"],
                    "size": section.get("size"),
                    "match_percent": percent,
                }
            )

    ok = (
        text_match == 100.0
        and bool(functions)
        and all(function["match_percent"] == 100.0 for function in functions)
    )
    notes = []
    if not ok:
        right = payload.get("right") or {}
        target_sections = {section["name"] for section in left.get("sections", [])}
        custom_sections = [
            section["name"]
            for section in right.get("sections", [])
            if section["name"].startswith(".text.")
            and section["name"] not in target_sections
        ]
        if custom_sections:
            notes.append(
                "your C body places code in custom sections ("
                + ", ".join(custom_sections)
                + "); the retail unit object uses plain `.text`. Remove the "
                '`__attribute__((section(".text.*")))` seed attributes so the '
                "functions can be paired and linked."
            )
        elif any(function["match_percent"] is None for function in functions):
            notes.append(
                "the retail function symbol(s) could not be paired with your "
                "C; check the canonical symbol names in the body "
                "(see src/README.md and docs/source-headers.md)."
            )

    strict_match = None
    if ok:
        strict = objdiff_report(objdiff, project, unit, None)
        if strict.returncode == 0:
            try:
                strict_left = json.loads(strict.stdout).get("left") or {}
                strict_sections = [
                    section
                    for section in strict_left.get("sections", [])
                    if section["name"] == ".text"
                    and section.get("match_percent") is not None
                ]
                if strict_sections:
                    strict_match = strict_sections[0]["match_percent"]
            except json.JSONDecodeError:
                strict_match = None

    asm_dir = project / "expected" / "asm" / unit
    retail_asm = (
        sorted(
            str(path.relative_to(workspace))
            for path in asm_dir.glob("*.s")
            if path.is_file()
        )
        if asm_dir.is_dir()
        else []
    )
    result = {
        "unit": unit,
        "source": str(source.relative_to(ROOT)),
        "workspace": str(workspace),
        "staged_from": staged_from,
        "retail_bytes": sum(function["size"] for function in functions),
        "retail_asm": retail_asm,
        "functions": functions,
        "text_match_percent": text_match or 0.0,
        "strict_match_percent": strict_match,
        "other_sections": other_sections,
        "notes": notes,
        "differences": [] if ok else first_differences(left, payload.get("right") or {}),
        "ok": ok,
    }
    if args.json:
        print(json.dumps(result, indent=2))
    else:
        print_result(result)
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
