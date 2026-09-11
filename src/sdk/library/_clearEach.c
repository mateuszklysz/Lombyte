/*
STATE: C_EXACT
SYMBOL: _clearEach
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2 (-O2 -g2 -gstabs)
DECISION: promoted via pipeline-2026-09-11-6 transactional staged + full-ELF gate
BLOCKER: none
*/

/*
AUTO-DIAGNOSIS
symbol: _clearEach
unit: assembly/sdk/library/_clearEach
code_percent: 69.9000
function_percent: 69.9000
data_percent: 100.0000
expected: {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "200", "object": "_clearEach.c.o", "text_size": "200"}
current: {"code_percent": 69.9, "data_percent": 100.0, "function_percent": 69.9, "function_size": "212", "object": "candidate.o", "text_size": "212"}
diff: {"code_gap_percent": 30.1, "current_instruction_mismatch_count": 31, "data_gap_percent": 0.0, "function_gap_percent": 30.1, "instruction_mismatches": [{"current": "addiu sp, sp, -0x20", "expected": "addiu sp, sp, -0x10", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "addiu v0, zero, 0x1", "kind": "DIFF_DELETE"}, {"current": "sd s0, 0x0(sp)", "expected": "sd ra, 0x0(sp)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "sd ra, 0x10(sp)", "expected": "sw v0, 0x818(a0)", "kind": "DIFF_REPLACE"}, {"current": "daddu s0, a0, zero", "expected": null, "kind": "DIFF_INSERT"}, {"current": "addiu v1, zero, 0x1", "expected": null, "kind": "DIFF_INSERT"}, {"current": "sw zero, 0x1b0(s0)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "sw v1, 0x818(s0)", "expected": "sw zero, 0x1b0(a0)", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "lui a2, 0x1000", "kind": "DIFF_DELETE"}, {"current": "lui a2, 0x1000", "expected": "lui a3, 0x1000", "kind": "DIFF_ARG_MISMATCH"}, {"current": "lui v1, 0x1", "expected": "lui a4, 0x1", "kind": "DIFF_ARG_MISMATCH"}, {"current": "lw a1, 0x0(a2)", "expected": "lw v1, 0x0(a2)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "lui a3, 0x1000", "expected": null, "kind": "DIFF_INSERT"}, {"current": null, "expected": "lui a0, 0x1000", "kind": "DIFF_DELETE"}, {"current": "lui a0, 0x1000", "expected": "lui a1, 0x1000", "kind": "DIFF_ARG_MISMATCH"}, {"current": "or a1, a1, v1", "expected": "or v1, v1, a4", "kind": "DIFF_ARG_MISMATCH"}, {"current": "sw a1, 0x0(a3)", "expected": "sw v1, 0x0(a3)", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "ori a1, a1, 0xb400", "kind": "DIFF_DELETE"}, {"current": null, "expected": "sw zero, 0x0(a0)", "kind": "DIFF_DELETE"}, {"current": "sw zero, 0x0(a0)", "expected": "sw zero, 0x0(a1)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "ori v1, v1, 0xb400", "expected": "ori v1, v1, 0xd400", "kind": "DIFF_ARG_MISMATCH"}, {"current": "lui a0, 0x1000", "expected": null, "kind": "DIFF_INSERT"}, {"current": "ori a0, a0, 0xd400", "expected": null, "kind": "DIFF_INSERT"}, {"current": "lui a1, 0xfffe", "expected": "lui a0, 0xfffe", "kind": "DIFF_ARG_MISMATCH"}, {"current": "sw zero, 0x0(a0)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "ori a1, a1, 0xffff", "expected": "ori a0, a0, 0xffff", "kind": "DIFF_ARG_MISMATCH"}, {"current": "and v1, v1, a1", "expected": "and v1, v1, a0", "kind": "DIFF_ARG_MISMATCH"}, {"current": "ld ra, 0x10(sp)", "expected": "ld ra, 0x0(sp)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "ld s0, 0x0(sp)", "expected": "sw v1, 0x0(v0)", "kind": "DIFF_REPLACE"}, {"current": "sw v1, 0x0(v0)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "addiu sp, sp, 0x20", "expected": "addiu sp, sp, 0x10", "kind": "DIFF_ARG_MISMATCH"}], "order_only": false, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 31}
*/

/* _clearEach c2: reset IPU/GS state registers and sync. */

#include "types.h"

extern s32 DIntr();
extern void EnableInterrupts();
extern s32 sceIpuSync();

void _clearEach(u8 *ctx) {
    s32 state;

    *(s32 *)(ctx + 0x818) = 1;
    *(s32 *)(ctx + 0x1B0) = 0;
    state = DIntr();

    *(volatile u32 *)0x1000F590 = *(volatile u32 *)0x1000F520 | 0x10000;
    *(volatile u32 *)0x1000B000 = 0;
    *(volatile u32 *)0x1000B400 = 0;
    *(volatile u32 *)0x1000D400 = 0;
    *(volatile u32 *)0x1000F590 = *(volatile u32 *)0x1000F520 & 0xFFFEFFFF;

    if (state != 0)
        EnableInterrupts();

    *(volatile u32 *)0x1000B020 = 0;
    *(volatile u32 *)0x1000B420 = 0;
    *(volatile u32 *)0x1000D420 = 0;
    *(volatile u32 *)0x10002010 = 0x40000000;

    sceIpuSync(0, 0);
}
