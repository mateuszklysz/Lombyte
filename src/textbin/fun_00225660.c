/*
STATE: C_EXACT
SYMBOL: FUN_fun_00225660
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: SN ee-gcc2.95.2-v2.73a cc1 + SN Ps2EeAs (padless, padless-release 2026-09-12)
DECISION: promoted
BLOCKER: none
*/

/*
AUTO-DIAGNOSIS
symbol: FUN_00225660
unit: assembly/textbin/fun_00225660
code_percent: 96.9697
function_percent: 96.9697
data_percent: 100.0000
expected: {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "132", "object": "/mnt/d/RncDecomp/build/workspace/rnc-refval/config/us/expected/obj/assembly/textbin/fun_00225660.c.o", "text_size": "132"}
current: {"code_percent": 96.969696, "data_percent": 100.0, "function_percent": 96.969696, "function_size": "128", "object": "/mnt/d/RncDecomp/build/workspace/rnc-refval/campaigns/pipeline-2026-09-07-1/refinement/FUN_00225660/attempt-1/candidate.o", "text_size": "128"}
objdiff: {"code_percent": 96.969696, "compile_elapsed_s": 0.09480343899485888, "current": {"code_percent": 96.969696, "data_percent": 100.0, "function_percent": 96.969696, "function_size": "128", "object": "/mnt/d/RncDecomp/build/workspace/rnc-refval/campaigns/pipeline-2026-09-07-1/refinement/FUN_00225660/attempt-1/candidate.o", "text_size": "128"}, "data_percent": 100.0, "diff": {"code_gap_percent": 3.030304, "current_instruction_mismatch_count": 1, "data_gap_percent": 0.0, "function_gap_percent": 3.030304, "instruction_mismatches": [{"current": null, "expected": "nop ", "kind": "DIFF_DELETE"}], "order_only": false, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 1}, "elapsed_s": 0.0700610459971358, "exact": false, "exact_code_and_function": false, "expected": {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "132", "object": "/mnt/d/RncDecomp/build/workspace/rnc-refval/config/us/expected/obj/assembly/textbin/fun_00225660.c.o", "text_size": "132"}, "function_percent": 96.969696, "raw_report": "/mnt/d/RncDecomp/build/workspace/rnc-refval/campaigns/pipeline-2026-09-07-1/refinement/FUN_00225660/attempt-1/objdiff-FUN_00225660.json", "relocation_comparison": "none", "status": "ok"}
re-seeded from m2c on the mnemonic oracle (replaces a return-zero textbin stub)
diff: {"code_gap_percent": 3.030304, "current_instruction_mismatch_count": 1, "data_gap_percent": 0.0, "function_gap_percent": 3.030304, "instruction_mismatches": [{"current": null, "expected": "nop ", "kind": "DIFF_DELETE"}], "order_only": false, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 1}

AUTO-REFINEMENT:
- attempt: 1
- objdiff: {"code_percent": 96.969696, "compile_elapsed_s": 0.09480343899485888, "current": {"code_percent": 96.969696, "data_percent": 100.0, "function_percent": 96.969696, "function_size": "128", "object": "/mnt/d/RncDecomp/build/workspace/rnc-refval/campaigns/pipeline-2026-09-07-1/refinement/FUN_00225660/attempt-1/candidate.o", "text_size": "128"}, "data_percent": 100.0, "diff": {"code_gap_percent": 3.030304, "current_instruction_mismatch_count": 1, "data_gap_percent": 0.0, "function_gap_percent": 3.030304, "instruction_mismatches": [{"current": null, "expected": "nop ", "kind": "DIFF_DELETE"}], "order_only": false, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 1}, "elapsed_s": 0.0700610459971358, "exact": false, "exact_code_and_function": false, "expected": {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "132", "object": "/mnt/d/RncDecomp/build/workspace/rnc-refval/config/us/expected/obj/assembly/textbin/fun_00225660.c.o", "text_size": "132"}, "function_percent": 96.969696, "raw_report": "/mnt/d/RncDecomp/build/workspace/rnc-refval/campaigns/pipeline-2026-09-07-1/refinement/FUN_00225660/attempt-1/objdiff-FUN_00225660.json", "relocation_comparison": "none", "status": "ok"}
*/

#include "types.h"
struct M2c_D_001516D0 {
    u8 pad_0[0x5A];
    u16 unk5A;
};

struct M2c_arg0 {
    u8 pad_0[0x3C];
    s32 unk3C;
};

extern struct M2c_D_001516D0 D_001516D0;
extern s32 FUN_00225530();
extern s32 func_00225CD8();
s32 FUN_00225660(struct M2c_arg0 *arg0) {
    s32 *var_16_10;
    s32 var_17_8;

    var_17_8 = 0x17;
    var_16_10 = ((u8 *)arg0 + (0x44));
    do {
        var_17_8 -= 1;
        *var_16_10 = FUN_00225530(*var_16_10);
        var_16_10 += 1;
    } while (var_17_8 >= 0);
    arg0->unk3C = func_00225CD8(arg0->unk3C);
    if ((u32) (D_001516D0.unk5A - 6) >= 2U) {
        D_001516D0.unk5A = 5U;
    }
    return 0;
}
