#!/usr/bin/env python3
"""List the units whose C is still pending, smallest first.

Reads ``config/us/rnc1.us.yaml`` and ``config/us/unit_categories.json``, so no
build and no game files are needed.  A *pending* unit is assembly-backed
(``src/assembly/...``) and is neither intentional low-level asm nor already
byte-exact.  By default only units that already carry a readable C body under
``#else`` are listed: those are the ones to refine rather than write from
scratch.

With ``--score`` every listed unit's C body is measured against retail (about
a minute for the full list) and the highest scores are listed first: those are
usually the closest to a promotion.  This needs the baseline workspace built
once with ``./verify-baseline.sh`` (``build/baseline`` inside the checkout, or
``$BASELINE_ROOT`` when set); only that workspace is written to.

Usage:
  python3 scripts/list-functions.py                 # 25 smallest with a C body
  python3 scripts/list-functions.py --score         # rank by current match %
  python3 scripts/list-functions.py --score --limit 50 --filter textbin
  python3 scripts/list-functions.py --all           # include units with no C yet
  python3 scripts/list-functions.py --json
"""

from __future__ import annotations

import argparse
import json
import subprocess
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import rnc_units  # noqa: E402

ROOT = Path(__file__).resolve().parents[1]


def parse_args(argv=None):
    parser = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter
    )
    parser.add_argument(
        "--all",
        action="store_true",
        help="also list units that have no readable C body yet",
    )
    parser.add_argument(
        "--limit",
        type=int,
        default=25,
        metavar="N",
        help="show at most N units; 0 means no limit (default: 25)",
    )
    parser.add_argument(
        "--filter",
        metavar="TEXT",
        help="only units whose owner path contains TEXT",
    )
    parser.add_argument(
        "--score",
        action="store_true",
        help="measure each listed C body and sort by match percentage",
    )
    parser.add_argument(
        "--workspace",
        type=Path,
        default=None,
        help="baseline workspace for --score (default: $BASELINE_ROOT or build/baseline in the checkout)",
    )
    parser.add_argument(
        "--json",
        action="store_true",
        help="print the matching units as JSON",
    )
    return parser.parse_args(argv)


def score_unit(owner: str, workspace: Path) -> tuple[float | None, str | None]:
    """Measure one unit through check-unit.py; return (percent, error)."""
    process = subprocess.run(
        [
            sys.executable,
            str(ROOT / "scripts" / "check-unit.py"),
            owner,
            "--workspace",
            str(workspace),
            "--json",
        ],
        capture_output=True,
        text=True,
    )
    if process.returncode not in (0, 1):
        lines = [line for line in process.stderr.strip().splitlines() if line.strip()]
        return None, lines[-1] if lines else "check-unit failed"
    try:
        payload = json.loads(process.stdout)
    except json.JSONDecodeError:
        return None, "check-unit returned no usable JSON"
    return payload.get("text_match_percent"), None


def score_units(units: list[dict], workspace: Path) -> int:
    """Fill in ``score`` for every unit with a C body; return the error count."""
    scorable = [unit for unit in units if unit["c_body"]]
    for unit in units:
        unit["score"] = None
        unit["score_error"] = None
    errors = 0
    for index, unit in enumerate(scorable, 1):
        percent, problem = score_unit(unit["owner"], workspace)
        unit["score"] = percent
        unit["score_error"] = problem
        if problem:
            errors += 1
            shown = "error"
        elif percent is None:
            shown = "?"
        else:
            shown = f"{percent:.1f}%"
        print(
            f"[{index:>3}/{len(scorable)}] {shown:>7}  {unit['owner']}",
            file=sys.stderr,
        )
    return errors


def main(argv=None) -> int:
    args = parse_args(argv)
    all_units = rnc_units.classify_units(ROOT)
    listed = [unit for unit in all_units if unit["category"] == "pending"]
    if args.filter:
        needle = args.filter.lower()
        listed = [unit for unit in listed if needle in unit["owner"].lower()]
    for unit in listed:
        text = (
            unit["source"].read_text(errors="replace")
            if unit["source"].is_file()
            else ""
        )
        has_guard, body = rnc_units.split_oracle_guard(text)
        unit["c_body"] = bool(body) if has_guard else bool(text)

    with_body = [unit for unit in listed if unit["c_body"]]
    selected = listed if args.all else with_body
    to_score = len(with_body)

    errors = 0
    elapsed = 0.0
    if args.score:
        workspace = args.workspace or rnc_units.default_workspace(ROOT)
        workspace = workspace.expanduser().resolve()
        problem = rnc_units.workspace_problem(workspace, ROOT)
        if problem:
            print(f"list-functions: error: {problem}", file=sys.stderr)
            return 2
        if not rnc_units.path_inside(workspace, ROOT):
            print(
                f"note: workspace is outside the checkout: {workspace}",
                file=sys.stderr,
            )
        started = time.monotonic()
        errors = score_units(list(selected), workspace)
        elapsed = time.monotonic() - started
        selected.sort(
            key=lambda unit: (
                0 if unit["score"] is None else -unit["score"],
                unit["size"],
                unit["owner"],
            )
        )
    else:
        selected.sort(key=lambda unit: (unit["size"], unit["owner"]))
    if args.limit > 0:
        selected = selected[: args.limit]

    if args.json:
        print(
            json.dumps(
                [
                    {
                        "unit": unit["owner"],
                        "address": f"0x{unit['address']:X}",
                        "bytes": unit["size"],
                        "name": unit["display"],
                        "source": str(unit["source"].relative_to(ROOT)),
                        "has_c_body": unit["c_body"],
                        "score": unit.get("score"),
                        "score_error": unit.get("score_error"),
                    }
                    for unit in selected
                ],
                indent=2,
            )
        )
        return 0

    total = sum(unit["size"] for unit in listed)
    print(
        f"{len(listed)} pending units / {total:,} bytes "
        f"(of {len(all_units)} configured C units)\n"
    )
    if args.score:
        print(
            f"Scored {to_score} units in {elapsed:.1f}s; highest match "
            "first (closest to promotion):\n"
        )
    elif not args.all:
        missing = [unit for unit in listed if not unit["c_body"]]
        line = f"{len(with_body)} of them have a readable C body; smallest first"
        if missing:
            line += f" ({len(missing)} more have no C yet; pass --all to include them)"
        print(line + ":\n")
    else:
        print("Smallest first:\n")

    if not selected:
        print("  (no matching unit)")
        return 0

    width = max(len(unit["owner"]) for unit in selected)
    if args.score:
        print(f"  {'SCORE':>6}  {'BYTES':>6}  {'UNIT':<{width}}  NAME")
    else:
        print(f"  {'BYTES':>6}  {'UNIT':<{width}}  NAME")
    for unit in selected:
        name = unit["display"] or "-"
        flag = "" if unit["c_body"] else "  [asm only]"
        if args.score:
            score = unit.get("score")
            shown = "error" if unit.get("score_error") else (
                f"{score:.1f}%" if score is not None else "-"
            )
            print(f"  {shown:>6}  {unit['size']:>6}  {unit['owner']:<{width}}  {name}{flag}")
        else:
            print(f"  {unit['size']:>6}  {unit['owner']:<{width}}  {name}{flag}")

    shown = len(selected)
    pool = len(listed if args.all else with_body)
    if shown < pool:
        print(f"\nShowing {shown} of {pool}.")
    if errors:
        print(f"{errors} unit(s) could not be measured.")
    if not args.score:
        print("\nTip: pass --score to rank the list by current match percentage.")
    print("\nRefine one with:" if args.score else "\nPick one and measure it with:")
    print("  python3 scripts/check-unit.py <unit>")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
