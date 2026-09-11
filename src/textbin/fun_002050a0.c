/*
STATE: C_EXACT
SYMBOL: FUN_002050a0
SCORE: code=100 functions=100 data=100 complete_data=100 (staged)
COMPILER: sn-O2 -O2 -g2 -gstabs
DECISION: promoted (pipeline-2026-09-10-4)
BLOCKER: none
EVIDENCE: build/workspace/rnc-refval/campaigns/pipeline-2026-09-10-4/refinement/FUN_002050a0/attempt-1/finalist.json
*/
/*
AUTO-DIAGNOSIS
symbol: FUN_002050a0
unit: assembly/textbin/fun_002050a0
code_percent: 11.4706
function_percent: 11.4706
data_percent: 100.0000
expected: {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "68", "object": "fun_002050a0.c.o", "text_size": "68"}
current: {"code_percent": 11.470589, "data_percent": 100.0, "function_percent": 11.470589, "function_size": "8", "object": "candidate.o", "text_size": "8"}
diff: {"code_gap_percent": 88.529411, "current_instruction_mismatch_count": 16, "data_gap_percent": 0.0, "function_gap_percent": 88.529411, "instruction_mismatches": [{"current": null, "expected": "lui v0, 0x1a", "kind": "DIFF_DELETE"}, {"current": null, "expected": "daddu a1, zero, zero", "kind": "DIFF_DELETE"}, {"current": null, "expected": "addiu v0, v0, 0xf0", "kind": "DIFF_DELETE"}, {"current": null, "expected": "addiu v1, v0, 0x28c", "kind": "DIFF_DELETE"}, {"current": null, "expected": "lw v0, -0x14(v1)", "kind": "DIFF_DELETE"}, {"current": null, "expected": "beqzl v0, 0x30", "kind": "DIFF_DELETE"}, {"current": null, "expected": "addiu a1, a1, 0x1", "kind": "DIFF_DELETE"}, {"current": null, "expected": "lw v0, 0x0(v1)", "kind": "DIFF_DELETE"}, {"current": null, "expected": "bnel v0, a0, 0x30", "kind": "DIFF_DELETE"}, {"current": null, "expected": "addiu a1, a1, 0x1", "kind": "DIFF_DELETE"}, {"current": "daddu v0, zero, zero", "expected": "daddu v0, a1, zero", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "slti v0, a1, 0x5", "kind": "DIFF_DELETE"}, {"current": null, "expected": "bnez v0, 0x10", "kind": "DIFF_DELETE"}, {"current": null, "expected": "addiu v1, v1, 0x4", "kind": "DIFF_DELETE"}, {"current": null, "expected": "jr ra", "kind": "DIFF_DELETE"}, {"current": null, "expected": "addiu v0, zero, -0x1", "kind": "DIFF_DELETE"}], "order_only": false, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 16}
NON_MATCHING FALLBACK (Markdown):
- direct code match: 0.0%
- blocker classes: re-seeded wave-6
- canonical source: /mnt/wsl/Projects/RncDecomp/src/textbin/fun_002050a0.c
- assembly oracle: config/us/expected/asm/assembly/textbin/fun_002050a0/FUN_002050a0.s
*/

#include "types.h"

extern u8 D_001A00F0[];

s32 FUN_002050a0(s32 arg0) {
    register u8 *base __asm__("v0");
    register u8 *ptr __asm__("v1");
    register s32 count __asm__("a1") = 0;

    base = D_001A00F0;
    ptr = base + 0x28C;
    do {
        if (*(s32 *)(ptr - 0x14) != 0 && *(s32 *)ptr == arg0) {
            return count;
        }
        count += 1;
        ptr += 4;
    } while (count < 5);
    return -1;
}
