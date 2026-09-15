#!/usr/bin/env python3
"""List the units whose C is still pending, smallest first.

Reads ``config/us/rnc1.us.yaml`` and ``config/us/unit_categories.json``, so no
build and no game files are needed.  A *pending* unit is assembly-backed
(``src/assembly/...``) and is neither intentional low-level asm nor already
byte-exact.  By default only units that already carry a readable C body under
``#else`` are listed: those are the ones to refine rather than write from
scratch.

Usage:
  python3 scripts/list-functions.py                 # 25 smallest with a C body
  python3 scripts/list-functions.py --all           # include units with no C yet
  python3 scripts/list-functions.py --limit 100
  python3 scripts/list-functions.py --filter textbin --all
  python3 scripts/list-functions.py --json
"""

from __future__ import annotations

import argparse
import json
import sys
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
        "--json",
        action="store_true",
        help="print the matching units as JSON",
    )
    return parser.parse_args(argv)


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
    selected = sorted(selected, key=lambda unit: (unit["size"], unit["owner"]))
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
    if not args.all:
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
    print(f"  {'BYTES':>6}  {'UNIT':<{width}}  NAME")
    for unit in selected:
        name = unit["display"] or "-"
        flag = "" if unit["c_body"] else "  [asm only]"
        print(f"  {unit['size']:>6}  {unit['owner']:<{width}}  {name}{flag}")

    shown = len(selected)
    if shown < len(listed if args.all else with_body):
        print(f"\nShowing {shown} of {len(listed if args.all else with_body)}.")
    print("\nPick one and measure it with:")
    print("  python3 scripts/check-unit.py <unit>")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
