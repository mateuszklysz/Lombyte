#!/usr/bin/env python3
"""Shared configuration and source helpers for the contribution scripts.

There is no command-line interface here.  ``list-functions.py`` imports this
module for the pending-C work list, and ``check-unit.py`` imports it to stage
one unit's C body for measurement.

The configured-unit row format (``- [0xADDR, c, owner]``) and the category
file are the same contract as ``scripts/generate_treemap.py``; the map script
keeps its own copy of the parser so it stays standalone.
"""

from __future__ import annotations

import json
import os
import re
from pathlib import Path

ROW_RE = re.compile(
    r"^\s*-\s*\[(0x[0-9A-Fa-f]+)\s*,\s*([A-Za-z_][A-Za-z0-9_]*)\s*,\s*([^\]]+?)\s*\]\s*$"
)
# Assembly-backed units keep the retail oracle under `#ifndef NON_MATCHING`
# and the readable C body under `#else`; see src/assembly/README.md.
GUARD_RE = re.compile(r"^#ifndef\s+NON_MATCHING\s*$")
SYMBOL_RE = re.compile(r"(?m)^SYMBOL:\s*([A-Za-z_]\w*)\s*$")
ADDR_SYMBOL_RE = re.compile(r"^(?:FUN_|func_|D_|DAT_)[0-9A-Fa-f]+$")

CONFIG_PATH = Path("config") / "us" / "rnc1.us.yaml"
CATEGORY_PATH = Path("config") / "us" / "unit_categories.json"
RECOVERED_PATH = Path("config") / "us" / "recovered_names.json"


def parse_config_rows(config: Path) -> list[tuple[int, str, str]]:
    """Configured rows as (address, kind, owner), sorted by address."""
    rows = []
    for line in config.read_text(errors="replace").splitlines():
        match = ROW_RE.match(line)
        if match:
            rows.append((int(match.group(1), 16), match.group(2), match.group(3)))
    rows.sort(key=lambda row: row[0])
    return rows


def configured_units(config: Path) -> list[dict]:
    """Configured C units as dicts with owner, address and byte size."""
    rows = parse_config_rows(config)
    units = []
    for index, (address, kind, owner) in enumerate(rows):
        if kind != "c":
            continue
        end = rows[index + 1][0] if index + 1 < len(rows) else address
        size = end - address
        if size > 0:
            units.append({"owner": owner, "address": address, "size": size})
    return units


def load_categories(path: Path | None) -> tuple[set[str], set[str]]:
    """Return (exact under assembly, intentional asm) owner sets."""
    if path is None or not path.is_file():
        return set(), set()
    try:
        payload = json.loads(path.read_text())
    except (OSError, json.JSONDecodeError):
        return set(), set()
    return (
        set(payload.get("exact_under_assembly", [])),
        set(payload.get("intentional_asm", [])),
    )


def demangle_cfront(name: str) -> str:
    """`videoDecAbort__FP8VideoDec` -> `videoDecAbort` (display only)."""
    stem = name.split("__F", 1)[0]
    return stem if stem[:1].isalpha() else name


def load_recovered_full(config_dir: Path) -> dict[str, str]:
    """owner -> recovered name for `full` matches starting at the unit start."""
    path = config_dir / "recovered_names.json"
    if not path.is_file():
        return {}
    try:
        payload = json.loads(path.read_text())
    except (OSError, json.JSONDecodeError):
        return {}
    names: dict[str, str] = {}
    for entry in payload.get("symbols", []):
        if entry.get("match") != "full":
            continue
        unit = entry.get("unit")
        name = str(entry.get("name") or "")
        if not unit or not name:
            continue
        address, unit_address = entry.get("address"), entry.get("unit_address")
        if address and unit_address and address != unit_address:
            continue
        # The yaml owner and the recovered table agree on one of these forms.
        names.setdefault(unit, name)
        names.setdefault(unit.removeprefix("assembly/"), name)
    return names


def display_for(owner: str, source: Path, recovered: dict[str, str]) -> str | None:
    """Evidence-backed display name for a unit, or None."""
    if source.is_file():
        match = SYMBOL_RE.search(source.read_text(errors="replace")[:600])
        if match and not ADDR_SYMBOL_RE.match(match.group(1)):
            return demangle_cfront(match.group(1))
    name = recovered.get(owner) or recovered.get(owner.removeprefix("assembly/"))
    return demangle_cfront(name) if name else None


def unit_source(repo: Path, owner: str) -> Path:
    """Source file path for a configured unit owner."""
    return repo / "src" / f"{owner}.c"


def default_workspace() -> Path:
    """Baseline workspace location used when none is passed explicitly."""
    return Path(os.environ.get("BASELINE_ROOT") or "~/rnc-baseline").expanduser()


def workspace_problem(workspace: Path) -> str | None:
    """Describe why ``workspace`` cannot be used, or return None."""
    if not (workspace / ".rnc-baseline-root").is_file():
        return (
            f"{workspace} is not a baseline workspace; run ./verify-baseline.sh "
            "once (or pass --workspace)"
        )
    project = workspace / "config" / "us"
    objdiff = workspace / "tools" / "objdiff" / "objdiff-cli"
    if not (project / "build.ninja").is_file() or not objdiff.is_file():
        return f"{workspace} is incomplete; re-run ./verify-baseline.sh"
    return None


def classify_units(repo: Path) -> list[dict]:
    """Every configured C unit with category, source path and display name.

    Categories follow scripts/generate_treemap.py: ``exact`` (matching C),
    ``asm`` (intentional low-level asm, excluded from the C goal) and
    ``pending`` (C still missing or not byte-exact).
    """
    exact_assembly, intentional = load_categories(repo / CATEGORY_PATH)
    recovered = load_recovered_full(repo / RECOVERED_PATH.parent)
    units = []
    for unit in configured_units(repo / CONFIG_PATH):
        owner = unit["owner"]
        source = unit_source(repo, owner)
        if owner in exact_assembly or (
            not owner.startswith("assembly/") and source.is_file()
        ):
            category = "exact"
        elif owner in intentional:
            category = "asm"
        else:
            category = "pending"
        units.append(
            {
                **unit,
                "source": source,
                "category": category,
                "display": display_for(owner, source, recovered),
            }
        )
    return units


def split_oracle_guard(text: str) -> tuple[bool, str | None]:
    """Split a source file at the ``#ifndef NON_MATCHING`` oracle guard.

    Returns ``(uses_guard, c_body)``:

    * ``(False, None)`` - plain source without a guard (already pure C, or an
      assembly-only file that has no C body to measure);
    * ``(True, None)`` - guarded oracle without a ``#else`` C body;
    * ``(True, str)`` - guarded oracle with the readable C body.
    """
    lines = text.splitlines(keepends=True)
    start = next(
        (index for index, line in enumerate(lines) if GUARD_RE.match(line.strip())),
        None,
    )
    if start is None:
        return False, None
    depth = 0
    body_start = None
    for index in range(start, len(lines)):
        stripped = lines[index].strip()
        if not stripped.startswith("#"):
            continue
        directive = stripped[1:].split(None, 1)[0] if len(stripped) > 1 else ""
        if directive in ("if", "ifdef", "ifndef"):
            depth += 1
        elif directive == "endif":
            depth -= 1
            if depth == 0:
                if body_start is not None:
                    return True, "".join(lines[body_start:index])
                return True, None
        elif directive in ("else", "elif") and depth == 1:
            body_start = index + 1 if directive == "else" else None
    return True, None
