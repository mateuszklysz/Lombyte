/*
STATE: C_EXACT
SYMBOL: _decodeOrSkip
SCORE: code=100 functions=100 data=100 complete_data=100 (staged)
COMPILER: himuro-O2 -O2 -g2 -gstabs
DECISION: promoted (pipeline-2026-09-10-4)
BLOCKER: none
*/

/*
AUTO-DIAGNOSIS
symbol: _decodeOrSkip
unit: assembly/sdk/library/_decodeOrSkip
code_percent: 48.5294
function_percent: 48.5294
data_percent: 100.0000
expected: {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "68", "object": "_decodeOrSkip.c.o", "text_size": "68"}
current: {"code_percent": 48.52941, "data_percent": 100.0, "function_percent": 48.52941, "function_size": "40", "object": "candidate.o", "text_size": "40"}
diff: {"code_gap_percent": 51.47059, "current_instruction_mismatch_count": 16, "data_gap_percent": 0.0, "function_gap_percent": 51.47059, "instruction_mismatches": [{"current": null, "expected": "addiu sp, sp, -0x10", "kind": "DIFF_DELETE"}, {"current": "daddu a1, a0, zero", "expected": "daddu a3, a0, zero", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "sd ra, 0x0(sp)", "kind": "DIFF_DELETE"}, {"current": "addiu v0, zero, 0x3", "expected": "addiu v1, zero, 0x3", "kind": "DIFF_ARG_MISMATCH"}, {"current": "lw v1, 0x40(a1)", "expected": "lw a0, 0x40(a3)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "lw a0, 0x174(v1)", "expected": "lw v0, 0x174(a0)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "beq a0, v0, 0x20", "expected": "beq v0, v1, 0x30", "kind": "DIFF_ARG_MISMATCH"}, {"current": "j _decodeOrSkipField", "expected": "jal _decodeOrSkipField", "kind": "DIFF_REPLACE"}, {"current": "daddu a0, a1, zero", "expected": "daddu a0, a3, zero", "kind": "DIFF_ARG_MISMATCH"}, {"current": "j _decodeOrSkipFrame", "expected": "b 0x3c", "kind": "DIFF_REPLACE"}, {"current": null, "expected": "ld ra, 0x0(sp)", "kind": "DIFF_DELETE"}, {"current": null, "expected": "jal _decodeOrSkipFrame", "kind": "DIFF_DELETE"}, {"current": "daddu a0, a1, zero", "expected": "daddu a0, a3, zero", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "ld ra, 0x0(sp)", "kind": "DIFF_DELETE"}, {"current": null, "expected": "jr ra", "kind": "DIFF_DELETE"}, {"current": null, "expected": "addiu sp, sp, 0x10", "kind": "DIFF_DELETE"}], "order_only": false, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 16}
objdiff: {"code_percent": 48.52941, "compile_elapsed_s": 0.005143857000803109, "current": {"code_percent": 48.52941, "data_percent": 100.0, "function_percent": 48.52941, "function_size": "40", "object": "candidate.o", "text_size": "40"}, "data_percent": 100.0, "diff": {"code_gap_percent": 51.47059, "current_instruction_mismatch_count": 16, "data_gap_percent": 0.0, "function_gap_percent": 51.47059, "instruction_mismatches": [{"current": null, "expected": "addiu sp, sp, -0x10", "kind": "DIFF_DELETE"}, {"current": "daddu a1, a0, zero", "expected": "daddu a3, a0, zero", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "sd ra, 0x0(sp)", "kind": "DIFF_DELETE"}, {"current": "addiu v0, zero, 0x3", "expected": "addiu v1, zero, 0x3", "kind": "DIFF_ARG_MISMATCH"}, {"current": "lw v1, 0x40(a1)", "expected": "lw a0, 0x40(a3)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "lw a0, 0x174(v1)", "expected": "lw v0, 0x174(a0)", "kind": "DIFF_ARG_MISMATCH"}, {"current": "beq a0, v0, 0x20", "expected": "beq v0, v1, 0x30", "kind": "DIFF_ARG_MISMATCH"}, {"current": "j _decodeOrSkipField", "expected": "jal _decodeOrSkipField", "kind": "DIFF_REPLACE"}, {"current": "daddu a0, a1, zero", "expected": "daddu a0, a3, zero", "kind": "DIFF_ARG_MISMATCH"}, {"current": "j _decodeOrSkipFrame", "expected": "b 0x3c", "kind": "DIFF_REPLACE"}, {"current": null, "expected": "ld ra, 0x0(sp)", "kind": "DIFF_DELETE"}, {"current": null, "expected": "jal _decodeOrSkipFrame", "kind": "DIFF_DELETE"}, {"current": "daddu a0, a1, zero", "expected": "daddu a0, a3, zero", "kind": "DIFF_ARG_MISMATCH"}, {"current": null, "expected": "ld ra, 0x0(sp)", "kind": "DIFF_DELETE"}, {"current": null, "expected": "jr ra", "kind": "DIFF_DELETE"}, {"current": null, "expected": "addiu sp, sp, 0x10", "kind": "DIFF_DELETE"}], "order_only": false, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 16}, "elapsed_s": 0.002728317000219249, "exact": false, "exact_code_and_function": false, "expected": {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "68", "object": "_decodeOrSkip.c.o", "text_size": "68"}, "function_percent": 48.52941, "raw_report": "objdiff-_decodeOrSkip.json", "relocation_comparison": "name_address", "status": "ok"}
NON_MATCHING FALLBACK (Markdown):
- direct code match: 48.5294% (threshold > 0.0%)
- blocker classes: register-allocation, stack-alignment, delay-slot-scheduling
- structural blocker: Breadth C export: exact code generation is not yet proven; remaining differences are retained as register-allocation, stack-alignment, or delay-slot scheduling blockers while the assembly oracle remains available for exact builds.
- canonical source: /mnt/d/rncdecomp/src/assembly/sdk/library/_decodeOrSkip.c
- assembly oracle: config/us/expected/asm/assembly/sdk/library/_decodeOrSkip/_decodeOrSkip.s
*/

#include "types.h"

extern s32 _decodeOrSkipFrame();
extern s32 _decodeOrSkipField();

s32 _decodeOrSkip(s32 arg0) {
    register s32 arg __asm__("a3") = arg0;
    register s32 *p __asm__("a0") = *(s32 **)(arg + 0x40);
    s32 result;

    if (p[0x5D] != 3) {
        result = _decodeOrSkipField(arg);
    } else {
        result = _decodeOrSkipFrame(arg);
    }
    return result;
}
