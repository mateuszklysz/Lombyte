#! /usr/bin/env python3
"""
Configures the project for building. Invokes splat to split the target ELF and
creates build files for ninja.

Run from the workspace root (the repository checkout, or the isolated
staging root that verify-baseline.sh prepares for the 32-bit EE
compiler).
"""

from __future__ import annotations

import argparse
import contextlib
import copy
import json
import os
import re
import shutil
import struct
import subprocess
import sys
import tempfile
from pathlib import Path
from typing import Any, List, Set, Union, cast

import ninja_syntax
import yaml

import splat
import splat.scripts.split as split
from splat.segtypes.linker_entry import LinkerEntry
from splat.util.conf import load as splat_load_yaml

ROOT = Path.cwd()

COMPILER = "ee-gcc2.9-991111-01"
CROSS = "mips-ps2-decompals-"
COMPILER_FLAGS = "-DMATCHING_DECOMP -O2 -g2 -gstabs"
LANG_DEFINE = "-DBUILD_US_VERSION"

# Units whose retail code was compiled with the EE-GCC 2.9 pin (sd/ld) instead of
# the SN textbin compiler. DEFAULT: every textbin unit uses SN
# (ee-gcc2.9-991111b/r4, emits sq/lq), which matches the game textbin range;
# libc/SDK/core units stay on EE-GCC 2.9 until their own profile is identified.
# SDK_COMPILER_UNITS is the per-unit exception list for textbin.
SN_TOOLCHAIN_ROOT = os.environ.get("SN_TOOLCHAIN_ROOT", "").strip()
# Promoted textbin units matched byte-exact under the SN compiler.
SN_COMPILER_UNITS = {
    # sdk/debug_print: the EE-GCC 2.9 tree ships no stdarg.h, and the SN
    # stdarg va_start reproduces the retail varargs save prologue byte-exactly
    # (100/100/100/100 direct objdiff).
    "sdk/debug_print",
    # fun_00233980 is a save-less leaf, so the sq/lq fingerprint classifies it
    # as "none" and sends it to EE-GCC 2.9, which hoists the bump-pointer load
    # and diverges from retail. Fresh SN -O2 -g2 -mno-split-addresses reproduces
    # the retail reload schedule exactly (100/100/100/100 direct objdiff and
    # linked-byte comparison against the retail ELF).
    "textbin/fun_00233980",
    # fun_002172c0 has no callee saves (retail style "none"), so the sq/lq
    # fingerprint cannot classify it; retail branch-delay scheduling matches
    # SN exactly (fresh SN -O2 -g2 object = 100% four-way; EE-GCC 2.9 = 95.2%
    # order-only nop/addiu swap). See the private evidence archive for evidence.
    "textbin/fun_002172c0",
    "textbin/fun_001f6250",
    "textbin/fun_001f6270",
    "textbin/fun_001f6290",
    "textbin/fun_00206978",
    "textbin/fun_0023ad10",
    "textbin/fun_00216788",
    "textbin/fun_00225a68",
    "textbin/snd_unk_function_0012eb00",
    "textbin/fun_0012ebd0",
    "textbin/fun_0012f0a8",
    "textbin/fun_0012f178",
    "textbin/fun_001ebc90",
    "textbin/get_occl_grid_from_pair",
    "textbin/update_occlusion",
    "textbin/fun_001f6530",
    "textbin/fun_001f65b0",
    "textbin/fun_001f6940",
    "textbin/fun_001f69d0",
    "textbin/fun_001f6a60",
    "textbin/fun_001f6fd0",
    "textbin/fun_001f7580",
    "textbin/fun_001f75f0",
    "textbin/fun_001f7978",
    "textbin/fun_00201128",
    "textbin/fun_00201f58",
    "textbin/init_moby_class_dists",
    "textbin/fun_0020d218",
    "textbin/fun_0020d248",
    "textbin/fun_00213260",
    "textbin/fun_00215248",
    "textbin/fun_00215420",
    "textbin/fun_00217a10",
    "textbin/fun_0021cae0",
    "textbin/fun_0021df58",
    "textbin/fun_0021eaf0",
    "textbin/fun_0021f330",
    "textbin/fun_0021f5f8",
    "textbin/fun_0021f8e8",
    "textbin/fun_00221930",
    "textbin/fun_00221a88",
    "textbin/fun_00222f18",
    "textbin/fun_00222f58",
    "textbin/fun_00226f50",
    "textbin/fun_0022d708",
    "textbin/fun_00235840",
    "textbin/fun_00235898",
    "textbin/fun_00239750",
    "textbin/fun_0023a770",
    "textbin/fun_0023ac90",
    "textbin/fun_0023aef0",
    "textbin/fun_0023bf18",
    "textbin/fun_0023c610",
    "textbin/video_dec_set_stream",
    "textbin/fun_0023cbf0",
    "textbin/fun_0023cc10",
    "textbin/fun_0023cc38",
    "textbin/fun_0023cce0",
    "textbin/vo_buf_get_data",
    # Pure-C promotions from src/assembly/textbin: fully compiled under SN and
    # gate-verified byte-identical; listed by full unit name because
    # _unit_uses_sn() deliberately excludes the assembly/textbin wrapper units
    # (their INCLUDE_ASM oracles only assemble under the native EE-GCC 2.9).
    "assembly/textbin/audio_dec_begin_put",
    "assembly/textbin/fun_002220f0",
    "assembly/textbin/fun_00238520",
    "assembly/ee/clear_dma_queue_entry",
    # AttachManipulator is a save-less leaf (no sq/lq fingerprint), so the
    # retail-save-style routing would send it to EE-GCC 2.9; SN -O2 reproduces
    # the retail schedule byte-exactly.
    "textbin/attach_manipulator",
}

SDK_COMPILER_UNITS = {
    # e.g. "textbin/fun_XXXX" when a textbin unit is proven EE-GCC-2.9-compiled.
}

# Recovered C units that own the small .rodata retail kept inside the
# preserved `core_rdata` blob.  Key: configured unit-name suffix; value:
# (retail VMA, retail file offset) of the unit's compiled `.rodata` bytes.
# apply_retail_link_layout emits an overlay section for any configured `c`
# unit matching the suffix, so both the assembly-backed and the promoted
# (normalized) unit names resolve to the same retail bytes.
RODATA_OVERLAYS = {
    "_dtoa_r": (0x152330, 0x532B0),
    # _getpic's switch emits a 5-entry jump table (0x14 bytes) that retail
    # stored at 0x153AA0 inside core_rdata; the expected object references it
    # as the splat symbol jtbl_00153AA0, so the compiled .rodata must land at
    # the same VMA/file offset for the relocations to resolve content-equal.
    "_getpic": (0x153AA0, 0x54A20),
}

# Per-unit extra compiler flags for the Himuro (native EE-GCC 2.9) units whose
# exact codegen requires a different scheduling model.  Keyed by unit-name
# suffix so both the assembly-backed and the normalized/promoted name match.
# sce_sif_init_iop_heap: retail tail (lui v0; sw; move v0) is byte-exact only
# under -fno-schedule-insns; applying it globally to all Himuro units changes
# scePad2Read and other already-exact siblings.
HIMURO_FLAG_UNITS = {
    "sce_sif_init_iop_heap": "-fno-schedule-insns",
    # Absolute-store macros and the final GP store's delay-slot placement.
    "initialize_global_state_entry": "-mno-split-addresses -fno-schedule-insns",
    # Retail writes the absolute global through the assembler `$at` macro
    # (`lui $1,%hi; sw ...,%lo($1)`); the default split-address sequence uses a
    # general register instead.  Validated 100/100/100 under Himuro + flag.
    "clear_stage_state_flag": "-mno-split-addresses",
    "initialize_streaming_state": "-mno-split-addresses",
}


# Per-unit extra compiler flags for SN-routed textbin units whose exact
# codegen requires a non-default option.  fun_00225530 retail loads the global
# with a non-split address sequence (`lui v1,%hi; lw v1,%lo(v1)`), which the SN
# driver only reproduces with -mno-split-addresses; the default emits a split
# base register and scores 87.65% instead of 100%.
SN_FLAG_UNITS = {
    # Keep the loop's address register separate from the mode's live range.
    "fun_0012ee08": "-fno-gcse",
    "fun_00225490": "-fno-schedule-insns",
    "fun_00225530": "-mno-split-addresses",
    "fun_00233980": "-mno-split-addresses",
    # Two independent tiny-FPU field loads must stay in retail's order; the
    # prepass scheduler swaps them under default SN.
    "fun_0022c7e8": "-fno-schedule-insns",
    # 0x160Exx/0x1612xx video-decoder globals: retail folds absolute loads as
    # `lui rd,%hi; lw rd,%lo(rd)` and absolute $at stores; the default split
    # sequence differs. Non-small (array) declarations pin the absolute form.
    "fun_0023a790": "-mno-split-addresses",
    "fun_0023aba0": "-mno-split-addresses",
    "fun_0023a3b8": "-mno-split-addresses",
    "fun_0023d0a8": "-mno-split-addresses",
    "fun_001f4248": "-mno-split-addresses",
    "fun_0023b540": "-mno-split-addresses",
    "fun_001f21c0": "-mno-split-addresses",
    "fun_002151d8": "-mno-split-addresses",
    "fun_0023abd0": "-mno-split-addresses",
}


def _unit_flag(unit: str) -> str:
    for suffix, flags in HIMURO_FLAG_UNITS.items():
        if unit.endswith(suffix):
            return flags
    return ""


def _unit_sn_flag(unit: str) -> str:
    for suffix, flags in SN_FLAG_UNITS.items():
        if unit.endswith(suffix):
            return flags
    return ""


def _unit_uses_sn(unit: str) -> bool:
    if unit in SDK_COMPILER_UNITS:
        return False
    # Real-C textbin units are compiled with SN only when the retail bytes use
    # sq/lq saves. The textbin range is NOT one compiler: FUN_0021fce0 is
    # sq/lq (SN) while fun_0011bbb8/fun_0011cae0 are sd/ld (EE-GCC 2.9-style), and
    # the legacy exact leaves match under any ee-gcc. _retail_save_style() is
    # the per-unit fingerprint; the path prefix alone is insufficient.
    # NOTE: only src/textbin (unit "textbin/...") routes to SN here. Pure-C
    # src/assembly/textbin promotions add their full unit name to
    # SN_COMPILER_UNITS instead: the SN Windows driver cannot assemble the
    # INCLUDE_ASM oracle paths of the remaining wrapper units, so the sq-style
    # oracle units there must stay on the native EE-GCC 2.9 assembler.
    return unit.startswith("textbin/")


def _retail_save_style(elf: bytes, vram: int, size: int) -> str:
    """Fingerprint a unit's retail prologue save style from the boot ELF.

    Maps vaddr to file offset for the flat .main text (vram 0x100080 at file
    0x1000). Returns 'sq' if sq/lq dominates, 'sd' if sd/ld dominates, else
    'none' for no callee-save accesses in the first 4KB.
    """
    text_vram = 0x100080
    text_file = 0x1000
    sq = lq = sd = ld = 0
    for off in range(vram, vram + min(size, 4096), 4):
        foff = text_file + (off - text_vram)
        if foff + 4 > len(elf) or foff < 0:
            break
        word = struct.unpack_from("<I", elf, foff)[0]
        op = word >> 26
        if op == 0x1E: sq += 1
        elif op == 0x1F: lq += 1
        elif op == 0x3F: sd += 1
        elif op == 0x37: ld += 1
    if sq + lq >= sd + ld and sq + lq > 0:
        return "sq"
    if sd + ld > 0:
        return "sd"
    return "none"

LANGUAGES = {
    "SCUS_971.99": "us",
}

BASENAME = "SCUS_971.99"
LD_PATH = f"{BASENAME}.ld"
ELF_PATH = f"build/{BASENAME}"
MAP_PATH = f"build/{BASENAME}.map"
PRE_ELF_PATH = f"build/{BASENAME}.elf"

OBJDIFF_CATEGORY = {"id": "us", "name": "Ratchet & Clank (USA)"}


@contextlib.contextmanager
def suppress_stdout_stderr():
    null_fds = [os.open(os.devnull, os.O_RDWR) for _ in range(2)]
    save_fds = [os.dup(1), os.dup(2)]
    os.dup2(null_fds[0], 1)
    os.dup2(null_fds[1], 2)
    try:
        yield
    finally:
        os.dup2(save_fds[0], 1)
        os.dup2(save_fds[1], 2)
        for fd in null_fds + save_fds:
            os.close(fd)


def get_compiler_command(command: str) -> Path:
    compiler_dir = Path("tools") / "cc" / COMPILER
    ee_dir = compiler_dir / "lib" / "gcc-lib" / "ee"
    ee_compiler_dirname = next(os.walk(ee_dir))[1][0]

    commands = {
        "ee-gcc": compiler_dir / "bin" / "ee-gcc",
        "cpp": compiler_dir / "lib" / "gcc-lib" / "ee" / ee_compiler_dirname / "cpp",
    }

    return commands[command]


def make_compiler_cmd(config_dir: Path, src_path: Path) -> tuple[str, str]:
    rel_root = Path(os.path.relpath(ROOT, config_dir))
    game_cc_dir = f"{rel_root}/tools/cc/{COMPILER}/bin"

    common_includes = (
        f"-I{src_path.parent / 'src'} "
        f"-I{src_path.parent / 'include'} "
        f"-Iinclude "
        f"-Wa,-I{src_path.parent / 'include'} -Wa,-I{src_path.parent}"
    )

    compile_cmd = f"{game_cc_dir}/ee-gcc -c {common_includes} {LANG_DEFINE} {COMPILER_FLAGS}"

    return compile_cmd, common_includes


def sn_compiler_configured() -> bool:
    return bool(SN_TOOLCHAIN_ROOT) and (Path(SN_TOOLCHAIN_ROOT) / "bin/ee-gcc.exe").is_file()


def _win_path(value: str) -> str:
    """Convert a WSL mount path to the form the Windows driver needs.

    The drive letter is derived from the mount itself, so any /mnt/<drive>
    mount works regardless of the actual drive letter on a given machine.
    """
    match = re.match(r"^/mnt/([A-Za-z])/(.*)$", value)
    if match:
        return f"{match.group(1).upper()}:/{match.group(2)}".replace("/", "\\")
    return value.replace("/", "\\")


def _unit_from_object(object_path: Path) -> str:
    """Derive the unit name from the ninja object path.

    build/src/<unit>.c.o -> <unit>. Handles both the absolute baseline path
    and the config-relative path.
    """
    parts = list(Path(object_path).parts)
    if "src" in parts:
        parts = parts[parts.index("src") + 1:]
    joined = "/".join(parts)
    if joined.endswith(".c.o"):
        joined = joined[:-len(".c.o")]
    return joined


def clean(config_dir: Path):
    for file in (
        ".splache",
        "build.ninja",
        ".ninja_log",
        "permuter_settings.toml",
        "objdiff.json",
        "undefined_syms_auto.txt",
        LD_PATH,
    ):
        (config_dir / file).unlink(missing_ok=True)

    for folder in ("asm", "assets", "build", "expected"):
        shutil.rmtree(config_dir / folder, ignore_errors=True)


def write_permuter_settings(config_dir: Path, compiler_cmd: str):
    with open(config_dir / "permuter_settings.toml", "w", encoding="utf-8") as f:
        f.write(
            f"""compiler_command = "{compiler_cmd} -D__GNUC__"
assembler_command = "{CROSS}as -march=r5900 -mabi=eabi -Iinclude"
compiler_type = "gcc"

[preserve_macros]

[decompme.compilers]
"tools/cc/{COMPILER}/bin/ee-gcc" = "{COMPILER}"
"""
        )


def build_stuff(
    config_dir: Path,
    config: dict[str, Any],
    linker_entries: list[LinkerEntry],
):
    src_path = Path(config["options"]["src_path"])
    compile_cmd, common_includes = make_compiler_cmd(config_dir, src_path)

    elf_bytes = b""
    retail_elf = config_dir / BASENAME
    if retail_elf.is_file():
        try:
            elf_bytes = retail_elf.read_bytes()
        except OSError:
            elf_bytes = b""

    built_objects: Set[Path] = set()

    def build(
        object_paths: Union[Path, list[Path]],
        src_paths: list[Path],
        task: str,
        variables: dict[str, str] = {},
        implicit_outputs: list[str] = [],
    ):
        if not isinstance(object_paths, list):
            object_paths = [object_paths]

        object_paths = [Path(str(entry).replace("$", "$$")) for entry in object_paths]
        src_paths = [Path(str(entry).replace("$", "$$")) for entry in src_paths]

        object_strs = [str(obj) for obj in object_paths]

        for object_path in object_paths:
            if object_path.suffix == ".o":
                built_objects.add(object_path)

            ninja.build(
                outputs=object_strs,
                rule=task,
                inputs=[str(s) for s in src_paths],
                variables=variables,
                implicit_outputs=implicit_outputs,
            )

    ninja = ninja_syntax.Writer(open(str(config_dir / "build.ninja"), "w"), width=9999)

    overlap_flag = "--no-check-sections " if config.get("_retail_link_layout") else ""
    ld_args = f"--no-warn-rwx-segments {overlap_flag}-EL -T undefined_syms.txt -T undefined_syms_auto.txt -T undefined_funcs_auto.txt -Map $mapfile -T $in -o $out"

    cpp = get_compiler_command("cpp")
    rel_root = Path(os.path.relpath(ROOT, config_dir))

    ninja.rule(
        "as",
        description="as $in",
        command=(
            f"{rel_root}/{cpp} {common_includes} {LANG_DEFINE} "
            f"$in -o - | "
            f"{CROSS}as -no-pad-sections -EL -march=5900 -mabi=eabi -I{src_path.parent / 'include'} -o $out"
        ),
    )

    ninja.rule(
        "cc",
        description="cc $in",
        command=f"{compile_cmd} $in $extra -o $out && {CROSS}strip $out -N dummy-symbol-name",
    )

    if sn_compiler_configured():
        sn_root = Path(SN_TOOLCHAIN_ROOT)
        sn_repo = ROOT
        sn_driver = str(sn_root / "bin/ee-gcc.exe")
        sn_lib = _win_path(str(sn_root / "lib/gcc-lib/ee/2.95.2"))
        sn_eebin = _win_path(str(sn_root / "ee/bin"))
        sn_inc = _win_path(str(sn_root / "lib/gcc-lib/ee/2.95.2/include"))
        sn_repo_inc = _win_path(str(sn_repo / "include"))
        # The SN driver is a Windows PE: it can only read/write native
        # Windows paths, so this rule stages the source under the real
        # repository (a WSL mount) and copies the object back into the
        # staging build.
        ninja.rule(
            "cc_sn",
            description="cc_sn $in",
            command=(
                f"mkdir -p $sn_work && cp $in $sn_work/cand.c && "
                f"'{sn_driver}' -c '-B{sn_lib}\\' '-B{sn_eebin}\\' "
                f"-I'{sn_inc}' -I'{sn_repo_inc}' "
                f"-DBUILD_US_VERSION -DMATCHING_DECOMP -O2 -g2 $extra "
                f"'$sn_work_win/cand.c' -o '$sn_work_win/cand.o' && "
                f"cp $sn_work/cand.o $out && {CROSS}strip $out -N dummy-symbol-name"
            ),
        )

    ninja.rule(
        "ld",
        description="link $out",
        command=f"{CROSS}ld {ld_args}",
    )

    ninja.rule(
        "verify_boot",
        description="verify reconstructed boot ELF $in",
        command="cmp -s $in && touch $out",
    )

    ninja.rule(
        "elf",
        description="elf $out",
        command=f"{CROSS}objcopy $in $out -O binary",
    )

    for entry in linker_entries:
        seg = entry.segment

        if seg.type[0] == ".":
            continue

        if entry.object_path is None:
            continue

        if isinstance(seg, splat.segtypes.common.c.CommonSegC):
            entry.src_paths = [Path("..", "..") / src_file for src_file in entry.src_paths]
            unit = _unit_from_object(entry.object_path)
            style = "none"
            if sn_compiler_configured() and elf_bytes:
                vram = getattr(seg, "vram_start", None)
                if vram:
                    style = _retail_save_style(elf_bytes, int(vram), max(int(seg.size or 0), 4))
            # Per-unit compiler by retail save style: sq/lq textbin code is
            # SN; sd/ld and save-less leaves stay on the inherited EE-GCC 2.9 pin
            # (they were matched there and SD-style textbin breaks under SN).
            use_sn = sn_compiler_configured() and (
                unit in SN_COMPILER_UNITS or (_unit_uses_sn(unit) and style == "sq")
            )
            if use_sn:
                sn_work = str(sn_repo / "build/sn-work/units" / unit)
                sn_extra = _unit_sn_flag(unit)
                variables = {
                    "sn_work": sn_work,
                    "sn_work_win": _win_path(sn_work),
                }
                if sn_extra:
                    variables["extra"] = f"{sn_extra} "
                build(entry.object_path, entry.src_paths, "cc_sn",
                      variables=variables)
            else:
                extra = _unit_flag(unit)
                variables = {"extra": f"{extra} "} if extra else {}
                build(entry.object_path, entry.src_paths, "cc", variables=variables)

        elif isinstance(
            seg,
            (
                splat.segtypes.common.asm.CommonSegAsm,
                splat.segtypes.common.data.CommonSegData,
                splat.segtypes.common.databin.CommonSegDatabin,
                splat.segtypes.common.rodatabin.CommonSegRodatabin,
                splat.segtypes.common.textbin.CommonSegTextbin,
                splat.segtypes.common.sbss.CommonSegSbss,
                splat.segtypes.common.bin.CommonSegBin,
            ),
        ):
            build(entry.object_path, entry.src_paths, "as")

        else:
            print(f"ERROR: Unsupported build segment type {seg.type}")
            sys.exit(1)

    ninja.build(
        PRE_ELF_PATH,
        "ld",
        LD_PATH,
        implicit=[str(obj) for obj in built_objects],
        variables={"mapfile": MAP_PATH},
    )

    ninja.build(
        ELF_PATH,
        "elf",
        PRE_ELF_PATH,
    )

    ninja.build(
        ELF_PATH + ".ok",
        "verify_boot",
        [ELF_PATH, BASENAME],
    )

    write_permuter_settings(config_dir, compile_cmd)


def rename_locals(base_path: Path):
    for asm_file in base_path.rglob("*.s"):
        data = asm_file.read_text()
        data = re.sub(r"__local_\d+", "", data)
        asm_file.write_text(data)


def make_asm(config_path: Path, config: dict[str, Any]):
    with tempfile.TemporaryDirectory(dir=config_path, prefix="tmp_") as tmp_dir:
        tmp_path = Path(tmp_dir)

        yaml_path = tmp_path / "config.yaml"
        asm_path = tmp_path / "asm" / "nonmatchings"
        dst_path = (config_path / "expected" / "asm").resolve().relative_to(ROOT)

        if dst_path.exists():
            print(f"expected asm dir '{dst_path}' already exists")
            return

        config = copy.deepcopy(config)
        for key in (
            "target_path",
            "undefined_funcs_auto_path",
            "undefined_syms_auto_path",
            "symbol_addrs_path",
            "extensions_path",
        ):
            if config["options"].get(key):
                config["options"][key] = "../" + str(config["options"][key])
        config["options"]["asm_path"] = "asm"
        config["options"]["src_path"] = "src"
        config["options"]["build_path"] = "build"
        config["options"]["asset_path"] = "assets"

        new_segments: list[Any] = []
        segments: list[Any] = config["segments"]
        for segment in segments:
            if isinstance(segment, list):
                new_segments.append(segment)
            elif isinstance(segment, dict) and segment["name"] == "main":
                new_subsegments: list[Any] = []
                subsegments = cast(list[Any], segment["subsegments"])
                for subsegment in subsegments:
                    if isinstance(subsegment, list):
                        if subsegment[1] == "asm":
                            subsegment[1] = "c"
                        new_subsegments.append(subsegment)
                    elif isinstance(subsegment, dict):
                        subsegment["type"] = subsegment["type"].strip(".")
                        if subsegment["type"] == "rodata":
                            subsegment["type"] = ".rodata"
                        new_subsegments.append(subsegment)
                segment["subsegments"] = new_subsegments
                new_segments.append(segment)
        config["segments"] = new_segments

        with yaml_path.open(mode="w") as yaml_file:
            yaml.dump(config, yaml_file, default_flow_style=False)

        with suppress_stdout_stderr():
            split.main([yaml_path], modes=["all"], verbose=False)

        rename_locals(asm_path)

        dst_path.parent.mkdir(parents=True, exist_ok=True)
        shutil.copytree(asm_path, dst_path, dirs_exist_ok=True)

        print(f"expected asm extracted to '{dst_path}'")

        for subseg in new_segments[1]["subsegments"]:
            if isinstance(subseg, list) and subseg[1] == "c":
                subseg[1] = "asm"
                subseg[2] += ".c"

        config["options"]["asm_jtbl_label_macro"] = "llabel"

        with yaml_path.open(mode="w") as yaml_file:
            yaml.dump(config, yaml_file, default_flow_style=False)

        shutil.rmtree(tmp_path / "asm")
        (tmp_path / ".splache").unlink()

        with suppress_stdout_stderr():
            split.main([yaml_path], modes=["all"], verbose=False)

        rename_locals(asm_path)

        dst_path = dst_path.parent / "obj"
        tmp_obj_path = tmp_path / "obj"
        tmp_asm_dir = tmp_path / "asm"

        rel_root = Path(os.path.relpath(ROOT, tmp_path))
        cpp = f"{rel_root}/{get_compiler_command('cpp')}"
        up_includes = f"-I{rel_root}/src -I{rel_root}/include -Iinclude"

        for asm_file in tmp_asm_dir.rglob("*.c.s"):
            asm_file_rel = asm_file.relative_to(tmp_path)
            obj_file_rel = Path("obj") / asm_file.relative_to(tmp_asm_dir).with_suffix(".o")
            obj_file = tmp_obj_path / obj_file_rel.relative_to("obj")
            obj_file.parent.mkdir(parents=True, exist_ok=True)
            subprocess.run(
                f"{cpp} {up_includes} -Wa,-I{rel_root}/include '{asm_file_rel}' -o - | "
                f"{CROSS}as -no-pad-sections -EL -march=5900 -mabi=eabi -I{rel_root}/include -o {obj_file_rel}",
                shell=True,
                cwd=tmp_path,
            )

        shutil.copytree(tmp_obj_path, dst_path, dirs_exist_ok=True)

        print(f"expected obj built to '{dst_path}'")


def generate_objdiff_configuration(config_path: Path, config: dict[str, Any]):
    segments: list[Any] = config["segments"]

    tu_to_diff: list[str] = []

    for segment in segments:
        if not (isinstance(segment, dict) and segment["name"] == "main"):
            continue

        subsegments = cast(list[Any], segment["subsegments"])

        for subsegment in subsegments:
            if isinstance(subsegment, list):
                _, subs_type, subs_name = cast(tuple[int, str, str], subsegment)
            elif isinstance(subsegment, dict):
                subs_type = cast(str, subsegment["type"])
                subs_name = cast(str, subsegment["name"])
            else:
                raise RuntimeError("invalid subsegment type")

            if subs_type in ("asm", "c"):
                tu_to_diff.append(subs_name)

    units: list[dict[str, Any]] = []

    for tu_name in tu_to_diff:
        target_path = Path("expected", "obj", tu_name).with_suffix(".c.o")
        base_path = Path("build", "src", tu_name).with_suffix(".c.o")

        unit: dict[str, Any] = {
            "name": tu_name,
            "target_path": str(target_path),
            "base_path": str(base_path),
            "metadata": {"progress_categories": [OBJDIFF_CATEGORY["id"]]},
        }

        units.append(unit)

    objdiff_json: dict[str, Any] = {
        "$schema": "https://raw.githubusercontent.com/encounter/objdiff/main/config.schema.json",
        "custom_make": "true",
        "custom_args": [],
        "build_target": False,
        "build_base": False,
        "watch_patterns": [],
        "units": units,
        "progress_categories": [OBJDIFF_CATEGORY],
    }

    objdiff_path = config_path / "objdiff.json"

    with objdiff_path.open(mode="w") as fw:
        json.dump(objdiff_json, fw, indent=2)

    print(f"Wrote objdiff configuration ({len(units)} units) to {objdiff_path}")


def fix_assets(config_dir: Path, config: dict[str, Any]):
    asset_path = Path(config["options"]["asset_path"])
    asset_rel_path = (config_dir / asset_path).resolve().relative_to(ROOT)

    for asm_file in (config_dir / "asm").rglob("*.s"):
        data_asm: str = asm_file.read_text()
        data_asm, count = re.subn(rf'\.incbin "{asset_rel_path}/', '.incbin "assets/', data_asm)
        if count > 0:
            asm_file.write_text(data_asm)


def fix_linkerscript(config: dict[str, Any], linkerscript_path: Path):
    section_subalign = cast(dict[str, int], config.get("_section_subalign", {}))

    re_subsegment_line = re.compile(
        r"^(?P<indent> +)build/(?:asm|src)(?:/data)?/(?P<name>.*)\.[sc]\.o\(\.(?P<section>.+)\);$"
    )
    re_section_line = re.compile(
        r"^(?P<indent> +)\.(?P<section>[^ ]+) .* SUBALIGN\((?P<subalign>[0-9]+)\)$"
    )

    patched_lines: list[str] = []
    current_section_subalign = 8

    with open(linkerscript_path, mode="r") as fh:
        for line in fh:
            if match := re_subsegment_line.match(line):
                indent = cast(str, match["indent"])

                if match["section"] == "text":
                    patched_lines.append(f"{indent}. = ALIGN(., {current_section_subalign});\n")

            if match := re_section_line.match(line):
                section = cast(str, match["section"])
                subalign = cast(str, match["subalign"])

                if section in section_subalign:
                    current_section_subalign = int(section_subalign[section])
                    current_subalign = f"SUBALIGN({subalign})"
                    fixed_subalign = f"SUBALIGN({section_subalign[section]})"
                    line = line.replace(current_subalign, fixed_subalign)
                else:
                    current_section_subalign = int(subalign)

            patched_lines.append(line)

    with open(linkerscript_path, mode="w") as fh:
        fh.writelines(patched_lines)

    if config.get("_retail_link_layout"):
        apply_retail_link_layout(config, linkerscript_path)


def apply_retail_link_layout(config: dict[str, Any], linkerscript_path: Path):
    """Place the preserved inputs at their retail file offsets.

    The linked ELF is an intermediate container.  Objcopy uses these LMAs to
    reconstruct the retail boot ELF, beginning with the preserved 0x1000-byte
    ELF header and ending with the preserved section metadata.

    ``RODATA_OVERLAYS`` lets a recovered C unit own the small `.rodata` that
    originally lived inside the preserved ``core_rdata`` region.  The compiled
    object's ``.rodata`` section is placed at the retail VMA/file offset the
    bytes occupied; identical content makes the output byte-identical while the
    source no longer depends on the preserved blob for those bytes.
    """

    overlays = {
        name: (vram, at)
        for name, (vram, at) in RODATA_OVERLAYS.items()
    }
    text = linkerscript_path.read_text()
    entry_re = re.compile(
        r"^\s*(build/(?:asm|src)(?:/data)?/.*\.[sc]\.o\(\.text\);)$",
        re.MULTILINE,
    )
    text_entries = entry_re.findall(text)
    if not text_entries or text_entries[0] != "build/asm/data/vutext.s.o(.text);":
        raise ValueError("generated linker script has an unexpected text layout")

    main_segment = next(
        segment
        for segment in config["segments"]
        if isinstance(segment, dict) and segment.get("name") == "main"
    )
    text_offsets = [
        int(segment[0])
        for segment in main_segment["subsegments"]
        if len(segment) >= 2 and segment[1] in ("c", "textbin")
    ]
    if len(text_entries) != len(text_offsets):
        raise ValueError(
            f"generated linker script has {len(text_entries)} text entries, "
            f"but config has {len(text_offsets)} text subsegments"
        )

    text_sections = []
    for index, (entry, file_offset) in enumerate(zip(text_entries, text_offsets)):
        vram = file_offset - 0x1000 + 0x100080
        if index == 0:
            name = ".vutext"
        elif file_offset < 0x30400:
            name = f"core.text.{index:04d}"
        else:
            name = f".text.{index:04d}"
        # Three ranges intentionally overlap their predecessor in the source
        # map.  Put that short chain in a second PHDR so ld preserves the AT()
        # values instead of moving later sections forward.
        alternate_lane_offsets = {0x192B8, 0x262DC, 0x262E0}
        phdr = "text_alt" if file_offset in alternate_lane_offsets else "text"
        text_sections.append(
            f"    {name} 0x{vram:X} : AT(0x{file_offset:X}) SUBALIGN(4)\n"
            "    {\n"
            f"        {entry}\n"
            f"    }} :{phdr}"
        )
    linked_text = "\n\n".join(text_sections)

    # Recovered C units may own small .rodata regions that retail kept inside
    # the preserved core_rdata blob.  Emit an overlay section for each
    # configured unit that matches the overlay map, keyed by the configured
    # unit name so both the assembly-backed and the normalized/promoted name
    # resolve to the same retail bytes.
    c_units: list[str] = []
    for segment in config["segments"]:
        if not (isinstance(segment, dict) and segment.get("name") == "main"):
            continue
        for subsegment in segment.get("subsegments", []):
            if isinstance(subsegment, list) and len(subsegment) >= 3 and subsegment[1] == "c":
                c_units.append(str(subsegment[2]))
    rodata_overlay_sections = []
    for unit in c_units:
        for suffix, (vram, at) in overlays.items():
            if unit.endswith(suffix):
                rodata_overlay_sections.append(
                    f"    {suffix.lstrip('_')}.rdata 0x{vram:X} : AT(0x{at:X}) SUBALIGN(4)\n"
                    "    {\n"
                    f"        build/src/{unit}.c.o(.rodata);\n"
                    "    } :data_alt"
                )
    rodata_overlay = "\n\n".join(rodata_overlay_sections) if rodata_overlay_sections else ""
    script = f"""ENTRY(entry)
PHDRS
{{
    header PT_LOAD FLAGS(6);
    text PT_LOAD FLAGS(5);
    text_alt PT_LOAD FLAGS(5);
    data PT_LOAD FLAGS(6);
    data_alt PT_LOAD FLAGS(6);
    tail PT_LOAD FLAGS(6);
}}

SECTIONS
{{
    _gp = 0x166C00;

    .elf_header 0 : AT(0) SUBALIGN(8)
    {{
        build/asm/data/elf_header.s.o(.data);
    }} :header

{linked_text}

{rodata_overlay}

    core.data 0x12F480 : AT(0x30400) SUBALIGN(4)
    {{
        build/asm/data/core_data.s.o(.data);
    }} :data

    core.rdata 0x152200 : AT(0x53180) SUBALIGN(4)
    {{
        build/asm/data/core_rdata.s.o(.data);
    }} :data

    core.bss 0x154100 (NOLOAD) : SUBALIGN(4)
    {{
        build/asm/data/core_bss.bss.s.o(.bss);
    }} :data

    core.lit 0x15EC80 : AT(0x5FC00) SUBALIGN(4)
    {{
        build/asm/data/core_lit.s.o(.data);
    }} :data

    .lit 0x15EF00 : AT(0x5FE80) SUBALIGN(4)
    {{
        build/asm/data/lit.s.o(.data);
    }} :data

    .bss 0x161280 (NOLOAD) : SUBALIGN(4)
    {{
        build/asm/data/bss.bss.s.o(.bss);
    }} :data

    .data 0x165480 : AT(0x66400) SUBALIGN(4)
    {{
        build/asm/data/data.s.o(.data);
    }} :data

    lvl.vtbl 0x1E8B80 : AT(0xE9B00) SUBALIGN(4)
    {{
        build/asm/data/lvl_vtbl.s.o(.data);
    }} :data

    lvl.camvtbl 0x1E8C00 : AT(0xE9B80) SUBALIGN(4)
    {{
        build/asm/data/lvl_camvtbl.s.o(.data);
    }} :data

    lvl.sndvtbl 0x1E8C80 : AT(0xE9C00) SUBALIGN(4)
    {{
        build/asm/data/lvl_sndvtbl.s.o(.data);
    }} :data

    .reg_info 0x300000 : AT(0x13E2E0) SUBALIGN(4)
    {{
        build/asm/data/reg_info.s.o(.data);
    }} :tail

    .dvp_overlays 0x300018 : AT(0x13E2F8) SUBALIGN(4)
    {{
        build/asm/data/dvp_overlays.s.o(.data);
    }} :tail

    .dvp_overlay_string_table 0x312080 : AT(0x150360) SUBALIGN(4)
    {{
        build/asm/data/dvp_overlay_string_table.s.o(.data);
    }} :tail

    .section_strings 0x3127F7 : AT(0x150AD7) SUBALIGN(1)
    {{
        build/asm/data/section_strings.s.o(.data);
    }} :tail

    /DISCARD/ :
    {{
        *(*);
    }}
}}
"""
    linkerscript_path.write_text(script)


def main():
    class ArgsProtocol:
        YAML_FILE: Path
        clean: bool
        make_asm: bool

    parser = argparse.ArgumentParser(description="Configure the project")
    parser.add_argument(
        "YAML_FILE",
        type=Path,
        nargs="?",
        default=Path("config/us/rnc1.us.yaml"),
        help="yaml file to configure the project",
    )
    parser.add_argument(
        "-c",
        "--clean",
        help="Clean extraction and build artifacts",
        action="store_true",
    )
    parser.add_argument(
        "--make-asm",
        help="Extract assembly for each function into 'expected/' subfolder",
        action="store_true",
    )
    args = cast(ArgsProtocol, parser.parse_args())

    config = splat_load_yaml(
        [args.YAML_FILE],
        modes=["all"],
        verbose=False,
        disassemble_all=False,
    )

    basename = config["options"]["basename"]
    config_dir = Path(args.YAML_FILE).parent

    if basename not in LANGUAGES:
        supported_elfs = f"{set(f'{elf} ({lang})' for elf, lang in LANGUAGES.items())}".replace("'", "")
        print(f"unsupported game ELF. Supported versions are: {supported_elfs}")
        exit(1)

    if args.clean:
        clean(config_dir)

    split.main([args.YAML_FILE], modes=["all"], verbose=False)

    fix_assets(config_dir, config)

    linkerscript_path = (config_dir / LD_PATH).resolve().relative_to(ROOT)
    assert linkerscript_path.is_file(), f"{linkerscript_path} not found"

    fix_linkerscript(config, linkerscript_path)

    linker_entries = split.linker_writer.entries

    build_stuff(config_dir, split.config, linker_entries)

    if args.make_asm:
        make_asm(config_dir, config)

    generate_objdiff_configuration(config_dir, config)


if __name__ == "__main__":
    main()
