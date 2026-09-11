/*
STATE: C_EXACT
SYMBOL: new_iob
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2 (-O2 -g2 -gstabs)
DECISION: promoted via pipeline-2026-09-11-6 transactional staged + full-ELF gate
BLOCKER: none
*/

/*
AUTO-DIAGNOSIS
symbol: new_iob
unit: assembly/sdk/library/new_iob
code_percent: 82.7647
function_percent: 82.7647
data_percent: 100.0000
expected: {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "136", "object": "new_iob.c.o", "text_size": "136"}
current: {"code_percent": 82.76471, "data_percent": 100.0, "function_percent": 82.76471, "function_size": "140", "object": "candidate.o", "text_size": "140"}
diff: {"code_gap_percent": 17.23529, "current_instruction_mismatch_count": 14, "data_gap_percent": 0.0, "function_gap_percent": 17.23529, "instruction_mismatches": [{"current": "addiu sp, sp, -0x40", "expected": "addiu sp, sp, -0x30", "kind": "DIFF_ARG_MISMATCH"}, {"current": "lui s1, %hi(D_0012FCA0)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "sd ra, 0x30(sp)", "expected": "sd ra, 0x20(sp)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "sd s2, 0x20(sp)", "expected": "lui s1, %hi(D_0012FCA0)", "kind": "DIFF_REPLACE"}, {"current": "lui s2, 0x1000", "expected": "lui a1, 0x1000", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "nop ", "kind": "DIFF_DELETE"}, {"current": null, "expected": "lw a0, %lo(D_0012FCA0)(s1)", "kind": "DIFF_DELETE"}, {"current": "lw a0, %lo(D_0012FCA0)(s1)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "sw s2, 0x4(s0)", "expected": "sw a1, 0x4(s0)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "ld ra, 0x30(sp)", "expected": "ld ra, 0x20(sp)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "ld s2, 0x20(sp)", "expected": "ld s1, 0x10(sp)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "ld s1, 0x10(sp)", "expected": "ld s0, 0x0(sp)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "ld s0, 0x0(sp)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "addiu sp, sp, 0x40", "expected": "addiu sp, sp, 0x30", "kind": "DIFF_ARG_MISMATCH"}], "order_only": false, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 14}
*/

/* new_iob n2: game FS I/O buffer allocator; get_iob sibling. */

#include "types.h"

extern s32 _sceFsIobSemaMK();
extern s32 WaitSema();
extern s32 SignalSema();
extern s32 D_0012FCA0[];
extern u8 D_00157D80[];

void *new_iob(void) {
    u8 *iob;

    _sceFsIobSemaMK();
    WaitSema(D_0012FCA0[0]);

    for (iob = D_00157D80; iob < D_00157D80 + 0x200; iob += 0x10) {
        if (*(u32 *)(iob + 4) == 0) {
            *(u32 *)(iob + 4) = 0x10000000;
            SignalSema(D_0012FCA0[0]);
            return iob;
        }
    }

    SignalSema(D_0012FCA0[0]);
    return 0;
}
