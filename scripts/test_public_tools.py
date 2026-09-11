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
        cls.treemap = load_module("rnc_generate_treemap", ROOT / "scripts" / "generate_treemap.py")

    def _workspace(self, tmp: Path):
        (tmp / "src" / "textbin").mkdir(parents=True)
        (tmp / "src" / "textbin" / "promoted.c").write_text("/* promoted */\n")
        (tmp / "src" / "assembly" / "textbin").mkdir(parents=True)
        (tmp / "src" / "assembly" / "textbin" / "pending.c").write_text("/* oracle */\n")
        config = tmp / "config.yaml"
        config.write_text(textwrap.dedent(
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
        ))
        categories = tmp / "categories.json"
        categories.write_text(json.dumps({
            "exact_under_assembly": ["assembly/ee/legacy_exact"],
            "intentional_asm": ["assembly/asm/leaf"],
        }))
        return config, categories

    def test_categories_drive_tile_colors(self):
        with tempfile.TemporaryDirectory() as name:
            tmp = Path(name)
            config, categories = self._workspace(tmp)
            units = {u["owner"]: u["category"] for u in
                     self.treemap.build_units(tmp, config, categories)}
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
        cls.stamp = load_module("rnc_stamp_source_header",
                                ROOT / "scripts" / "stamp_source_header.py")

    def test_insert_block_at_top(self):
        fields = {"STATE": "C_EXACT", "SYMBOL": "Foo",
                  "SCORE": "code=100 functions=100 data=100 complete_data=100",
                  "DECISION": "promoted"}
        self.assertEqual(self.stamp.update("int Foo(void) { return 1; }\n", fields),
                         self.BLOCK + "int Foo(void) { return 1; }\n")

    def test_render_uses_canonical_field_order(self):
        block = self.stamp.render_block({
            "NOTE": "pinned register", "DECISION": "promoted", "SCORE": "1",
            "SYMBOL": "Foo", "STATE": "C_NON_MATCHING", "BLOCKER": "none"})
        keys = [line.split(":")[0] for line in block.splitlines()[1:-1]]
        self.assertEqual(keys, ["STATE", "SYMBOL", "SCORE", "DECISION",
                                "BLOCKER", "NOTE"])

    def test_update_removes_evidence_and_keeps_fields(self):
        text = ("/*\nSTATE: C_EXACT\nSYMBOL: Foo\nSCORE: 1\n"
                "DECISION: promoted\nEVIDENCE: analysis/foo.json\n*/\ncode\n")
        out = self.stamp.update(text, {}, ("EVIDENCE",))
        self.assertNotIn("EVIDENCE", out)
        self.assertIn("STATE: C_EXACT", out)
        self.assertIn("code\n", out)

    def test_validate_required_and_forbidden_fields(self):
        self.assertEqual(self.stamp.validate(self.BLOCK + "code\n"), [])
        self.assertIn("missing STATE block", self.stamp.validate("int x;\n"))
        with_evidence = self.BLOCK.replace("DECISION: promoted",
                                           "DECISION: promoted\nEVIDENCE: x")
        self.assertTrue(any("EVIDENCE" in problem
                            for problem in self.stamp.validate(with_evidence)))

    def test_normalize_drops_legacy_and_moves_role(self):
        text = (
            "/* STATE: C_EXACT\n * SYMBOL: Foo\n * ROLE: does foo\n"
            " * SCORE: code=1 functions=2 data=3 complete_data=4\n"
            " * DECISION: promoted; BLOCKER: none.\n * GATE: private/log\n */\n"
            "/* NON_MATCHING FALLBACK (descriptive C)\n * blocker: y\n */\ncode\n")
        expected = ("/*\nSTATE: C_EXACT\nSYMBOL: Foo\n"
                    "SCORE: code=1 functions=2 data=3 complete_data=4\n"
                    "DECISION: promoted\nBLOCKER: none\n*/\n\n"
                    "/* ROLE: does foo */\n\ncode\n")
        out = self.stamp.normalize(text)
        self.assertEqual(out, expected)
        self.assertEqual(self.stamp.normalize(out), out)

    def test_check_cli_fails_on_missing_block(self):
        with tempfile.TemporaryDirectory() as name:
            path = Path(name) / "x.c"
            path.write_text("int x;\n")
            proc = subprocess.run(
                [sys.executable, str(ROOT / "scripts" / "stamp_source_header.py"),
                 "--check", str(path)], capture_output=True, text=True)
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
                capture_output=True, text=True, env=env, cwd=ROOT)
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
                capture_output=True, text=True, env=env, cwd=ROOT)
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
        record[33:33 + len(encoded)] = encoded
        record[33 + len(encoded):] = pad
        return bytes(record)

    @classmethod
    def _mini_iso(cls, scus_lba: int = SCUS_LBA, scus_size: int = SCUS_SIZE,
                  prefix: bytes = b"") -> bytearray:
        buf = bytearray(cls.SECTOR * 40)  # 80 KiB; SCUS at LBA 30 ends at 64 KiB
        buf[0x8000:0x8000 + 6] = b"\x01CD001"
        struct.pack_into("<I", buf, 0x8000 + 156 + 2, cls.ROOT_LBA)
        struct.pack_into("<I", buf, 0x8000 + 156 + 10, 512)
        off = cls.ROOT_LBA * cls.SECTOR
        records = (prefix
                   + cls._record("SYSTEM.CNF;1", 19, 59) + b"\x00"
                   + cls._record("SCUS_971.99;1", scus_lba, scus_size))
        buf[off:off + len(records)] = records
        return buf

    def test_finds_boot_extent(self):
        iso = self._mini_iso()
        self.assertEqual(self.rebuild.find_boot_extent(bytes(iso)),
                         (self.SCUS_LBA, self.SCUS_SIZE))

    def test_walks_even_length_names_and_padding(self):
        iso = self._mini_iso(prefix=self._record("AB;1", 10, 1))
        self.assertEqual(self.rebuild.find_boot_extent(bytes(iso)),
                         (self.SCUS_LBA, self.SCUS_SIZE))

    def test_rejects_missing_name(self):
        with self.assertRaises(SystemExit):
            self.rebuild.find_boot_extent(bytes(self._mini_iso()), want_name="NOPE.BIN;1")

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
                with mock.patch.object(sys, "argv", [
                        "rebuild-iso.py", "--iso", str(iso_path),
                        "--elf", str(elf_path), "--out", str(Path(name) / "out.iso")]):
                    with contextlib.redirect_stdout(io.StringIO()):
                        self.rebuild.main()
            self.assertIn("outside the ISO image", str(raised.exception))

    def test_patches_identical_extent_end_to_end(self):
        iso = self._mini_iso()
        extent = bytes(iso[self.SCUS_LBA * self.SECTOR:
                           self.SCUS_LBA * self.SECTOR + self.SCUS_SIZE])
        with tempfile.TemporaryDirectory() as name:
            iso_path = Path(name) / "game.iso"
            elf_path = Path(name) / "built.elf"
            out_path = Path(name) / "rebuilt.iso"
            iso_path.write_bytes(bytes(iso))
            elf_path.write_bytes(extent)
            argv = ["rebuild-iso.py", "--iso", str(iso_path), "--elf", str(elf_path),
                    "--out", str(out_path)]
            stdout = io.StringIO()
            with mock.patch.object(sys, "argv", argv), \
                    mock.patch.object(self.rebuild, "RETAIL_SHA",
                                      hashlib.sha256(extent).hexdigest()):
                with contextlib.redirect_stdout(stdout):
                    code = self.rebuild.main()
            self.assertEqual(code, 0)
            self.assertIn("byte-identical", stdout.getvalue())
            self.assertEqual(out_path.read_bytes(), bytes(iso))


if __name__ == "__main__":
    unittest.main()
