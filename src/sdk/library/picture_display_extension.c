/* STATE: C_EXACT
 * SYMBOL: _pictureDisplayExtension
 * SCORE: code=100 functions=100 data=100 complete_data=100
 * COMPILER: himuro-O2 (-O2 -g2 -gstabs)
 * DECISION: promoted via pipeline-2026-09-11-6 transactional staged + full-ELF gate
 * BLOCKER: none
 */
/*
AUTO-DIAGNOSIS
symbol: _pictureDisplayExtension
unit: assembly/sdk/library/picture_display_extension
code_percent: 89.0984
function_percent: 89.0984
data_percent: 100.0000
expected: {"code_percent": 100.0, "data_percent": 100.0, "function_percent": 100.0, "function_size": "244", "object": "picture_display_extension.c.o", "text_size": "244"}
current: {"code_percent": 89.09836, "data_percent": 100.0, "function_percent": 89.09836, "function_size": "244", "object": "candidate.o", "text_size": "244"}
diff: {"code_gap_percent": 10.90164, "current_instruction_mismatch_count": 8, "data_gap_percent": 0.0, "function_gap_percent": 10.90164, "instruction_mismatches": [{"current": "beqz v0, 0x68", "expected": "beqz v0, 0x58", "kind": "DIFF_ARG_MISMATCH"}, {"current": "bnel v1, v0, 0x6c", "expected": "beql v1, v0, 0x60", "kind": "DIFF_REPLACE"}, {"current": null, "expected": "lw v0, 0x184(s1)", "kind": "DIFF_DELETE"}, {"current": null, "expected": "b 0x68", "kind": "DIFF_DELETE"}, {"current": "lw v0, 0x184(s1)", "expected": null, "kind": "DIFF_INSERT"}, {"current": "b 0x6c", "expected": null, "kind": "DIFF_INSERT"}, {"current": "addiu s3, zero, 0x1", "expected": null, "kind": "DIFF_INSERT"}, {"current": null, "expected": "nop ", "kind": "DIFF_DELETE"}], "order_only": false, "row_alignment": "independently filtered streams, not aligned instruction pairs", "scope": "selected-symbol; inspect raw report for siblings and data", "target_instruction_mismatch_count": 8}
*/

/* _pictureDisplayExtension p5: MPEG2 picture display extension offsets. */
#include "types.h"

typedef struct PdeContext {
    u8 pad_0[0x124];
    s32 unk124;
    s32 unk128;
    u8 pad_12C[0x8];
    s32 unk134;
    s32 unk138;
    s32 unk13C;
    s32 unk140;
    u8 pad_144[0x30];
    s32 unk174;
    s32 unk178;
    u8 pad_17C[0x8];
    s32 unk184;
    u8 pad_188[0x4];
    s32 arr1[3];
    s32 arr2[3];
} PdeContext;

extern s32 _nextBit();

void _pictureDisplayExtension(PdeContext *ctx) {
    s32 num;
    s32 i;

    if (ctx->unk13C != 0) {
        if (ctx->unk184 == 0)
            num = 1;
        else
            num = ctx->unk178 != 0 ? 3 : 2;
    } else {
        if (ctx->unk174 != 3)
            num = 1;
        else
            num = ctx->unk184 != 0 ? 3 : 2;
    }

    for (i = 0; i < num; i++) {
        ctx->arr1[i] = _nextBit(ctx, 0x10);
        _nextBit(ctx, 1);
        ctx->arr2[i] = _nextBit(ctx, 0x10);
        _nextBit(ctx, 1);
    }
}
