/*
STATE: C_EXACT
SYMBOL: FUN_fun_00233d90
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: SN ee-gcc2.95.2-v2.73a cc1 + SN Ps2EeAs (padless, padless-release 2026-09-12)
DECISION: promoted
BLOCKER: none
*/

/*
AUTO-DIAGNOSIS
symbol: FUN_00233d90
unit: assembly/textbin/fun_00233d90
code_percent: 85.0000
function_percent: 85.0000
data_percent: 100.0000
expected: {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "112", "object": "fun_00233d90.c.o", "text_size": "112"}
current: {"code_percent": 85.0, "data_percent": 100.0, "function_percent": 85.0, "function_size": "96", "object": "candidate.o", "text_size": "96"}
objdiff: {"code_percent": 85.0, "compile_elapsed_s": 0.5588034669999615, "current": {"code_percent": 85.0, "data_percent": 100.0, "function_percent": 85.0, "function_size": "96", "object": "candidate.o", "text_size": "96"}, "data_percent": 100.0, "diff": {"code_gap_percent": 15.0, "current_instruction_mismatch_count": 8, "data_gap_percent": 0.0, "function_gap_percent": 15.0, "instruction_mismatches": [{"current": null, "expected": "lui a1, 0x16", "kind": "DIFF_DELETE"}, {"current": "lw a1, %gp_rel(D_00160F18)(gp)", "expected": "lw a1, 0xf18(a1)", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "lui a1, 0x16", "kind": "DIFF_DELETE"}, {"current": "lw a1, %gp_rel(D_00160F1C)(gp)", "expected": "lw a1, 0xf1c(a1)", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "lui at, 0x16", "kind": "DIFF_DELETE"}, {"current": "sw zero, %gp_rel(D_00160F18)(gp)", "expected": "sw zero, 0xf18(at)", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "lui at, 0x16", "kind": "DIFF_DELETE"}, {"current": "sw zero, %gp_rel(D_00160F1C)(gp)", "expected": "sw zero, 0xf1c(at)", "kind": "DIFF_ARG_MISMATCH"}], "order_only": false, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 8}, "elapsed_s": 0.0030496360000142886, "exact": false, "exact_code_and_function": false, "expected": {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "112", "object": "fun_00233d90.c.o", "text_size": "112"}, "function_percent": 85.0, "raw_report": "objdiff-FUN_00233d90.json", "relocation_comparison": "none", "status": "ok"}
re-seeded from m2c on the mnemonic oracle (replaces a return-zero textbin stub)
diff: {"code_gap_percent": 15.0, "current_instruction_mismatch_count": 8, "data_gap_percent": 0.0, "function_gap_percent": 15.0, "instruction_mismatches": [{"current": null, "expected": "lui a1, 0x16", "kind": "DIFF_DELETE"}, {"current": "lw a1, %gp_rel(D_00160F18)(gp)", "expected": "lw a1, 0xf18(a1)", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "lui a1, 0x16", "kind": "DIFF_DELETE"}, {"current": "lw a1, %gp_rel(D_00160F1C)(gp)", "expected": "lw a1, 0xf1c(a1)", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "lui at, 0x16", "kind": "DIFF_DELETE"}, {"current": "sw zero, %gp_rel(D_00160F18)(gp)", "expected": "sw zero, 0xf18(at)", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "lui at, 0x16", "kind": "DIFF_DELETE"}, {"current": "sw zero, %gp_rel(D_00160F1C)(gp)", "expected": "sw zero, 0xf1c(at)", "kind": "DIFF_ARG_MISMATCH"}], "order_only": false, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 8}

AUTO-REFINEMENT:
- attempt: 1
- objdiff: {"code_percent": 85.0, "compile_elapsed_s": 0.5588034669999615, "current": {"code_percent": 85.0, "data_percent": 100.0, "function_percent": 85.0, "function_size": "96", "object": "candidate.o", "text_size": "96"}, "data_percent": 100.0, "diff": {"code_gap_percent": 15.0, "current_instruction_mismatch_count": 8, "data_gap_percent": 0.0, "function_gap_percent": 15.0, "instruction_mismatches": [{"current": null, "expected": "lui a1, 0x16", "kind": "DIFF_DELETE"}, {"current": "lw a1, %gp_rel(D_00160F18)(gp)", "expected": "lw a1, 0xf18(a1)", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "lui a1, 0x16", "kind": "DIFF_DELETE"}, {"current": "lw a1, %gp_rel(D_00160F1C)(gp)", "expected": "lw a1, 0xf1c(a1)", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "lui at, 0x16", "kind": "DIFF_DELETE"}, {"current": "sw zero, %gp_rel(D_00160F18)(gp)", "expected": "sw zero, 0xf18(at)", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "lui at, 0x16", "kind": "DIFF_DELETE"}, {"current": "sw zero, %gp_rel(D_00160F1C)(gp)", "expected": "sw zero, 0xf1c(at)", "kind": "DIFF_ARG_MISMATCH"}], "order_only": false, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 8}, "elapsed_s": 0.0030496360000142886, "exact": false, "exact_code_and_function": false, "expected": {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "112", "object": "fun_00233d90.c.o", "text_size": "112"}, "function_percent": 85.0, "raw_report": "objdiff-FUN_00233d90.json", "relocation_comparison": "none", "status": "ok"}
*/

#include "types.h"

#include "types.h"
extern s32 D_00160F18;
extern s32 D_00160F1C;
extern s32 RemoveDmacHandler();
extern s32 func_001190F8();
void FUN_00233d90(void) {
    if (*(volatile s32 *)0x1000E010 & 0x20000) {
        *(volatile s32 *)0x1000E010 = 0x20000;
    }
    RemoveDmacHandler(1, D_00160F18);
    RemoveDmacHandler(0xF, D_00160F1C);
    func_001190F8(1);
    D_00160F18 = 0;
    D_00160F1C = 0;
}

extern void func_00233D90(void) __attribute__((alias("FUN_00233d90")));
