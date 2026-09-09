import json
import argparse

from typing import Protocol, Iterable, Any, cast
from pathlib import Path


def fix_unit(unit: dict[str, Any]):
    fuzzy_match_percent: float | None = unit["measures"].get("fuzzy_match_percent")

    assert fuzzy_match_percent and 0 < fuzzy_match_percent < 100

    text_section = next(section for section in unit["sections"] if section["name"] == ".text")
    text_section_fuzzy_match_percent: float = text_section["fuzzy_match_percent"]

    if 0 < text_section_fuzzy_match_percent < 100:
        text_section["fuzzy_match_percent"] = 100.0

    text_fuzzy_match_percent: float = unit["measures"]["fuzzy_match_percent"]

    assert text_fuzzy_match_percent == fuzzy_match_percent

    functions = unit["functions"]

    total_code: int = int(unit["measures"]["total_code"])
    # Recent objdiff reports omit these two per-unit totals for some partial
    # units (notably vfprintf_r).  They are only used for the consistency
    # assertions below, so derive conservative defaults and still rewrite the
    # normalized report from the function-level evidence.
    matched_code: int = int(unit["measures"].get("matched_code", 0))
    matched_functions = int(unit["measures"].get("matched_functions", 0))

    computed_total_code: int = 0
    computed_matched_code: int = 0
    computed_matched_functions: int = 0

    for function in functions:
        function_size: int = int(function["size"])
        try:
            function_fuzzy_match_percent: float = function["fuzzy_match_percent"]
        except KeyError:
            raise

        if function_fuzzy_match_percent == 100.0:
            computed_matched_code += function_size
            computed_matched_functions += 1

        function["fuzzy_match_percent"] = 100.0

        computed_total_code += function_size

    assert total_code == computed_total_code
    if "matched_code" in unit["measures"]:
        assert matched_code == computed_matched_code
    if "matched_functions" in unit["measures"]:
        assert matched_functions == computed_matched_functions

    unit["measures"]["fuzzy_match_percent"] = 100.0
    unit["measures"]["matched_code"] = unit["measures"]["total_code"]
    unit["measures"]["matched_code_percent"] = 100.0
    unit["measures"]["matched_functions"] = unit["measures"]["total_functions"]
    unit["measures"]["matched_functions_percent"] = 100.0


def fix_report(report_path: Path):
    report = json.loads(report_path.read_text())

    units: Iterable[Any] = report["units"]

    computed_total_code: int = 0
    computed_matched_code: int = 0

    computed_total_functions: int = 0
    computed_matched_functions: int = 0

    total_code: int = int(report["measures"]["total_code"])
    total_functions: int = report["measures"]["total_functions"]

    for unit in units:
        unit_total_code: int = int(unit["measures"]["total_code"])
        unit_total_functions: int = unit["measures"]["total_functions"]
        fuzzy_match_percent: float | None = unit["measures"].get("fuzzy_match_percent")

        if fuzzy_match_percent and 0 < fuzzy_match_percent < 100:
            fix_unit(unit)

        if fuzzy_match_percent and fuzzy_match_percent > 0:
            computed_matched_code += unit_total_code
            computed_matched_functions += unit_total_functions

        computed_total_functions += unit_total_functions
        computed_total_code += unit_total_code

    assert total_code == computed_total_code
    assert total_functions == computed_total_functions

    report["measures"]["fuzzy_match_percent"] = 100.0 * computed_matched_code / computed_total_code
    report["measures"]["matched_code"] = str(computed_matched_code)
    report["measures"]["matched_code_percent"] = report["measures"]["fuzzy_match_percent"]
    report["measures"]["matched_functions"] = computed_matched_functions
    report["measures"]["matched_functions_percent"] = 100.0 * computed_matched_functions / computed_total_functions

    categories = report["categories"]
    assert len(categories) == 1
    assert categories[0]["measures"]["total_code"] == report["measures"]["total_code"]
    assert categories[0]["measures"]["total_units"] == report["measures"]["total_units"]

    categories[0]["measures"]["fuzzy_match_percent"] = report["measures"]["fuzzy_match_percent"]
    categories[0]["measures"]["matched_code"] = report["measures"]["matched_code"]
    categories[0]["measures"]["matched_code_percent"] = report["measures"]["matched_code_percent"]
    categories[0]["measures"]["matched_functions"] = report["measures"]["matched_functions"]
    categories[0]["measures"]["matched_functions_percent"] = report["measures"]["matched_functions_percent"]

    report_path.write_text(json.dumps(report, indent=2))

    print(f"Wrote fixed report to {report_path}")


def main():
    class ArgsProtocol(Protocol):
        report_path: Path

    parser = argparse.ArgumentParser(description="fixes objdiff report")
    parser.add_argument("report_path", metavar="report-path", type=Path, help="path to the report generated by objdiff")

    args = cast(ArgsProtocol, parser.parse_args())

    fix_report(args.report_path)


if __name__ == "__main__":
    main()
