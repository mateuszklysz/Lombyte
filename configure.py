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
import shlex
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
# Locally built patched public 991111 cc1 (R5900 quadword saves + classic
# mult/mflo).  Not vendored: the environment points at the pinned build and the
# tree falls back to the frozen compilers when it is absent.  The source patch
# and its build script live in patches/ee-gcc-2.9-991111-01/; see
# docs/patched-toolchain.md.
EE_GCC_PATCHED_ROOT = os.environ.get("EE_GCC_PATCHED_ROOT", "").strip()
# Reconstructed Sony/Cygnus 2.9-ee-991111b game compiler (RncDecomp-tools
# patch stack through P46, cc1 eb7a3497c39e0f73fc4f01bcda7de426c071c8f2f9d4702ffecefb5a6e1c8743).
# Native Linux toolchain; units listed in
# GAME_COMPILER_UNITS are built by it instead of the SN binary.
GAME_COMPILER_ROOT = os.environ.get("GAME_COMPILER_ROOT", "").strip()
# Promoted textbin units matched byte-exact under the SN compiler.
SN_COMPILER_UNITS = {
    # textbin/fun_002267b8: originally promoted 2026-09-18 (commit 78cae12)
    # under SN, then moved to GAME_COMPILER_UNITS on 2026-09-20 (commit
    # 3dd9c02, "game-only SN parity") when the game-compiler briefly achieved
    # parity for it. That parity has since broken (the installed game-compiler
    # patch revision moved again) -- verified 2026-09-22 with objdiff-cli
    # against the real expected object: cc_game route 43.77778%, fresh SN
    # 100/100/100/100. Moved back to SN, which is a fixed binary compiler and
    # doesn't drift.
    "textbin/fun_002267b8",
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
    # order-only nop/addiu swap). See the private evidence archive for details.
    "textbin/fun_002172c0",
    # Save-less counting loops (retail style "none"): fresh SN -O2 -g2 objects
    # are 100/100/100; the EE-GCC 2.9 fallback ties at 59.7-91.1% (pipeline-2026-09-13-11
    # wave 3, fun_00215300 / fun_00215348 / fun_00215290).
    "textbin/fun_00215300",
    "textbin/fun_00215348",
    "textbin/fun_00215290",
    # Save-less leaf (retail style "none", 19 instructions, no frame): fresh
    # SN -O2 -g2 is 100/100/100; the EE-GCC 2.9 fallback stages at 91.11%.
    "textbin/read_buf_begin_get",
    # Save-less leaf (retail style "none", 27 instructions, no frame): fresh
    # SN -O2 -g2 is 100/100/100 with the numeric D_0015F6A0 pointer load and the
    # v1/a3 pointer roles; the EE-GCC 2.9 fingerprint would route it to EE-GCC 2.9.
    "textbin/fun_001fdca0",
    "textbin/fun_001f6250",
    "textbin/fun_001f6270",
    "textbin/fun_001f6290",
    "textbin/fun_00206978",
    "textbin/fun_0023ad10",
    "textbin/fun_00216788",
    "textbin/fun_00225a68",
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
    "textbin/audio_dec_begin_put",
    "textbin/fun_002220f0",
    "textbin/fun_00238520",
    "assembly/ee/clear_dma_queue_entry",
    "ee/clear_dma_queue_entry",
    # AttachManipulator is a save-less leaf (no sq/lq fingerprint), so the
    # retail-save-style routing would send it to EE-GCC 2.9; SN -O2 reproduces
    # the retail schedule byte-exactly.
    "textbin/attach_manipulator",
    # InitializeRenderState: the whole unit is 13 SN-style instructions; fresh
    # SN -O2 with s16 fields at 0x40/0x42/0x5C/0x5E/0x78/0x7A and the retail
    # store order is 100/100/100 direct and patha linked-byte equal
    # (run-14 mass-d; EE-GCC 2.9 stages at 76.00).  The unit is a
    # non-textbin prefix, so the per-unit set is the only routing hook.
    "gs/initialize_render_state",
}

# Units proven byte-exact under the patched 991111 build.  Keep the set
# explicit: this compiler is a per-unit profile, not a replacement for the
# frozen SN/EE-GCC 2.9 trees (its SN-class controls do not reach 100).
EE_GCC_PATCHED_UNITS = {
    # Retail uses classic mult/mflo; the frozen trees emit the R5900 rd-form.
    # 100/100/100 + patha linked-byte equal (0x12D3A0), 2026-09-12.
    "sdk/bcd_to_time",
    # Retail keeps the ORed value in v0 and the 0x15 constant in v1; the
    # patched profile plus a v0 register pin reproduces all 30 instructions
    # (98.67 without the pin). patha linked-byte equal, 2026-09-12.
    "textbin/fun_00208f28",
    # lq/sq-save class exacts recovered by the extended pool sweep; promoted
    # as a batch (patha byte-equal each; batch2 gate 2026-09-12).
    "core/read_state_field",
    "textbin/fun_001fd6e0",
    "textbin/fun_00213308",
    "textbin/mpeg_error",
    # _pictureCodingExtension: absolute IPU_CTRL volatile stores must fill the
    # _nextBit call delay slots; the patched profile splits the AT macro and the
    # at-store policy brackets it with .set noat. 100/100/100, gate 2026-09-13.
    "sdk/library/picturecodingextension",
    # _lastFrame: retail keeps two independent count-1 computations in the
    # _dispRefImage argument setup.  The v3 patched profile blocks the CSE and
    # reload-CSE folds and reverses load_register_parameters; 100/100/100 and
    # full-ELF gate 2026-09-13.
    "sdk/library/_lastFrame",
    # Run-12 campaign 12b: retail's absolute global access and word stores in
    # these textbin tails are reproduced only by the patched profile (frozen
    # SN emits gp-relative access and byte stores); 100/100/100 direct and
    # patha linked-byte equal 2026-09-13.
    "textbin/fun_001f4600",
    "textbin/fun_001f47b8",
    "textbin/fun_00226e08",
    # fun_002133d0 (run-14 worker b): retail materializes the float constants
    # pi/1.0/0.5 with lui/ori/mtc1 and carries the FP hazard NOPs; the frozen
    # profiles emit .lit4 loads and drop the NOPs. The patched profile plus the
    # permuter shape is 100/100/100 and patha linked-byte equal, 2026-09-14.
    "textbin/fun_002133d0",
    # fun_00206e18: the patched profile preserves the retail FP hazard NOP
    # and, with the descriptive-C v1 result barrier, the final result copy.
    "textbin/fun_00206e18",
    # textbin/fun_001fa6d0: retail converts the float argument in place
    # (cvt.w.s $f12,$f12); the v4 patched profile emits that form under
    # -mastra-inplace-cvt.
    "textbin/fun_001fa6d0",
    # Promoted by the decomp workbench: exact only under the patched
    # 991111 profile (fresh SN/EE-GCC 2.9 measurements are lower).
    "textbin/fun_0022c6f8",
    # Promoted by the decomp workbench: exact only under the patched
    # 991111 profile (fresh SN/EE-GCC 2.9 measurements are lower).
    "textbin/fun_00226848",
}

# Per-unit extra flags for the patched 991111 profile.  Every -mastra-* option
# is opt-in and absent by default; flag-absent output is byte-identical.
EE_GCC_PATCHED_FLAG_UNITS = {
    "picturecodingextension": "-mastra-volatile-delay -mastra-sd-saves",
    "textbin/fun_00226848": "-mastra-no-lo-sum-tie",
    "_lastFrame": "-mastra-sd-saves -mastra-cse-argdup -mastra-call-args-reverse -fno-expensive-optimizations -fno-schedule-insns",
    "textbin/fun_001fa6d0": "-mastra-inplace-cvt",
}

# Per-unit assembler policies applied by the generated padless-asm.py helper.
PADLESS_POLICY_UNITS = {
    "picturecodingextension": "at-store",
    # Ps2EeAs is single-pass and cc1 emits `.extern NAME, SIZE` at end of file:
    # for fun_0022f778 the la-only small-data symbol D_00160510 stayed a
    # lui+addiu pair; hoisting its directive yields retail's single
    # `addiu $3,$gp,-0x66f0` (86.117 -> 86.258 on the padless route).  The
    # route entry itself is added only once the unit stops being a pending
    # INCLUDE_ASM wrapper (the SN driver -S stage cannot expand the oracle's
    # `.include`, so a pending unit must keep the native EE-GCC 2.9 route).
    "fun_0022f778": "la-gprel",
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

# Per-unit extra compiler flags for the native EE-GCC 2.9 units whose
# exact codegen requires a different scheduling model.  Keyed by unit-name
# suffix so both the assembly-backed and the normalized/promoted name match.
# sce_sif_init_iop_heap: retail tail (lui v0; sw; move v0) is byte-exact only
# under -fno-schedule-insns; applying it globally to all EE-GCC 2.9 units changes
# scePad2Read and other already-exact siblings.
EE_GCC_FLAG_UNITS = {
    "sce_sif_init_iop_heap": "-fno-schedule-insns",
    # Absolute-store macros and the final GP store's delay-slot placement.
    "initialize_global_state_entry": "-mno-split-addresses -fno-schedule-insns",
    # Retail writes the absolute global through the assembler `$at` macro
    # (`lui $1,%hi; sw ...,%lo($1)`); the default split-address sequence uses a
    # general register instead.  Validated 100/100/100 under EE-GCC 2.9 + flag.
    "clear_stage_state_flag": "-mno-split-addresses",
    "initialize_streaming_state": "-mno-split-addresses",
    # DIntr: Sony libkernel privileged-loop glue.  The ps2sdk glue.c shape
    # (pinned eie/next/res + `.p2align 3`) matches retail only under the size
    # optimization with the missing-cse-follow-jumps policy; the default
    # -O2 compile picks `daddu a0,v1` for the out arm instead of $zero and
    # schedules the return move out of the jr delay slot.  100/100/100 under
    # EE-GCC 2.9 with this flag pair (campaign pipeline-2026-09-11-7).
    "DIntr": "-Os -fno-cse-follow-jumps",
    # __swrite: retail's field layout is u16@0xC + s16@0xE (not s32@0xE, which
    # the compiler pads to 0x10) and the s64 return is the dsll32/dsra32
    # sign-extension pair, which the local compiler only emits when the s32
    # result is forced through an s64 local + (u32) truncation.  Exact under
    # -Os -fno-cse-follow-jumps (pipeline-2026-09-13-11).
    "__swrite": "-Os -fno-cse-follow-jumps",
    # AppendDmaTag: retail folds the non-small global's absolute load as
    # `lui v0,%hi; lw v0,%lo(v0)` and the absolute store through the $at macro;
    # -G0 + -mno-split-addresses reproduces that (100/100/100/100 + patha,
    # run-12 wave-2 campaign 12f).
    "append_dma_tag": "-G0 -mno-split-addresses",
    # cmd_sem_init: retail stores the first CreateSema result in call 2's
    # delay slot.  Under -fno-schedule-insns the E8 store is issued before
    # call 2's `a0 = sp`, so the daddu takes the slot; the empty
    # `asm("" : "+r"(r1))` one-cycle edge delays the E8 store so reorg fills
    # the call-2 slot instead (pipeline-2026-09-13-12g).
    "cmd_sem_init": "-fno-schedule-insns",
    # Pending textbin walls (not byte-exact yet): retail's gcse predates
    # edge-based PRE insertion, so -fno-edge-lcm moves the hoisted computations
    # to block ends and raises the measured similarity.  A/B on the 2026-09-16
    # baseline workspace (native 991111-01, objdiff .text percent):
    #   fun_001f39d0 80.36 -> 80.84   fun_0022f778 71.06 -> 75.25
    #   fun_001fbc50 74.43 -> 74.75   fun_002093d8 72.23 -> 72.84
    #   fun_0022ca50 52.21 -> 56.34   fun_001fa978 27.43 -> 28.05
    # Units that measured worse keep the default route, and fun_0021a328 is
    # neutral (+0.04): fun_001fce28 54.07 -> 53.87, fun_001fde90 58.98 -> 56.16,
    # fun_00205640 46.17 -> 45.80.
    "fun_001f39d0": "-fno-edge-lcm",
    "fun_0022f778": "-fno-edge-lcm",
    "fun_001fbc50": "-fno-edge-lcm",
    "fun_002093d8": "-fno-edge-lcm",
    "fun_0022ca50": "-fno-edge-lcm",
    "fun_001fa978": "-fno-edge-lcm",
}


# Per-unit extra compiler flags for SN-routed textbin units whose exact
# codegen requires a non-default option.  fun_00225530 retail loads the global
# with a non-split address sequence (`lui v1,%hi; lw v1,%lo(v1)`), which the SN
# driver only reproduces with -mno-split-addresses; the default emits a split
# base register and scores 87.65% instead of 100%.
# textbin units verified byte-exact under the reconstructed game compiler
# (objdiff code=100 with the flags below; the first two are also patha
# link-verified).  Both this compiler and SN reproduce these retail objects
# only with the per-unit flags, i.e. the original build used them.
GAME_COMPILER_UNITS = {
    "textbin/fun_002071c0",
    "textbin/fun_001ff288",
    "textbin/fun_0012eb20",
    "textbin/fun_00221968",
    # 2026-09-22 pending-unit sweep follow-up: exact on the game compiler
    # with default flags (100/100/100, full-ELF PASS).
    "textbin/vu1_swap_chain",
    "textbin/fun_00215130",
    "textbin/sky_draw_shell",
    # fun_001f37e8: exact with default flags once its four same-file small
    # globals are declared to GAS before the body (__asm__ .extern); retail
    # only reaches those through gp, every other global absolutely.
    "textbin/fun_001f37e8",
    # dmac_vif1_enable: exact with default flags; the source shape (D_0015F1C
    # read through the pointer later reused for the DMAC register store) came
    # from a decomp-permuter run on the game-compiler route.
    "textbin/dmac_vif1_enable",
    # music_stop: exact with default flags (shared D_001516D0 layout from
    # include/rnc/d_001516d0.h; the final unk22/unk23 store order came from a
    # decomp-permuter run).
    "textbin/music_stop",
    "textbin/fun_0012eea8",
    "textbin/fun_0012ef28",
    "textbin/snd_stream_safe_cd_get_error",
    "textbin/snd_stream_safe_cd_read",
    "textbin/attach_manipulator",
    "textbin/audio_dec_begin_put",
    "textbin/fun_00233980",
    "textbin/fun_0012ee08",
    "textbin/fun_0023a790",
    "textbin/fun_0023aba0",
    "textbin/fun_0023a3b8",
    "textbin/fun_0023d0a8",
    "textbin/fun_0023b540",
    "textbin/fun_0023be20",
    "textbin/fun_0023b590",
    "textbin/fun_001f4248",
    "textbin/fun_001fb2a8",
    "textbin/fun_0022db10",
    "textbin/fun_002151d8",
    "textbin/fun_001f21c0",
    "textbin/fun_0021f8e8",
    "textbin/snd_unk_function_0012eb00",
    "textbin/fun_0021e1f8",
    "textbin/fun_0021f120",
    "textbin/fun_001ff780",
    "textbin/fun_00221930",
    "ee/clear_dma_queue_entry",
    "gs/initialize_render_state",
    "textbin/audio_dec_start",
    "textbin/fun_0012e1a8",
    "textbin/fun_0012e208",
    "textbin/fun_0012e240",
    "textbin/fun_0012e280",
    "textbin/fun_0012e2b8",
    "textbin/fun_0012e3b8",
    "textbin/fun_0012e448",
    "textbin/fun_0012ebd0",
    "textbin/fun_0012efa8",
    "textbin/fun_0012efe0",
    "textbin/fun_0012f068",
    "textbin/fun_0012f0a8",
    "textbin/fun_0012f0e0",
    "textbin/fun_0012f148",
    "textbin/fun_0012f178",
    "textbin/fun_001e9338",
    "textbin/fun_001ebc90",
    "textbin/fun_001eda60",
    "textbin/fun_001f6250",
    "textbin/fun_001f6270",
    "textbin/fun_001f6290",
    "textbin/fun_001f6530",
    "textbin/fun_001f65b0",
    "textbin/fun_001f6940",
    "textbin/fun_001f69d0",
    "textbin/fun_001f6a60",
    "textbin/fun_001f6af0",
    "textbin/fun_001f6b88",
    "textbin/fun_001f6c20",
    "textbin/fun_001f6fd0",
    "textbin/fun_001f7580",
    "textbin/fun_001f75f0",
    "textbin/fun_001f7978",
    "textbin/fun_001fdca0",
    "textbin/fun_001fe898",
    "textbin/fun_001ff480",
    "textbin/fun_00201128",
    "textbin/fun_00201f58",
    "textbin/fun_00201f88",
    "textbin/fun_00202d10",
    "textbin/fun_002049f0",
    "textbin/fun_00206978",
    "textbin/fun_00207100",
    "textbin/fun_00207300",
    "textbin/fun_00207bb0",
    "textbin/fun_0020d1a8",
    "textbin/fun_0020d218",
    "textbin/fun_0020d248",
    "textbin/fun_0020d3b0",
    "textbin/fun_0020d460",
    "textbin/fun_00213260",
    "textbin/fun_002132a8",
    "textbin/fun_002144d8",
    "textbin/fun_00214530",
    "textbin/fun_00214cc8",
    "textbin/fun_00215248",
    "textbin/fun_00215290",
    "textbin/fun_00215300",
    "textbin/fun_00215348",
    "textbin/fun_00215420",
    "textbin/fun_00215b10",
    "textbin/fun_002166e8",
    "textbin/fun_00216788",
    "textbin/fun_00216828",
    "textbin/fun_002168a8",
    "textbin/fun_00216950",
    "textbin/fun_002172c0",
    "textbin/fun_00217a10",
    "textbin/fun_0021cae0",
    "textbin/fun_0021d2c8",
    "textbin/fun_0021df58",
    "textbin/fun_0021e608",
    "textbin/fun_0021e890",
    "textbin/fun_0021eaf0",
    "textbin/fun_0021f330",
    "textbin/fun_0021f5f8",
    "textbin/fun_0021fce0",
    "textbin/fun_0021fd78",
    "textbin/fun_00220790",
    "textbin/fun_002212b8",
    "textbin/fun_00221a48",
    "textbin/fun_00221a88",
    "textbin/fun_00221d68",
    "textbin/fun_002220f0",
    "textbin/fun_00222d98",
    "textbin/fun_00222f18",
    "textbin/fun_00222f58",
    "textbin/fun_002242b8",
    "textbin/fun_00225660",
    "textbin/fun_00225a68",
    "textbin/fun_00226718",
    "textbin/fun_00226f50",
    "textbin/fun_0022d708",
    "textbin/fun_0022da68",
    "textbin/fun_00232ce0",
    "textbin/fun_00233d90",
    "textbin/fun_00233f00",
    "textbin/fun_00235840",
    "textbin/fun_00235898",
    "textbin/fun_00237e90",
    "textbin/fun_00238520",
    "textbin/fun_00238630",
    "textbin/fun_00238688",
    "textbin/fun_002386e8",
    "textbin/fun_00239750",
    "textbin/fun_0023a770",
    "textbin/fun_0023aa68",
    "textbin/fun_0023ab78",
    "textbin/fun_0023ac90",
    "textbin/fun_0023ad10",
    "textbin/fun_0023aef0",
    "textbin/fun_0023bb40",
    "textbin/fun_0023bbb0",
    "textbin/fun_0023bf18",
    "textbin/fun_0023c610",
    "textbin/fun_0023cac8",
    "textbin/fun_0023cbf0",
    "textbin/fun_0023cc10",
    "textbin/fun_0023cc38",
    "textbin/fun_0023cce0",
    "textbin/fun_0023d2d8",
    "textbin/get_occl_grid_from_pair",
    "textbin/init_moby_class_dists",
    "textbin/memcard_init",
    "textbin/read_buf_begin_get",
    "textbin/snd_continue_all_sounds_in_group",
    "textbin/snd_continue_vag_stream",
    "textbin/snd_get_vag_stream_time_remaining_cb",
    "textbin/snd_is_vag_stream_buffered_cb",
    "textbin/snd_pause_all_sounds_in_group",
    "textbin/snd_pause_vag_stream",
    "textbin/snd_set_reverb_ex",
    "textbin/snd_stream_safe_check_cd_idle",
    "textbin/snd_unload_bank",
    "textbin/update_occlusion",
    "textbin/vi_buf_delete",
    "textbin/video_dec_is_flushed",
    "textbin/video_dec_set_stream",
    "textbin/vo_buf_get_data",
    "textbin/fun_00225490",
    "textbin/fun_0022c7e8",
}

# Per-unit extra flags for GAME_COMPILER_UNITS (suffix match, as SN_FLAG_UNITS).
GAME_COMPILER_FLAG_UNITS = {
    # fun_0012eb20: retail's D_0015EC8C accesses are gp-relative in the body
    # (the .extern-ordering class); its call loop needs patch
    # 0046-r5900-pad-unfilled-loops (cc1 eb7a3497...).  100/100/100 and
    # full-ELF PASS on 2026-09-22.
    "fun_0012eb20": "-mastra-r5900-extern-buffer",
    # fun_00221968: 100/100/100 on the game compiler only with
    # -fno-expensive-optimizations (the bank flag; without it 90.45).  Its
    # 2026-09-22 demotion measured cc_game without the flag (62.65).
    "fun_00221968": "-fno-expensive-optimizations",
    "fun_0012eea8": "-mastra-r5900-extern-buffer",
    "fun_0012ef28": "-mastra-r5900-extern-buffer",
    "snd_stream_safe_cd_get_error": "-mastra-r5900-extern-buffer",
    "snd_stream_safe_cd_read": "-mastra-r5900-extern-buffer",
    "attach_manipulator": "-fno-strict-aliasing",
    "audio_dec_begin_put": "-fno-strict-aliasing",
    "fun_00233980": "-fno-strict-aliasing -mno-split-addresses",
    "fun_0012ee08": "-fno-gcse -mastra-r5900-extern-buffer",
    "fun_0023a790": "-mno-split-addresses",
    "fun_0023aba0": "-mno-split-addresses",
    "fun_0023a3b8": "-mno-split-addresses",
    "fun_0023d0a8": "-mno-split-addresses",
    "fun_0023b540": "-mno-split-addresses",
    "fun_0023be20": "-mno-split-addresses",
    "fun_0023b590": "-mno-split-addresses",
    "fun_001f4248": "-mno-split-addresses",
    "fun_001fb2a8": "-mno-split-addresses",
    "fun_0022db10": "-mno-split-addresses",
    "fun_002151d8": "-mno-split-addresses",
    "fun_001f21c0": "-mno-split-addresses",
    "fun_0021f8e8": "-mastra-r5900-extern-buffer",
    "snd_unk_function_0012eb00": "-mastra-r5900-extern-buffer",
    "fun_00225490": "-fno-schedule-insns",
    "fun_0022c7e8": "-fno-schedule-insns",
}

SN_FLAG_UNITS = {
    # Keep the loop's address register separate from the mode's live range.
    "fun_0012ee08": "-fno-gcse",
    "fun_00225490": "-fno-schedule-insns",
    # run 14 mass-c: 47.7f must materialize inline (lui/ori/mtc1), not via
    # .lit4; verified with p07 97.78 -> padless 100/100/100.
    "fun_00207300": "-G0",
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
    # fun_0023be20: the two index computations must stay in retail's order and
    # arg0->unk0 is materialized directly at each use; the default
    # split-address sequence diverges.  100/100/100 + patha byte-equal
    # (byte-max campaign 2026-09-13, pipeline-2026-09-13-10).
    "fun_0023be20": "-mno-split-addresses",
    # fun_001fb2a8: retail folds the non-small global's absolute load
    # (`lui a0,0x16; lw a0,-0x1148(a0)`) and keeps the ra save after it; the
    # array extern alone leaves the lui scheduled before the frame adjust.
    # 100/100/100 under SN with flag (pipeline-2026-09-13-11).
    "fun_001fb2a8": "-mno-split-addresses",
    # snd_post_message: retail keeps the index in v1 and the base in v0; the
    # default prepass scheduler swaps them.  100/100/100 with
    # -fno-schedule-insns (pipeline-2026-09-13-11 wave 2).
    "snd_post_message": "-fno-schedule-insns",
    # run 16 worker b: fun_0023b590 (startDisplay fragment) needs the
    # absolute $at store pair (`lui at,0x16; sw ...`) that retail emits; the
    # default split sequence differs.  Padless route + this flag is
    # instruction-identical (76/76) and patha byte-equal.
    "fun_0023b590": "-mno-split-addresses",
    # fun_0022db10: the limit/base globals are non-small absolute loads and
    # retail materializes the 0x13E550 slot table as `lui v0,0x14;
    # addiu v0,v0,-0x1ab0` with the 0x70 stride in v1.  100/100/100 + patha
    # byte-equal with -mno-split-addresses (pipeline-2026-09-15-16 worker c).
    "fun_0022db10": "-mno-split-addresses",
}

# Units whose retail objects carry compiler-emitted hazard NOPs that the
# bundled GNU assembler drops (FPU move-to-cop / compare hazards and the
# load-delay filler).  They compile with the SN cc1 but assemble with the SN
# toolchain's `ee/bin/Ps2EeAs.exe`, followed by a repo-owned normalization pass that removes only the
# assembler's section tail padding.  The list is explicit per unit: the
# assembler swap is proven per-object and must not drift to other units.
PADLESS_ASM_UNITS = {
    "textbin/fun_0020c9e0",
    "textbin/fun_002132a8",
    "textbin/fun_001ff480",
    "textbin/fun_001eda60",
    # padless-release sweep 2026-09-12: both banks keep a dropped hazard
    # NOP/load-delay residual under the bundled GNU as and reach 100/100/100
    # with the padless route (fun_00225660 also needed the build's canonical
    # FUN_00225530 callee symbol).
    "textbin/fun_00225660",
    "textbin/fun_00233d90",
    # padless-release sweep follow-up (run 7 resume): empty-asm barrier on the
    # 64-bit call result pins the two outgoing spills (sd v0,8(sp)/sd v1,0(sp))
    # ahead of the addiu pair, 100/100/100.
    "textbin/fun_001fe898",
    # run 13: the bundled GNU as refuses the short-loop padding NOP because the
    # loop body contains a forward branch; SN cc1 + Ps2EeAs emits it and the
    # resulting object is instruction-identical to the retail target (106/106).
    "textbin/fun_002212b8",
    # run 13 wave 3 (2026-09-14): same short-loop padding-NOP class; the
    # padless object is instruction-identical (49/49) and patha byte-equal.
    "textbin/fun_002073b8",
    # run 14 mass-c: FUN_0022da68 had two compiler-emitted hazard NOPs dropped
    # by the bundled GNU as (padless object instruction-identical, 41/41;
    # patha byte-equal vs retail).
    "textbin/fun_0022da68",
    # run 14 mass-c: two loop padding NOPs dropped by the bundled GNU as
    # (padless object instruction-identical, 44/44; patha byte-equal vs retail).
    "textbin/fun_002242b8",
    # run 14 mass-c: -G0 removes the .lit4 float load and the FPU mtc1->c.le.s
    # hazard NOP is Ps2EeAs-emitted (padless object instruction-identical,
    # 48/48; patha byte-equal vs retail).
    "textbin/fun_00207300",
    # run 16 worker a: the two FPU mtc1->c.le.s hazard NOPs are Ps2EeAs-emitted
    # (padless object instruction-identical, 48/48; patha byte-equal vs retail).
    # The winning source also needs the goto-chain tail plus v0/v1 register pins.
    "textbin/fun_00207100",
    # run 16 worker b: the short-loop erratum padding NOPs (3 after the jal)
    # are Ps2EeAs-emitted; the padless object is instruction-identical (76/76)
    # and patha byte-equal (sha 1487c262...).  Needs SN_FLAG_UNITS
    # -mno-split-addresses for the absolute $at store pair.
    "textbin/fun_0023b590",
    # run 16 worker b: cc_sn_padless is also the route that reproduces retail's
    # absolute same-register load of the scalar pointer global D_0016120C
    # (the cc_sn route emits %gp_rel); with the v0 pin on the second load the
    # object is instruction-identical (67/67) and patha byte-equal
    # (sha 508793fb...).  No SN flag needed.
    "textbin/fun_0023aa68",
    # fun_0012f208: promoted exact under SN cc1 + Ps2EeAs (padless policy
    # "none", 172/172 bytes, verified 2026-09-22).  The plain cc_sn route
    # drops the retail lui/addiu pair and compiles to 164 B, so the unit
    # must stay on the padless route.
    "textbin/fun_0012f208",
}


def _unit_flag(unit: str) -> str:
    for suffix, flags in EE_GCC_FLAG_UNITS.items():
        if unit.endswith(suffix):
            return flags
    return ""


def _unit_patched_flag(unit: str) -> str:
    for suffix, flags in EE_GCC_PATCHED_FLAG_UNITS.items():
        if unit.endswith(suffix):
            return flags
    return ""


def _unit_policy(unit: str) -> str:
    for suffix, policy in PADLESS_POLICY_UNITS.items():
        if unit.endswith(suffix):
            return policy
    return "none"


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
        if op == 0x1E:
            sq += 1
        elif op == 0x1F:
            lq += 1
        elif op == 0x3F:
            sd += 1
        elif op == 0x37:
            ld += 1
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

# Configuration names become file paths and compiler command fragments.
# Restrict them to the project's alphabet and forbid path escapes so a
# malformed or hostile row cannot write outside the build workspace.
_UNIT_NAME_RE = re.compile(r"^[A-Za-z0-9_][A-Za-z0-9_./-]*$")


def _check_unit_name(name: str) -> None:
    parts = [part for part in name.split("/") if part not in ("", ".")]
    if (
        not _UNIT_NAME_RE.match(name)
        or not parts
        or any(part == ".." for part in parts)
    ):
        raise SystemExit(
            f"unsafe unit name in build configuration: {name!r} "
            "(allowed: letters, digits, '_', '.', '/', '-'; no '..')"
        )


def validate_config_names(node: Any) -> None:
    """Reject configuration names that could escape the build tree."""
    if isinstance(node, dict):
        for key, value in node.items():
            if key == "name" and isinstance(value, str):
                _check_unit_name(value)
            validate_config_names(value)
    elif isinstance(node, list):
        if len(node) >= 3 and isinstance(node[1], str) and isinstance(node[2], str):
            _check_unit_name(node[2])
        for item in node:
            validate_config_names(item)


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

    compile_cmd = (
        f"{game_cc_dir}/ee-gcc -c {common_includes} {LANG_DEFINE} {COMPILER_FLAGS}"
    )

    return compile_cmd, common_includes


def sn_compiler_configured() -> bool:
    return (
        bool(SN_TOOLCHAIN_ROOT)
        and (Path(SN_TOOLCHAIN_ROOT) / "bin/ee-gcc.exe").is_file()
    )


def _game_compiler_root() -> Path:
    """Locate the reconstructed game compiler.

    The repository keeps it under tools/compilers/game-compiler; the baseline
    staging workspace copies the whole compilers tree to tools/cc, and
    GAME_COMPILER_ROOT overrides both.
    """
    if GAME_COMPILER_ROOT:
        return Path(GAME_COMPILER_ROOT)
    for candidate in (ROOT / "tools/compilers/game-compiler", ROOT / "tools/cc/game-compiler"):
        if (candidate / "ee-gcc").is_file():
            return candidate
    return ROOT / "tools/compilers/game-compiler"


def game_compiler_configured() -> bool:
    root = _game_compiler_root()
    return (root / "ee-gcc").is_file() and (root / "cc1").is_file()


def _unit_game_flag(unit: str) -> str:
    for suffix, flags in GAME_COMPILER_FLAG_UNITS.items():
        if unit.endswith(suffix):
            return flags
    return ""


def ee_gcc_patched_configured() -> bool:
    return bool(EE_GCC_PATCHED_ROOT) and (Path(EE_GCC_PATCHED_ROOT) / "xgcc").is_file()


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
        parts = parts[parts.index("src") + 1 :]
    joined = "/".join(parts)
    if joined.endswith(".c.o"):
        joined = joined[: -len(".c.o")]
    return joined


# C aliases in promoted sources: ALIAS __attribute__((alias("TARGET"))).
# The oracle fallback keeps the bytes but not the aliases, so they are handed
# to the linker (PROVIDE, only when nothing else defines them).
_ALIAS_RE = re.compile(
    r"([A-Za-z_]\w*)\s*__attribute__\s*\(\(\s*alias\s*\(\s*\"([^\"]+)\"\s*\)\s*\)\)"
)


def _alias_symbols(source: Path) -> set[tuple[str, str]]:
    """(alias, target) pairs declared in a source file."""
    text = source.read_text(errors="replace")
    return {(match.group(1), match.group(2)) for match in _ALIAS_RE.finditer(text)}


PADLESS_ASM_HELPER = r'''#!/usr/bin/env python3
"""Normalize SN cc1 output for Ps2EeAs and drop section tail padding.

`normalize IN OUT` rewrites GNU `alias = function` assignments into
co-located labels (Ps2EeAs rejects the assignment form).
`finish PADDED OUT` removes only the `.text` section tail padding after the
last sized function and adds empty `.data`/`.bss` sections so object
comparison sees the GNU layout.  Every check fails closed; no target bytes,
addresses or expected lengths are inputs.
"""
import re
import struct
import sys


def normalize_aliases(text):
    labels = set(re.findall(r"^\s*([\w.$]+):\s*$", text, re.M))
    pattern = re.compile(r"^\s*([\w.$]+)\s*=\s*([\w.$]+)\s*$", re.M)
    aliases = {}
    for match in pattern.finditer(text):
        alias, target = match.groups()
        if target in labels:
            aliases.setdefault(target, []).append(alias)
    text = pattern.sub(lambda m: "" if m[2] in aliases else m[0], text)
    for target, names in aliases.items():
        text = re.sub(r"^(\s*)" + re.escape(target) + r":\s*$",
                      lambda m: "".join(name + ":\n" for name in names) + target + ":",
                      text, count=1, flags=re.M)
    return text


def unpad(data):
    if data[:7] != b"\x7fELF\x01\x01\x01" or struct.unpack_from("<H", data, 16)[0] != 1:
        raise ValueError("expected a little-endian ELF32 relocatable object")
    shoff = struct.unpack_from("<I", data, 32)[0]
    shsize, count, names_index = struct.unpack_from("<HHH", data, 46)
    if shsize != 40 or shoff + count * shsize > len(data):
        raise ValueError("invalid section table")
    headers = [struct.unpack_from("<10I", data, shoff + i * shsize) for i in range(count)]
    nh = headers[names_index]
    names = data[nh[4]:nh[4] + nh[5]]
    text_indices = [i for i, h in enumerate(headers)
                    if names[h[0]:].split(b"\0")[0] == b".text"]
    if len(text_indices) != 1:
        raise ValueError("expected exactly one .text section")
    index = text_indices[0]
    text = headers[index]
    if text[1] != 1 or text[2] & 6 != 6 or text[4] + text[5] > len(data):
        raise ValueError("invalid executable .text section")
    symbols = []
    for h in headers:
        if h[1] == 2:
            if h[9] != 16 or h[5] % 16:
                raise ValueError("invalid symbol table")
            for offset in range(h[4], h[4] + h[5], 16):
                sym = struct.unpack_from("<IIIBBH", data, offset)
                if sym[5] == index:
                    symbols.append(sym)
    funcs = [s for s in symbols if s[3] & 15 == 2 and s[2]]
    if not funcs:
        raise ValueError("no sized function symbols; cannot infer code extent")
    end = max(s[1] + s[2] for s in funcs)
    padding = text[5] - end
    if padding < 0 or padding >= max(text[8], 1) or end % 4:
        raise ValueError("function extent does not explain section tail padding")
    if any(data[text[4] + end:text[4] + text[5]]):
        raise ValueError("nonzero bytes after final function")
    if any(s[1] > end or (s[1] == end and s[3] & 15 not in (0, 3))
           or (s[3] & 15 != 3 and s[1] + s[2] > end) for s in symbols):
        raise ValueError("symbol refers to removed padding")
    for h in headers:
        if h[1] in (4, 9) and h[7] == index:
            stride = 12 if h[1] == 4 else 8
            if h[9] != stride or h[5] % stride:
                raise ValueError("invalid relocation table")
            if any(struct.unpack_from("<I", data, offset)[0] >= end
                   for offset in range(h[4], h[4] + h[5], stride)):
                raise ValueError("relocation refers to removed padding")
    result = bytearray(data)
    struct.pack_into("<I", result, shoff + index * shsize + 20, end)
    return bytes(result)


def add_empty_sections(data):
    shoff = struct.unpack_from("<I", data, 32)[0]
    shsize, count, names_index = struct.unpack_from("<HHH", data, 46)
    headers = [list(struct.unpack_from("<10I", data, shoff + i * shsize)) for i in range(count)]
    nh = headers[names_index]
    names = bytearray(data[nh[4]:nh[4] + nh[5]])
    present = {bytes(names[h[0]:]).split(b"\0")[0] for h in headers}
    added = []
    for name, kind in ((b".data", 1), (b".bss", 8)):
        if name in present:
            continue
        headers.append([len(names), kind, 3, 0, len(data), 0, 0, 0, 1, 0])
        names.extend(name + b"\0")
        added.append(name.decode())
    if not added:
        return data
    result = bytearray(data)
    nh[4], nh[5] = len(result), len(names)
    result.extend(names)
    result.extend(b"\0" * (-len(result) % 4))
    struct.pack_into("<I", result, 32, len(result))
    struct.pack_into("<H", result, 48, len(headers))
    for h in headers:
        result.extend(struct.pack("<10I", *h))
    return bytes(result)


def apply_at_store_policy(assembly):
    import re
    if re.search(r"\.set[ \t]+noat", assembly):
        return assembly
    output = []
    pending = False
    for line in assembly.splitlines(keepends=True):
        if re.match(r"^[ \t]*li[ \t]+\$1[ \t]*,[ \t]*\S+[ \t]*(?:#.*)?$", line):
            output.append("\t.set\tnoat\n")
            pending = True
            output.append(line)
        elif pending and re.match(r"^[ \t]*sw[ \t]+\$?\w+[ \t]*,[^#\n]*\(\$1\)", line):
            output.append(line)
            output.append("\t.set\tat\n")
            pending = False
        else:
            output.append(line)
    if pending:
        raise SystemExit("at-store policy: li $1 without a following store through $1")
    return "".join(output)


def apply_la_gprel_policy(assembly):
    """Hoist `.extern` size directives for `la`-only small-data symbols.

    Ps2EeAs is a single-pass assembler: a bare symbol reference is relaxed to
    gp-relative only when the symbol's `.extern NAME, SIZE` directive has
    already been seen, while cc1 emits every directive at end of file.  A
    symbol that is only ever the address operand of `la` therefore expands to
    lui+addiu instead of retail's single `addiu $r,$gp,%gprel(NAME)`.  Only
    symbols that (a) declare a size in 1..8 and (b) never appear as a memory
    operand are moved; hoisting memory-operand externs over-relaxes accesses
    that retail keeps absolute (measured regression).
    """
    import re
    extern_line = re.compile(r"^[ \t]*\.extern[ \t]+([\w.$]+)[ \t]*,[ \t]*(\d+)[ \t]*(?:#.*)?$")
    la_line = re.compile(r"^[ \t]*la[ \t]+\$?\w+[ \t]*,[ \t]*([\w.$]+)[ \t]*(?:#.*)?$")
    label_line = re.compile(r"^[ \t]*([\w.$]+):")
    lines = assembly.splitlines(keepends=True)
    # SN's Windows driver writes CRLF; strip the CR for matching only.
    stripped = [line.rstrip("\r\n") for line in lines]
    entries = []
    for index, line in enumerate(stripped):
        match = extern_line.match(line)
        if match:
            entries.append((index, match.group(1), int(match.group(2))))
    if not entries:
        return assembly
    extern_indices = {index for index, _, _ in entries}
    labels = {m.group(1) for m in (label_line.match(line) for line in stripped) if m}
    la_lines = {index for index, line in enumerate(stripped) if la_line.match(line)}
    hoisted = set()
    for index, name, size in entries:
        if name in labels or not 1 <= size <= 8:
            continue
        pattern = re.compile(r"(?<![\w.$])" + re.escape(name) + r"(?![\w.$])")
        mentions = [i for i, line in enumerate(stripped) if pattern.search(line) and i not in extern_indices]
        if not mentions or any(mention not in la_lines for mention in mentions):
            continue
        if min(mentions) >= index:
            continue  # directive already precedes its first use
        hoisted.add(name)
    if not hoisted:
        return assembly
    moved = [line for index, name, _ in entries if name in hoisted for line in [lines[index]]]
    body = [line for index, line in enumerate(lines)
            if not (index in extern_indices and extern_line.match(stripped[index]).group(1) in hoisted)]
    insert_at = next((i for i, line in enumerate(stripped) if line.strip() == ".text"), 0)
    return "".join(body[:insert_at] + moved + body[insert_at:])


def main(argv):
    if len(argv) not in (4, 5):
        raise SystemExit("usage: padless-asm.py normalize|finish IN OUT [POLICY]")
    mode, source, destination = argv[1:4]
    policy = argv[4] if len(argv) == 5 else "none"
    data = open(source, "rb").read()
    if mode == "normalize":
        assembly = normalize_aliases(data.decode())
        if policy == "at-store":
            assembly = apply_at_store_policy(assembly)
        elif policy == "la-gprel":
            assembly = apply_la_gprel_policy(assembly)
        elif policy != "none":
            raise SystemExit("unknown assembler policy: " + policy)
        open(destination, "w").write(assembly)
    elif mode == "finish":
        open(destination, "wb").write(add_empty_sections(unpad(data)))
    else:
        raise SystemExit("unknown mode: " + mode)


if __name__ == "__main__":
    main(sys.argv)
'''


def clean(config_dir: Path):
    for file in (
        ".splache",
        "build.ninja",
        ".ninja_log",
        "permuter_settings.toml",
        "objdiff.json",
        "undefined_syms_auto.txt",
        "padless-asm.py",
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
        command=f"{compile_cmd} $in $extra -o $out && {CROSS}strip $out -N dummy-symbol-name -R .mdebug",
    )

    if game_compiler_configured():
        game_root = _game_compiler_root()
        ninja.rule(
            "cc_game",
            description="cc_game $in",
            command=(
                f"{game_root}/ee-gcc -c {common_includes} {LANG_DEFINE} {COMPILER_FLAGS} "
                f"$in $extra -o $out && {CROSS}strip $out -N dummy-symbol-name -R .mdebug"
            ),
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
                f"cp $sn_work/cand.o $out && {CROSS}strip $out -N dummy-symbol-name -R .mdebug"
            ),
        )

        # SN cc1 + Ps2EeAs: the bundled GNU assembler drops
        # compiler-emitted hazard NOPs, while Ps2EeAs materializes them and
        # pads `.text` to its section alignment.  The generated helper rewrites
        # GNU alias assignments to labels and trims only that padding.
        (config_dir / "padless-asm.py").write_text(PADLESS_ASM_HELPER)
        ee_assembler = str(Path(SN_TOOLCHAIN_ROOT) / "ee/bin/Ps2EeAs.exe")
        ninja.rule(
            "cc_sn_padless",
            description="cc_sn_padless $in",
            command=(
                f"mkdir -p $sn_work && cp $in $sn_work/cand.c && "
                f"'{sn_driver}' -S '-B{sn_lib}\\' '-B{sn_eebin}\\' "
                f"-I'{sn_inc}' -I'{sn_repo_inc}' "
                f"-DBUILD_US_VERSION -DMATCHING_DECOMP -O2 -g2 $extra "
                f"'$sn_work_win/cand.c' -o '$sn_work_win/cand.s' && "
                f"{sys.executable} padless-asm.py normalize $sn_work/cand.s $sn_work/cand-final.s $policy && "
                f"'{ee_assembler}' -o '$sn_work_win/cand-padded.o' '$sn_work_win/cand-final.s' && "
                f"{sys.executable} padless-asm.py finish $sn_work/cand-padded.o $out && "
                f"{CROSS}strip $out -N dummy-symbol-name -R .mdebug"
            ),
        )

        # Patched public 991111 cc1 (R5900 quad saves + classic mult/mflo) with
        # the same alias normalization + Ps2EeAs + padless finish.  Native
        # driver, so only the assembler step needs Windows paths.
        if ee_gcc_patched_configured():
            patched_root = Path(EE_GCC_PATCHED_ROOT)
            patched_driver = str(patched_root / "xgcc")
            patched_include = str(ROOT / "include")
            ninja.rule(
                "cc_ee_gcc_patched",
                description="cc_ee_gcc_patched $in",
                command=(
                    f"mkdir -p $pat_work && cp $in $pat_work/cand.c && "
                    f"'{patched_driver}' -S -B'{patched_root}/' -I'{patched_include}' "
                    f"-DBUILD_US_VERSION -DMATCHING_DECOMP -O2 -g2 $extra "
                    f"$pat_work/cand.c -o $pat_work/cand.s && "
                    f"{sys.executable} padless-asm.py normalize $pat_work/cand.s $pat_work/cand-final.s $policy && "
                    f"'{ee_assembler}' -o '$pat_work_win/cand-padded.o' '$pat_work_win/cand-final.s' && "
                    f"{sys.executable} padless-asm.py finish $pat_work/cand-padded.o $out && "
                    f"{CROSS}strip $out -N dummy-symbol-name -R .mdebug"
                ),
            )

    ninja.rule(
        "ld",
        description="link $out",
        command=f"{CROSS}ld {ld_args} -T oracle-aliases.txt",
    )

    ninja.rule(
        "verify_boot",
        description="verify reconstructed boot ELF $in",
        command="cmp -s $in && touch $out",
    )

    # Fallback for patched-profile units when the profile is absent: build
    # them from the retail oracle instead of their C.
    ninja.rule(
        "oracle_obj",
        description="oracle $out",
        command="cp $in $out",
    )

    ninja.rule(
        "elf",
        description="elf $out",
        command=f"{CROSS}objcopy $in $out -O binary",
    )

    # The patched route needs both the profile and the SN assembler.
    patched_route = ee_gcc_patched_configured() and sn_compiler_configured()
    oracle_fallback_units: list[str] = []

    for entry in linker_entries:
        seg = entry.segment

        if seg.type[0] == ".":
            continue

        if entry.object_path is None:
            continue

        if isinstance(seg, splat.segtypes.common.c.CommonSegC):
            entry.src_paths = [
                Path("..", "..") / src_file for src_file in entry.src_paths
            ]
            unit = _unit_from_object(entry.object_path)
            style = "none"
            if sn_compiler_configured() and elf_bytes:
                vram = getattr(seg, "vram_start", None)
                if vram:
                    style = _retail_save_style(
                        elf_bytes, int(vram), max(int(seg.size or 0), 4)
                    )
            # Per-unit compiler by retail save style: sq/lq textbin code is
            # SN; sd/ld and save-less leaves stay on the inherited EE-GCC 2.9 pin
            # (they were matched there and SD-style textbin breaks under SN).
            use_sn = sn_compiler_configured() and (
                unit in SN_COMPILER_UNITS or (_unit_uses_sn(unit) and style == "sq")
            )
            use_patched = patched_route and unit in EE_GCC_PATCHED_UNITS
            use_game = game_compiler_configured() and unit in GAME_COMPILER_UNITS
            if use_game:
                game_extra = _unit_game_flag(unit)
                variables = {}
                if game_extra:
                    variables["extra"] = f"{game_extra} "
                build(entry.object_path, entry.src_paths, "cc_game", variables=variables)
            elif use_patched:
                pat_work = str(ROOT / "build/patched-work/units" / unit)
                flags = _unit_patched_flag(unit)
                variables = {
                    "pat_work": pat_work,
                    "pat_work_win": _win_path(pat_work),
                    "extra": f"{flags} " if flags else "",
                    "policy": _unit_policy(unit),
                }
                build(
                    entry.object_path,
                    entry.src_paths,
                    "cc_ee_gcc_patched",
                    variables=variables,
                )
            elif not patched_route and unit in EE_GCC_PATCHED_UNITS:
                # No patched profile: build from the retail oracle; the C is
                # verified when the profile is available.
                oracle_fallback_units.append(unit)
                build(
                    entry.object_path,
                    [Path("expected/obj") / f"{unit}.c.o"],
                    "oracle_obj",
                )
            elif sn_compiler_configured() and unit in PADLESS_ASM_UNITS:
                sn_work = str(sn_repo / "build/sn-work/units" / unit)
                sn_extra = _unit_sn_flag(unit)
                variables = {
                    "sn_work": sn_work,
                    "sn_work_win": _win_path(sn_work),
                    "policy": _unit_policy(unit),
                }
                if sn_extra:
                    variables["extra"] = f"{sn_extra} "
                build(
                    entry.object_path,
                    entry.src_paths,
                    "cc_sn_padless",
                    variables=variables,
                )
            elif use_sn:
                sn_work = str(sn_repo / "build/sn-work/units" / unit)
                sn_extra = _unit_sn_flag(unit)
                variables = {
                    "sn_work": sn_work,
                    "sn_work_win": _win_path(sn_work),
                }
                if sn_extra:
                    variables["extra"] = f"{sn_extra} "
                build(entry.object_path, entry.src_paths, "cc_sn", variables=variables)
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

    fallback_path = config_dir / "oracle-fallback-units.json"
    alias_path = config_dir / "oracle-aliases.txt"
    alias_entries: set[tuple[str, str]] = set()
    if oracle_fallback_units:
        fallback_path.write_text(
            json.dumps(
                {
                    "schema": "rnc-oracle-fallback-v1",
                    "reason": "EE_GCC_PATCHED_ROOT is not configured",
                    "units": sorted(oracle_fallback_units),
                },
                indent=2,
            )
            + "\n"
        )
        for unit in oracle_fallback_units:
            source = (config_dir / ".." / ".." / "src" / f"{unit}.c").resolve()
            if source.is_file():
                alias_entries.update(_alias_symbols(source))
        print(
            f"EE_GCC_PATCHED_ROOT not configured: {len(oracle_fallback_units)} "
            "unit(s) will be built from the retail oracle "
            "(see docs/patched-toolchain.md)"
        )
    else:
        fallback_path.unlink(missing_ok=True)
    alias_lines = [
        "/* Generated by configure.py: aliases for oracle-built patched-profile",
        " * units, provided only when nothing else defines them. */",
    ]
    alias_lines.extend(
        f"PROVIDE({alias} = {target});" for alias, target in sorted(alias_entries)
    )
    alias_path.write_text("\n".join(alias_lines) + "\n")

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


def fix_gp_rel_stores(asm_root: Path) -> int:
    """Normalize the gp-relative store spelling for the frozen assembler.

    Splat emits ``sw $r, %gp_rel(sym)($28)`` for small-data stores.  The
    pinned EE 2.9 assembler rejects the ``%gp_rel`` operator on stores
    ("Bad expression"), while the hand-written oracles used
    ``.extern sym, 4`` plus a bare ``sym`` operand, which expands to the
    same R_MIPS_GPREL16 relocation.  Only generated per-function
    ``expected/asm`` files are touched; expected objects come from the
    whole-unit ``.c.s`` output through binutils and are unaffected.
    """
    pattern = re.compile(
        r"(?P<indent>[ \t]*)(?P<op>sw|swc1|sd|sdc1|sh|sb)(?P<spacing>\s+)"
        r"(?P<reg>\$[a-z0-9]+),\s*%gp_rel\((?P<sym>[A-Za-z0-9_]+)\)\(\$28\)"
    )
    fixed = 0
    for asm_file in asm_root.rglob("*.s"):
        text = asm_file.read_text()
        symbols: list[str] = []

        def rewrite(match: re.Match[str]) -> str:
            symbol = match.group("sym")
            if symbol not in symbols:
                symbols.append(symbol)
            return (
                f"{match.group('indent')}{match.group('op')}{match.group('spacing')}"
                f"{match.group('reg')}, {symbol}"
            )

        updated = pattern.sub(rewrite, text)
        if updated == text:
            continue
        missing = [symbol for symbol in symbols if f".extern {symbol}," not in updated]
        if missing:
            updated = "".join(f".extern {symbol}, 4\n" for symbol in missing) + updated
        asm_file.write_text(updated)
        fixed += 1
    return fixed


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

        rewritten = fix_gp_rel_stores(dst_path)
        if rewritten:
            print(f"normalized gp-relative stores in {rewritten} expected asm files")

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
        up_includes = " ".join(
            shlex.quote(f"-I{part}")
            for part in (f"{rel_root}/src", f"{rel_root}/include", "include")
        )

        for asm_file in tmp_asm_dir.rglob("*.c.s"):
            asm_file_rel = asm_file.relative_to(tmp_path)
            obj_file_rel = Path("obj") / asm_file.relative_to(tmp_asm_dir).with_suffix(
                ".o"
            )
            obj_file = tmp_obj_path / obj_file_rel.relative_to("obj")
            obj_file.parent.mkdir(parents=True, exist_ok=True)
            asm_include = shlex.quote(f"-Wa,-I{rel_root}/include")
            assembler_include = shlex.quote(f"-I{rel_root}/include")
            subprocess.run(
                f"{shlex.quote(cpp)} {up_includes} {asm_include} "
                f"{shlex.quote(str(asm_file_rel))} -o - | "
                f"{CROSS}as -no-pad-sections -EL -march=5900 -mabi=eabi "
                f"{assembler_include} -o {shlex.quote(str(obj_file_rel))}",
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
        data_asm, count = re.subn(
            rf'\.incbin "{asset_rel_path}/', '.incbin "assets/', data_asm
        )
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
                    patched_lines.append(
                        f"{indent}. = ALIGN(., {current_section_subalign});\n"
                    )

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

    overlays = {name: (vram, at) for name, (vram, at) in RODATA_OVERLAYS.items()}
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
            if (
                isinstance(subsegment, list)
                and len(subsegment) >= 3
                and subsegment[1] == "c"
            ):
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
    rodata_overlay = (
        "\n\n".join(rodata_overlay_sections) if rodata_overlay_sections else ""
    )
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
    validate_config_names(config["segments"])

    basename = config["options"]["basename"]
    config_dir = Path(args.YAML_FILE).parent

    if basename not in LANGUAGES:
        supported_elfs = (
            f"{set(f'{elf} ({lang})' for elf, lang in LANGUAGES.items())}".replace(
                "'", ""
            )
        )
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
