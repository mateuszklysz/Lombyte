#!/usr/bin/env python3
"""Regression tests for the repository-owned build and map scripts.

Run with:  python3 scripts/test_public_tools.py -v
"""

import contextlib
import hashlib
import importlib.util
import io
import json
import os
import shutil
import struct
import subprocess
import sys
import tempfile
import textwrap
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest import mock

ROOT = Path(__file__).resolve().parents[1]


def load_module(name: str, path: Path):
    spec = importlib.util.spec_from_file_location(name, path)
    module = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(module)
    return module


class TreemapClassificationTests(unittest.TestCase):
    """generate_treemap.py must classify owners exactly as documented."""

    @classmethod
    def setUpClass(cls):
        cls.treemap = load_module(
            "rnc_generate_treemap", ROOT / "scripts" / "generate_treemap.py"
        )

    def _workspace(self, tmp: Path):
        (tmp / "src" / "textbin").mkdir(parents=True)
        (tmp / "src" / "textbin" / "promoted.c").write_text("/* promoted */\n")
        (tmp / "src" / "assembly" / "textbin").mkdir(parents=True)
        (tmp / "src" / "assembly" / "textbin" / "pending.c").write_text(
            "/* oracle */\n"
        )
        config = tmp / "config.yaml"
        config.write_text(
            textwrap.dedent(
                """
            segments:
              - [0, databin, elf_header]
              - name: main
                type: code
                start: 0x1000
                vram: 0x100080
                subsegments:
                  - [0x1000, textbin, vutext]
                  - [0x13300, c, textbin/promoted]
                  - [0x13400, c, assembly/textbin/pending]
                  - [0x13500, c, assembly/ee/legacy_exact]
                  - [0x13600, textbin, text_gap_end]
            """
            )
        )
        categories = tmp / "categories.json"
        categories.write_text(
            json.dumps(
                {
                    "exact_under_assembly": ["assembly/ee/legacy_exact"],
                    "intentional_asm": ["assembly/asm/leaf"],
                }
            )
        )
        return config, categories

    def test_categories_drive_tile_colors(self):
        with tempfile.TemporaryDirectory() as name:
            tmp = Path(name)
            config, categories = self._workspace(tmp)
            units = {
                u["owner"]: u["category"]
                for u in self.treemap.build_units(tmp, config, categories)
            }
        self.assertEqual(units["textbin/promoted"], "exact")
        self.assertEqual(units["assembly/ee/legacy_exact"], "exact")
        self.assertEqual(units["assembly/textbin/pending"], "pending")

    def test_missing_categories_file_is_not_fatal(self):
        with tempfile.TemporaryDirectory() as name:
            tmp = Path(name)
            config, _ = self._workspace(tmp)
            units = self.treemap.build_units(tmp, config, tmp / "missing.json")
        self.assertTrue(any(u["owner"] == "textbin/promoted" for u in units))


class SourceHeaderTests(unittest.TestCase):
    """stamp_source_header.py must write, normalize and validate the block."""

    BLOCK = (
        "/*\n"
        "STATE: C_EXACT\n"
        "SYMBOL: Foo\n"
        "SCORE: code=100 functions=100 data=100 complete_data=100\n"
        "DECISION: promoted\n"
        "*/\n\n"
    )

    @classmethod
    def setUpClass(cls):
        cls.stamp = load_module(
            "rnc_stamp_source_header", ROOT / "scripts" / "stamp_source_header.py"
        )

    def test_insert_block_at_top(self):
        fields = {
            "STATE": "C_EXACT",
            "SYMBOL": "Foo",
            "SCORE": "code=100 functions=100 data=100 complete_data=100",
            "DECISION": "promoted",
        }
        self.assertEqual(
            self.stamp.update("int Foo(void) { return 1; }\n", fields),
            self.BLOCK + "int Foo(void) { return 1; }\n",
        )

    def test_render_uses_canonical_field_order(self):
        block = self.stamp.render_block(
            {
                "NOTE": "pinned register",
                "DECISION": "promoted",
                "SCORE": "1",
                "SYMBOL": "Foo",
                "STATE": "C_NON_MATCHING",
                "BLOCKER": "none",
            }
        )
        keys = [line.split(":")[0] for line in block.splitlines()[1:-1]]
        self.assertEqual(
            keys, ["STATE", "SYMBOL", "SCORE", "DECISION", "BLOCKER", "NOTE"]
        )

    def test_update_removes_evidence_and_keeps_fields(self):
        text = (
            "/*\nSTATE: C_EXACT\nSYMBOL: Foo\nSCORE: 1\n"
            "DECISION: promoted\nEVIDENCE: analysis/foo.json\n*/\ncode\n"
        )
        out = self.stamp.update(text, {}, ("EVIDENCE",))
        self.assertNotIn("EVIDENCE", out)
        self.assertIn("STATE: C_EXACT", out)
        self.assertIn("code\n", out)

    def test_validate_required_and_forbidden_fields(self):
        self.assertEqual(self.stamp.validate(self.BLOCK + "code\n"), [])
        self.assertIn("missing STATE block", self.stamp.validate("int x;\n"))
        with_evidence = self.BLOCK.replace(
            "DECISION: promoted", "DECISION: promoted\nEVIDENCE: x"
        )
        self.assertTrue(
            any("EVIDENCE" in problem for problem in self.stamp.validate(with_evidence))
        )

    def test_normalize_drops_legacy_and_moves_role(self):
        text = (
            "/* STATE: C_EXACT\n * SYMBOL: Foo\n * ROLE: does foo\n"
            " * SCORE: code=1 functions=2 data=3 complete_data=4\n"
            " * DECISION: promoted; BLOCKER: none.\n * GATE: private/log\n */\n"
            "/* NON_MATCHING FALLBACK (descriptive C)\n * blocker: y\n */\ncode\n"
        )
        expected = (
            "/*\nSTATE: C_EXACT\nSYMBOL: Foo\n"
            "SCORE: code=1 functions=2 data=3 complete_data=4\n"
            "DECISION: promoted\nBLOCKER: none\n*/\n\n"
            "/* ROLE: does foo */\n\ncode\n"
        )
        out = self.stamp.normalize(text)
        self.assertEqual(out, expected)
        self.assertEqual(self.stamp.normalize(out), out)

    def test_normalize_drops_candidate_metadata(self):
        text = (
            self.BLOCK + "/*\nAUTO-DIAGNOSIS\nsymbol: Foo\ncode_percent: 76.5\n*/\n\n"
            "/*\nAUTO-REFINEMENT:\n- attempt: 1\n- objdiff: {}\n*/\n\n"
            "/*\nAUTO-REFINEMENT:\n- attempt: 2\n*/\n\n"
            "int Foo(void) { return 1; }\n"
        )
        out = self.stamp.normalize(text)
        self.assertNotIn("AUTO-DIAGNOSIS", out)
        self.assertNotIn("AUTO-REFINEMENT", out)
        self.assertTrue(out.startswith("/*\nSTATE: C_EXACT"))
        self.assertIn("int Foo(void) { return 1; }\n", out)
        self.assertEqual(self.stamp.normalize(out), out)

    def test_check_cli_fails_on_missing_block(self):
        with tempfile.TemporaryDirectory() as name:
            path = Path(name) / "x.c"
            path.write_text("int x;\n")
            proc = subprocess.run(
                [
                    sys.executable,
                    str(ROOT / "scripts" / "stamp_source_header.py"),
                    "--check",
                    str(path),
                ],
                capture_output=True,
                text=True,
            )
            self.assertEqual(proc.returncode, 1)
            self.assertIn("missing STATE block", proc.stdout)


class BaselineGuardTests(unittest.TestCase):
    """verify-baseline.sh must never delete a non-baseline directory."""

    def test_refuses_foreign_directory(self):
        with tempfile.TemporaryDirectory() as name:
            foreign = Path(name) / "user-data"
            foreign.mkdir()
            keep = foreign / "important.txt"
            keep.write_text("do not delete\n")
            env = dict(os.environ)
            env["BASELINE_ROOT"] = str(foreign)
            proc = subprocess.run(
                ["bash", str(ROOT / "verify-baseline.sh")],
                capture_output=True,
                text=True,
                env=env,
                cwd=ROOT,
            )
            self.assertNotEqual(proc.returncode, 0)
            self.assertIn("refusing to remove", proc.stderr)
            self.assertTrue(keep.is_file())
            self.assertEqual(keep.read_text(), "do not delete\n")

    def test_accepts_marked_baseline_directory(self):
        with tempfile.TemporaryDirectory() as name:
            marked = Path(name) / "baseline"
            marked.mkdir()
            (marked / ".rnc-baseline-root").write_text("")
            env = dict(os.environ)
            env["BASELINE_ROOT"] = str(marked)
            # Stop after the guard: an intentionally invalid venv makes the
            # script die at the next check instead of building.
            env["VENV"] = str(Path(name) / "missing-venv")
            proc = subprocess.run(
                ["bash", str(ROOT / "verify-baseline.sh")],
                capture_output=True,
                text=True,
                env=env,
                cwd=ROOT,
            )
            self.assertNotIn("refusing to remove", proc.stderr)
            self.assertIn("missing virtual environment", proc.stderr)


class RebuildIsoExtentTests(unittest.TestCase):
    """rebuild-iso.py must locate, bounds-check and patch the boot extent."""

    SECTOR = 2048
    ROOT_LBA = 20
    SCUS_LBA = 30
    SCUS_SIZE = 4096

    @classmethod
    def setUpClass(cls):
        cls.rebuild = load_module("rnc_rebuild_iso", ROOT / "rebuild-iso.py")

    @classmethod
    def _record(cls, name: str, lba: int, size: int) -> bytes:
        encoded = name.encode("latin1")
        pad = b"\x00" if len(encoded) % 2 == 0 else b""
        record = bytearray(33 + len(encoded) + len(pad))
        record[0] = len(record)
        struct.pack_into("<I", record, 2, lba)
        struct.pack_into("<I", record, 10, size)
        record[32] = len(encoded)
        record[33 : 33 + len(encoded)] = encoded
        record[33 + len(encoded) :] = pad
        return bytes(record)

    @classmethod
    def _mini_iso(
        cls, scus_lba: int = SCUS_LBA, scus_size: int = SCUS_SIZE, prefix: bytes = b""
    ) -> bytearray:
        buf = bytearray(cls.SECTOR * 40)  # 80 KiB; SCUS at LBA 30 ends at 64 KiB
        buf[0x8000 : 0x8000 + 6] = b"\x01CD001"
        struct.pack_into("<I", buf, 0x8000 + 156 + 2, cls.ROOT_LBA)
        struct.pack_into("<I", buf, 0x8000 + 156 + 10, 512)
        off = cls.ROOT_LBA * cls.SECTOR
        records = (
            prefix
            + cls._record("SYSTEM.CNF;1", 19, 59)
            + b"\x00"
            + cls._record("SCUS_971.99;1", scus_lba, scus_size)
        )
        buf[off : off + len(records)] = records
        return buf

    def test_finds_boot_extent(self):
        iso = self._mini_iso()
        self.assertEqual(
            self.rebuild.find_boot_extent(bytes(iso)), (self.SCUS_LBA, self.SCUS_SIZE)
        )

    def test_walks_even_length_names_and_padding(self):
        iso = self._mini_iso(prefix=self._record("AB;1", 10, 1))
        self.assertEqual(
            self.rebuild.find_boot_extent(bytes(iso)), (self.SCUS_LBA, self.SCUS_SIZE)
        )

    def test_rejects_missing_name(self):
        with self.assertRaises(SystemExit):
            self.rebuild.find_boot_extent(
                bytes(self._mini_iso()), want_name="NOPE.BIN;1"
            )

    def test_rejects_non_iso_image(self):
        with self.assertRaises(SystemExit):
            self.rebuild.find_boot_extent(bytes(self.SECTOR * 17))

    def test_refuses_extent_beyond_eof(self):
        iso = self._mini_iso(scus_lba=1000)  # LBA 1000 > 40-sector image
        with tempfile.TemporaryDirectory() as name:
            iso_path = Path(name) / "bad.iso"
            elf_path = Path(name) / "built.elf"
            iso_path.write_bytes(bytes(iso))
            elf_path.write_bytes(b"\x00" * self.SCUS_SIZE)
            with self.assertRaises(SystemExit) as raised:
                with mock.patch.object(
                    sys,
                    "argv",
                    [
                        "rebuild-iso.py",
                        "--iso",
                        str(iso_path),
                        "--elf",
                        str(elf_path),
                        "--out",
                        str(Path(name) / "out.iso"),
                    ],
                ):
                    with contextlib.redirect_stdout(io.StringIO()):
                        self.rebuild.main()
            self.assertIn("outside the ISO image", str(raised.exception))

    def test_patches_identical_extent_end_to_end(self):
        iso = self._mini_iso()
        extent = bytes(
            iso[
                self.SCUS_LBA * self.SECTOR : self.SCUS_LBA * self.SECTOR
                + self.SCUS_SIZE
            ]
        )
        with tempfile.TemporaryDirectory() as name:
            iso_path = Path(name) / "game.iso"
            elf_path = Path(name) / "built.elf"
            out_path = Path(name) / "rebuilt.iso"
            iso_path.write_bytes(bytes(iso))
            elf_path.write_bytes(extent)
            argv = [
                "rebuild-iso.py",
                "--iso",
                str(iso_path),
                "--elf",
                str(elf_path),
                "--out",
                str(out_path),
            ]
            stdout = io.StringIO()
            with (
                mock.patch.object(sys, "argv", argv),
                mock.patch.object(
                    self.rebuild, "RETAIL_SHA", hashlib.sha256(extent).hexdigest()
                ),
            ):
                with contextlib.redirect_stdout(stdout):
                    code = self.rebuild.main()
            self.assertEqual(code, 0)
            self.assertIn("byte-identical", stdout.getvalue())
            self.assertEqual(out_path.read_bytes(), bytes(iso))


class UnitListHelpersTests(unittest.TestCase):
    """rnc_units.py must parse the config and guard conventions exactly."""

    @classmethod
    def setUpClass(cls):
        cls.units = load_module("rnc_units", ROOT / "scripts" / "rnc_units.py")

    def test_parse_config_rows(self):
        with tempfile.TemporaryDirectory() as name:
            config = Path(name) / "config.yaml"
            config.write_text(
                textwrap.dedent(
                    """
                segments:
                  - [0, databin, elf_header]
                  - name: main
                    type: code
                    subsegments:
                      - [0x1000, textbin, vutext]
                      - [0x13300, c, textbin/exact_one]
                      - [0x13400, c, assembly/textbin/pending_one]
                      - [0x13500, textbin, text_gap_end]
                """
                )
            )
            rows = self.units.parse_config_rows(config)
            self.assertEqual(
                rows,
                [
                    (0x1000, "textbin", "vutext"),
                    (0x13300, "c", "textbin/exact_one"),
                    (0x13400, "c", "assembly/textbin/pending_one"),
                    (0x13500, "textbin", "text_gap_end"),
                ],
            )
            units = self.units.configured_units(config)
        self.assertEqual(
            units,
            [
                {"owner": "textbin/exact_one", "address": 0x13300, "size": 0x100},
                {
                    "owner": "assembly/textbin/pending_one",
                    "address": 0x13400,
                    "size": 0x100,
                },
            ],
        )

    def test_classify_units(self):
        with tempfile.TemporaryDirectory() as name:
            repo = Path(name)
            (repo / "config" / "us").mkdir(parents=True)
            (repo / "src" / "textbin").mkdir(parents=True)
            (repo / "src" / "assembly" / "textbin").mkdir(parents=True)
            (repo / "src" / "textbin" / "exact_one.c").write_text("/* promoted */\n")
            (repo / "src" / "assembly" / "textbin" / "pending_one.c").write_text(
                "/* oracle */\n"
            )
            (repo / "config" / "us" / "rnc1.us.yaml").write_text(
                textwrap.dedent(
                    """
                subsegments:
                  - [0x1000, c, textbin/exact_one]
                  - [0x1100, c, assembly/textbin/pending_one]
                  - [0x1200, c, assembly/textbin/intentional_asm]
                  - [0x1300, textbin, text_gap_end]
                """
                )
            )
            (repo / "config" / "us" / "unit_categories.json").write_text(
                json.dumps({"intentional_asm": ["assembly/textbin/intentional_asm"]})
            )
            units = {u["owner"]: u["category"] for u in self.units.classify_units(repo)}
        self.assertEqual(units["textbin/exact_one"], "exact")
        self.assertEqual(units["assembly/textbin/pending_one"], "pending")
        self.assertEqual(units["assembly/textbin/intentional_asm"], "asm")

    def test_split_oracle_guard_plain_source(self):
        self.assertEqual(self.units.split_oracle_guard("int f(void) { return 1; }\n"), (False, None))

    def test_split_oracle_guard_body(self):
        text = textwrap.dedent(
            """\
            #include "types.h"
            #ifndef NON_MATCHING
            INCLUDE_ASM("oracle.s", FUN_00123456);
            #else
            int FUN_00123456(void) {
                return 1;
            }
            #endif /* NON_MATCHING */
            """
        )
        has_guard, body = self.units.split_oracle_guard(text)
        self.assertTrue(has_guard)
        self.assertIn("return 1;", body)
        self.assertNotIn("INCLUDE_ASM", body)

    def test_split_oracle_guard_without_body(self):
        text = "#ifndef NON_MATCHING\nINCLUDE_ASM(\"oracle.s\", FUN_00123456);\n#endif\n"
        self.assertEqual(self.units.split_oracle_guard(text), (True, None))

    def test_split_oracle_guard_nested_directives(self):
        text = textwrap.dedent(
            """\
            #ifndef NON_MATCHING
            INCLUDE_ASM("oracle.s", FUN_00123456);
            #else
            #ifdef DEBUG
            #endif
            int FUN_00123456(void) {
                return 1;
            }
            #endif /* NON_MATCHING */
            """
        )
        has_guard, body = self.units.split_oracle_guard(text)
        self.assertTrue(has_guard)
        self.assertIn("return 1;", body)
        self.assertIn("#ifdef DEBUG", body)


class ListFunctionsTests(unittest.TestCase):
    """list-functions.py must filter, sort and print the pending work list."""

    @classmethod
    def setUpClass(cls):
        cls.lister = load_module(
            "rnc_list_functions", ROOT / "scripts" / "list-functions.py"
        )

    def _repo(self, tmp: Path):
        (tmp / "config" / "us").mkdir(parents=True)
        (tmp / "src" / "textbin").mkdir(parents=True)
        (tmp / "src" / "assembly" / "textbin").mkdir(parents=True)
        (tmp / "src" / "textbin" / "exact_one.c").write_text("/* promoted */\n")
        (tmp / "src" / "assembly" / "textbin" / "with_c.c").write_text(
            textwrap.dedent(
                """\
                #ifndef NON_MATCHING
                INCLUDE_ASM("oracle.s", FUN_00123456);
                #else
                int FUN_00123456(void) {
                    return 1;
                }
                #endif /* NON_MATCHING */
                """
            )
        )
        (tmp / "src" / "assembly" / "textbin" / "no_c.c").write_text(
            "#ifndef NON_MATCHING\nINCLUDE_ASM(\"oracle.s\", FUN_00123457);\n#endif\n"
        )
        (tmp / "config" / "us" / "rnc1.us.yaml").write_text(
            textwrap.dedent(
                """
            segments:
              - [0, databin, elf_header]
              - name: main
                type: code
                subsegments:
                  - [0x1000, c, textbin/exact_one]
                  - [0x1100, c, assembly/textbin/with_c]
                  - [0x1200, c, assembly/textbin/no_c]
                  - [0x1300, textbin, text_gap_end]
            """
            )
        )
        (tmp / "config" / "us" / "unit_categories.json").write_text(json.dumps({}))
        (tmp / "config" / "us" / "recovered_names.json").write_text(json.dumps({}))

    def test_default_lists_only_units_with_a_c_body(self):
        with tempfile.TemporaryDirectory() as name:
            tmp = Path(name)
            self._repo(tmp)
            stdout = io.StringIO()
            with (
                mock.patch.object(self.lister, "ROOT", tmp),
                contextlib.redirect_stdout(stdout),
            ):
                code = self.lister.main([])
        self.assertEqual(code, 0)
        output = stdout.getvalue()
        self.assertIn("assembly/textbin/with_c", output)
        self.assertNotIn("assembly/textbin/no_c", output)
        self.assertNotIn("textbin/exact_one", output)

    def test_all_and_json_include_units_without_a_c_body(self):
        with tempfile.TemporaryDirectory() as name:
            tmp = Path(name)
            self._repo(tmp)
            stdout = io.StringIO()
            with (
                mock.patch.object(self.lister, "ROOT", tmp),
                contextlib.redirect_stdout(stdout),
            ):
                code = self.lister.main(["--all", "--json"])
        self.assertEqual(code, 0)
        listed = json.loads(stdout.getvalue())
        self.assertEqual(
            [entry["unit"] for entry in listed],
            ["assembly/textbin/no_c", "assembly/textbin/with_c"],
        )
        self.assertFalse(listed[0]["has_c_body"])
        self.assertTrue(listed[1]["has_c_body"])


class CheckUnitTests(unittest.TestCase):
    """check-unit.py must stage, build and score one unit from a workspace."""

    @classmethod
    def setUpClass(cls):
        cls.check = load_module("rnc_check_unit", ROOT / "scripts" / "check-unit.py")
        cls.simple = SimpleNamespace
        cls.unit = "assembly/textbin/demo"

    def _repo(self, tmp: Path):
        (tmp / "src" / "assembly" / "textbin").mkdir(parents=True)
        (tmp / "src" / "assembly" / "textbin" / "demo.c").write_text(
            textwrap.dedent(
                """\
                /*
                STATE: C_NON_MATCHING
                SYMBOL: FUN_00123456
                */

                #include "asm.h"

                #ifndef NON_MATCHING
                INCLUDE_ASM("oracle.s", FUN_00123456);
                #else
                int FUN_00123456(void) {
                    return 1;
                }
                #endif /* NON_MATCHING */
                """
            )
        )

    def _workspace(self, tmp: Path):
        ws = tmp / "ws"
        (ws / "config" / "us").mkdir(parents=True)
        (ws / ".rnc-baseline-root").write_text("")
        (ws / "config" / "us" / "build.ninja").write_text("")
        (ws / "tools" / "objdiff").mkdir(parents=True)
        (ws / "tools" / "objdiff" / "objdiff-cli").write_text("")
        (ws / "config" / "us" / "expected" / "asm" / self.unit).mkdir(parents=True)
        (ws / "config" / "us" / "expected" / "asm" / self.unit / "FUN_00123456.s").write_text("")
        (ws / "src" / "assembly" / "textbin").mkdir(parents=True)
        (ws / "src" / "assembly" / "textbin" / "demo.c").write_text("/* stale */\n")
        return ws

    def _payload(self, match: float):
        def side(instructions):
            return {
                "sections": [{"name": ".text", "size": "8", "match_percent": match}],
                "symbols": [
                    {
                        "name": "FUN_00123456",
                        "kind": "SYMBOL_FUNCTION",
                        "size": "8",
                        "match_percent": match,
                        "instructions": instructions,
                    }
                ],
            }

        target = [{"instruction": {"address": "0", "size": 4, "formatted": "jr ra"}}]
        current = list(target)
        if match != 100.0:
            target[0]["diff_kind"] = "DIFF_REPLACE"
            current[0] = {
                "diff_kind": "DIFF_REPLACE",
                "instruction": {"address": "0", "size": 4, "formatted": "nop"},
            }
        return {"left": side(target), "right": side(current)}

    def _run(self, argv, match=100.0):
        calls = []

        def fake_objdiff(objdiff, project, unit, config):
            calls.append(config)
            return self.simple(
                returncode=0, stdout=json.dumps(self._payload(match)), stderr=""
            )

        with (
            mock.patch.object(self.check, "find_ninja", return_value="/usr/bin/ninja"),
            mock.patch.object(self.check, "objdiff_report", fake_objdiff),
            mock.patch.object(
                self.check.subprocess,
                "run",
                lambda *a, **k: self.simple(returncode=0, stdout="", stderr=""),
            ),
            contextlib.redirect_stdout(io.StringIO()) as stdout,
        ):
            code = self.check.main(argv)
        return code, stdout.getvalue(), calls

    def test_rejects_source_without_c_body(self):
        with tempfile.TemporaryDirectory() as name:
            tmp = Path(name)
            (tmp / "src" / "assembly" / "textbin").mkdir(parents=True)
            (tmp / "src" / "assembly" / "textbin" / "demo.c").write_text(
                "#ifndef NON_MATCHING\nINCLUDE_ASM(\"oracle.s\", FUN_00123456);\n#endif\n"
            )
            with mock.patch.object(self.check, "ROOT", tmp):
                with contextlib.redirect_stderr(io.StringIO()) as stderr:
                    code = self.check.main([self.unit, "--workspace", str(tmp)])
        self.assertEqual(code, 2)
        self.assertIn("no readable C body", stderr.getvalue())

    def test_stages_body_and_reports_match(self):
        with tempfile.TemporaryDirectory() as name:
            tmp = Path(name)
            self._repo(tmp)
            ws = self._workspace(tmp)
            with mock.patch.object(self.check, "ROOT", tmp):
                code, output, _ = self._run(
                    [self.unit, "--workspace", str(ws)], match=100.0
                )
            staged = (ws / "src" / "assembly" / "textbin" / "demo.c").read_text()
        self.assertEqual(code, 0)
        self.assertIn("Object matches.", output)
        self.assertIn("return 1;", staged)
        self.assertNotIn("INCLUDE_ASM", staged)

    def test_reports_mismatch_and_scores(self):
        with tempfile.TemporaryDirectory() as name:
            tmp = Path(name)
            self._repo(tmp)
            ws = self._workspace(tmp)
            with mock.patch.object(self.check, "ROOT", tmp):
                code, output, calls = self._run(
                    [self.unit, "--workspace", str(ws)], match=50.0
                )
        self.assertEqual(code, 1)
        self.assertIn("Not matching yet", output)
        self.assertIn("first differences", output)
        self.assertIn("FUN_00123456", output)
        self.assertEqual(calls, ["functionRelocDiffs=none"])

    def test_requires_a_baseline_workspace(self):
        with tempfile.TemporaryDirectory() as name:
            tmp = Path(name)
            self._repo(tmp)
            (tmp / "not-a-workspace").mkdir()
            with mock.patch.object(self.check, "ROOT", tmp):
                with contextlib.redirect_stderr(io.StringIO()) as stderr:
                    code = self.check.main(
                        [self.unit, "--workspace", str(tmp / "not-a-workspace")]
                    )
        self.assertEqual(code, 2)
        self.assertIn("not a baseline workspace", stderr.getvalue())

    def test_rejects_intentional_asm_units(self):
        with tempfile.TemporaryDirectory() as name:
            tmp = Path(name)
            self._repo(tmp)
            (tmp / "config" / "us").mkdir(parents=True)
            (tmp / "config" / "us" / "unit_categories.json").write_text(
                json.dumps({"intentional_asm": [self.unit]})
            )
            with mock.patch.object(self.check, "ROOT", tmp):
                with contextlib.redirect_stderr(io.StringIO()) as stderr:
                    code = self.check.main([self.unit, "--workspace", str(tmp)])
        self.assertEqual(code, 2)
        self.assertIn("intentional low-level asm", stderr.getvalue())

    def test_normalize_unit(self):
        self.assertEqual(self.check.normalize_unit("src/assembly/x/y.c"), "assembly/x/y")
        self.assertEqual(self.check.normalize_unit("./assembly/x/y"), "assembly/x/y")


if __name__ == "__main__":
    unittest.main()
