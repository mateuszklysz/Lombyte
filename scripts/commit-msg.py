#!/usr/bin/env python3
"""Git hook: validate the commit subject against docs/commit-messages.md.

Install into the repository (idempotent):

    ln -sf ./scripts/commit-msg .git/hooks/commit-msg
    # or: python3 scripts/install-commit-hook.py  (tools repository)

The standard is one lowercase `<type>: <summary>` prefix per subject
(`decomp`, `docs`, `chore`, `fix`, `config`), with no repeated scope token.

The hook also rewrites the message file before validation: every line
containing `co-authored-by` (case-insensitive) is dropped, so agent trailers
never enter the history.  Messages without such a line are left untouched,
byte for byte.
"""

import importlib.util
import os
import re
import sys
from pathlib import Path

TYPES = {"decomp", "docs", "chore", "fix", "config"}
SUBJECT_RE = re.compile(r"^(?P<type>[a-z]+): (?P<summary>\S.*)$")
NON_IMPERATIVE_RE = re.compile(
    r"^(?:added|updated|fixed|changed|removed|moved)\b", re.IGNORECASE
)

# Prefer the shared validator from a tooling checkout; fall back to the local rule.
NAMING = Path(os.environ.get("RNC_COMMIT_NAMING", ""))
problems: list[str] = []

# Trailer form only (line starts with the token + ":"): prose that merely
# mentions the term, e.g. in a commit about this hook, must survive.
TRAILER_RE = re.compile(r"^\s*co[-_]?authored[-_]?by\s*:",
                        re.IGNORECASE | re.MULTILINE)


def strip_trailers(path: Path) -> bool:
    """Drop co-authored-by lines from the message file; True if it was rewritten.

    git lets this hook edit the message file.  Blank-line runs caused by the
    removal are collapsed and trailing blanks are dropped; a message that does
    not mention co-authored-by is never rewritten.
    """
    raw = path.read_text(errors="replace")
    if not TRAILER_RE.search(raw):
        return False
    kept = [line for line in raw.split("\n") if not TRAILER_RE.search(line)]
    out: list[str] = []
    blank = False
    for line in kept:
        if not line.strip():
            if blank:
                continue
            blank = True
        else:
            blank = False
        out.append(line)
    while out and not out[-1].strip():
        out.pop()
    path.write_text("\n".join(out) + ("\n" if out else ""))
    return True


def validate(subject: str) -> list[str]:
    found: list[str] = []
    match = SUBJECT_RE.match(subject.strip())
    if not match:
        return ["expected '<type>: <summary>' with a lowercase type prefix"]
    kind, summary = match.group("type"), match.group("summary")
    if kind not in TYPES:
        found.append(f"unknown type '{kind}' (use one of: {', '.join(sorted(TYPES))})")
    if len(subject) > 120:
        found.append(f"subject is {len(subject)} characters (limit 120)")
    if summary[:1].isupper() and not summary.split(" ", 1)[0].isupper():
        found.append("summary should be lowercase")
    if NON_IMPERATIVE_RE.match(summary):
        found.append("summary should use the imperative mood (e.g. 'promote ...')")
    if re.match(r"^(?:decomp|docs|chore|fix|config):", summary):
        found.append("type prefix must not be repeated in the summary")
    if re.match(r"^[\w/.-]+:\s", summary):
        found.append("scope token (e.g. 'textbin:', 'sdk:') must be dropped")
    if summary.endswith("."):
        found.append("summary should not end with a period")
    return found


if NAMING.is_file():
    spec = importlib.util.spec_from_file_location("commit_naming", NAMING)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    validate = module.validate_subject

MSG = Path(sys.argv[1]) if len(sys.argv) > 1 else None
if MSG is not None and strip_trailers(MSG):
    print("commit-msg: dropped co-authored-by line(s) from the message", file=sys.stderr)
text = MSG.read_text(errors="replace") if MSG else ""
subject = ""
for line in text.splitlines():
    if line.strip() and not line.lstrip().startswith("#"):
        subject = line
        break
problems = validate(subject)
if problems:
    for problem in problems:
        print(f"commit-msg: {problem}", file=sys.stderr)
    print(f"commit-msg: got '{subject.strip()}'", file=sys.stderr)
    print("commit-msg: see docs/commit-messages.md", file=sys.stderr)
    sys.exit(1)
