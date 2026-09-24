#!/usr/bin/env python3
"""Progress report for decomp.dev, in objdiff's report format (version 2).

decomp.dev reads ``report.json`` from the CI artifact ``SCUS_971.99_report``
on the default branch. CI cannot build the game: the retail executable and
several compilers may not be redistributed. So the report is generated
locally and committed as ``progress/report.json``; the workflow only checks
that it is current, validates it with objdiff and uploads it.

What the report counts (the same contract as ``assets/decomp_map.json``):

* every configured C unit (``config/us/rnc1.us.yaml`` rows ``[0xADDR, c,
  owner]``) with its byte size;
* a unit is matched only when it is C_EXACT: a promoted source outside
  ``src/assembly/`` or a legacy exact unit in ``config/us/unit_categories.json``.
  Assembly-backed units build from their retail oracle, so the ordinary
  objdiff report of the baseline shows them as 100 %; this report does not;
* intentional low-level asm units are left out, as in the C_EXACT metric;
* pending units carry their measured ``.text`` similarity as the fuzzy score.

The file holds unit names, symbols, addresses, sizes and percentages only; no
retail bytes.

Usage::

    python3 scripts/gen_progress_report.py --workspace build/baseline
        after ./verify-baseline.sh: measure pending units, write the report
    python3 scripts/gen_progress_report.py
        rewrite the report from the repository, reusing committed fuzzy scores
    python3 scripts/gen_progress_report.py --check
        CI: fail when the committed report does not match the repository

``--check`` needs neither the toolchain nor the executable.
"""

from __future__ import annotations

import argparse
import json
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from rnc_units import INCLUDE_ASM_RE, classify_units, source_symbol  # noqa: E402

REPO = Path(__file__).resolve().parents[1]
REPORT = REPO / "progress" / "report.json"
SDK_DIRS = {"sdk", "kernel"}
CATEGORIES = (("game", "Game"), ("sdk", "Sony SDK"))


def unit_name(owner: str) -> str:
    """Stable name: promotion moves a unit out of ``assembly/``."""
    return owner.removeprefix("assembly/")


def unit_category(name: str) -> str:
    return "sdk" if name.split("/", 1)[0] in SDK_DIRS else "game"


def unit_symbol(unit: dict) -> str:
    source = unit["source"]
    if source.is_file():
        text = source.read_text(errors="replace")
        if unit["category"] == "pending":
            match = INCLUDE_ASM_RE.search(text)
            if match:
                return match.group(1)
        symbol = source_symbol(source)
        if symbol:
            return symbol
    return unit_name(unit["owner"]).rsplit("/", 1)[-1]


def measure_pending(workspace: Path) -> dict[str, float]:
    """Pending-unit similarity from ``scripts/list-functions.py --score``."""
    process = subprocess.run(
        [sys.executable, str(REPO / "scripts" / "list-functions.py"), "--score",
         "--limit", "0", "--json", "--workspace", str(workspace)],
        stdout=subprocess.PIPE, text=True, cwd=REPO)
    if process.returncode != 0:
        raise SystemExit("scripts/list-functions.py --score failed")
    return {unit_name(str(item["unit"])): float(item["score"])
            for item in json.loads(process.stdout)
            if item.get("unit") and item.get("score") is not None}


def committed_scores(path: Path) -> dict[str, float]:
    if not path.is_file():
        return {}
    report = json.loads(path.read_text())
    return {unit["name"]: float(unit["functions"][0].get("fuzzy_match_percent", 0.0))
            for unit in report.get("units", []) if unit.get("functions")}


def measures(units: list[dict]) -> dict:
    total = sum(u["size"] for u in units)
    matched = sum(u["size"] for u in units if u["exact"])
    fuzzy = sum(u["size"] * u["fuzzy"] for u in units)
    pct = (lambda part: round(100.0 * part / total, 6)) if total else (lambda part: 0.0)
    return {
        "fuzzy_match_percent": round(fuzzy / total, 6) if total else 0.0,
        "total_code": str(total),
        "matched_code": str(matched),
        "matched_code_percent": pct(matched),
        "total_functions": len(units),
        "matched_functions": sum(1 for u in units if u["exact"]),
        "matched_functions_percent":
            round(100.0 * sum(1 for u in units if u["exact"]) / len(units), 6) if units else 0.0,
        "complete_code": str(matched),
        "complete_code_percent": pct(matched),
        "total_units": len(units),
        "complete_units": sum(1 for u in units if u["exact"]),
    }


def build_report(scores: dict[str, float]) -> dict:
    units = []
    for unit in classify_units(REPO):
        if unit["category"] == "asm":
            continue
        name = unit_name(unit["owner"])
        exact = unit["category"] == "exact"
        fuzzy = 100.0 if exact else round(min(100.0, max(0.0, scores.get(name, 0.0))), 4)
        if not exact and fuzzy >= 100.0:
            fuzzy = 99.99  # only promoted C counts as matched
        units.append({"name": name, "size": unit["size"], "address": unit["address"],
                      "exact": exact, "fuzzy": fuzzy, "category": unit_category(name),
                      "symbol": unit_symbol(unit),
                      "source_path": f"src/{unit['owner']}.c"})
    units.sort(key=lambda u: u["address"])

    report_units = []
    for u in units:
        report_units.append({
            "name": u["name"],
            "measures": measures([u]),
            "functions": [{
                "name": u["symbol"],
                "size": str(u["size"]),
                "fuzzy_match_percent": u["fuzzy"],
                "address": "0",
                "metadata": {"virtual_address": str(u["address"])},
            }],
            "metadata": {"progress_categories": [u["category"]],
                         "source_path": u["source_path"]},
        })
    return {
        "measures": measures(units),
        "units": report_units,
        "version": 2,
        "categories": [{"id": cid, "name": cname,
                        "measures": measures([u for u in units if u["category"] == cid])}
                       for cid, cname in CATEGORIES],
    }


def render(report: dict) -> str:
    return json.dumps(report, indent=1) + "\n"


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    mode = parser.add_mutually_exclusive_group()
    mode.add_argument("--workspace", type=Path,
                      help="baseline workspace to measure pending units in (local only)")
    mode.add_argument("--check", action="store_true",
                      help="fail if progress/report.json is out of date (CI)")
    parser.add_argument("--report", type=Path, default=REPORT)
    args = parser.parse_args(argv)

    scores = (measure_pending(args.workspace) if args.workspace
              else committed_scores(args.report))
    text = render(build_report(scores))
    if args.check:
        if not args.report.is_file() or args.report.read_text() != text:
            print(f"{args.report.relative_to(REPO)} is out of date: run "
                  "python3 scripts/gen_progress_report.py --workspace build/baseline "
                  "after ./verify-baseline.sh and commit the result", file=sys.stderr)
            return 1
        print(f"{args.report.relative_to(REPO)} is current")
        return 0
    args.report.parent.mkdir(parents=True, exist_ok=True)
    args.report.write_text(text)
    m = json.loads(text)["measures"]
    print(f"wrote {args.report.relative_to(REPO)}: {m['matched_code']} / {m['total_code']} B "
          f"({m['matched_code_percent']:.2f} %), fuzzy {m['fuzzy_match_percent']:.2f} %, "
          f"{m['complete_units']} / {m['total_units']} units")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
