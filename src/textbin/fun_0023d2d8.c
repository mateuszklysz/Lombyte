/*
STATE: C_EXACT
SYMBOL: FUN_0023d2d8
SCORE: code=100 functions=100 data=100 complete_data=100 (staged)
COMPILER: sn-O2 -O2 -g2 -gstabs
DECISION: promoted (pipeline-2026-09-10-4)
BLOCKER: none
*/
/*
AUTO-DIAGNOSIS
symbol: FUN_0023d2d8
unit: assembly/textbin/fun_0023d2d8
code_percent: 99.5200
function_percent: 99.5200
data_percent: 100.0000
expected: {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "100", "object": "fun_0023d2d8.c.o", "text_size": "100"}
current: {"code_percent": 99.52, "data_percent": 100.0, "function_percent": 99.52, "function_size": "100", "object": "candidate.o", "text_size": "100"}
diff: {"code_gap_percent": 0.48, "current_instruction_mismatch_count": 2, "data_gap_percent": 0.0, "function_gap_percent": 0.48, "instruction_mismatches": [{"current": "lw v0, 0xc(s0)", "expected": "lw a0, 0x8(s0)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "lw a0, 0x8(s0)", "expected": "lw v0, 0xc(s0)", "kind": "DIFF_ARG_MISMATCH"}], "order_only": true, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 2}
objdiff: {"code_percent": 99.52, "compile_elapsed_s": 0.9375830429999041, "current": {"code_percent": 99.52, "data_percent": 100.0, "function_percent": 99.52, "function_size": "100", "object": "candidate.o", "text_size": "100"}, "data_percent": 100.0, "diff": {"code_gap_percent": 0.48, "current_instruction_mismatch_count": 2, "data_gap_percent": 0.0, "function_gap_percent": 0.48, "instruction_mismatches": [{"current": "lw v0, 0xc(s0)", "expected": "lw a0, 0x8(s0)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "lw a0, 0x8(s0)", "expected": "lw v0, 0xc(s0)", "kind": "DIFF_ARG_MISMATCH"}], "order_only": true, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 2}, "elapsed_s": 0.0030743730003450764, "exact": false, "exact_code_and_function": false, "expected": {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "100", "object": "fun_0023d2d8.c.o", "text_size": "100"}, "function_percent": 99.52, "raw_report": "objdiff-FUN_0023d2d8.json", "relocation_comparison": "none", "status": "ok"}
NON_MATCHING FALLBACK (Markdown):
- direct code match: 87.3200% (threshold > 0.0%)
- blocker classes: register-allocation, stack-alignment, delay-slot-scheduling
- structural blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
- canonical source: /mnt/d/rncdecomp/src/assembly/textbin/fun_0023d2d8.c
- assembly oracle: config/us/expected/asm/assembly/textbin/fun_0023d2d8/FUN_0023d2d8.s
*/

#include "rnc/assembly_textbin_fun_0023d2d8_types.h"
#include "types.h"

extern s32 func_0023D2C8();

s32 FUN_0023d2d8(s32 arg0) {
    volatile struct M2c_arg0 *base = (volatile struct M2c_arg0 *)arg0;
    s32 a;
    s32 b;
    s32 c;
    s32 t;

    if (func_0023D2C8() != 0) {
        return 0;
    }
    a = base->unk8;
    b = base->unkC;
    c = base->unk10;
    t = c;
    return base->unk4 + ((a - b + t) % t) * 0x138C0;
}
