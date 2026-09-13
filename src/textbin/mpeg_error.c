/*
STATE: C_EXACT
SYMBOL: FUN_0023d080
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: ee-gcc2.9-991111-01-patched (-O2 -g2 -gstabs; R5900 quad saves + classic mult) + Ps2EeAs padless
DECISION: promoted via ASTRA full-ELF gate (2026-09-12)
BLOCKER: none
*/

/* FUN_0023d080 (mpeg_error) exact recovery: one DebugPrint of the record field and return 1; the patched profile (lq/sq saves) reproduces all 10 instructions. Caller-facing func_0023D080 alias required for the oracle link. */

#include "types.h"
struct M2c_arg1 {
    u8 pad_0[0x4];
    s32 unk4;
};

extern u8 D_00161220[];
extern s32 DebugPrint();
s32 FUN_0023d080(s32 arg0, struct M2c_arg1 *arg1) {
    DebugPrint(D_00161220, arg1->unk4);
    return 1;
}

extern s32 func_0023D080(s32 arg0, struct M2c_arg1 *arg1) __attribute__((alias("FUN_0023d080")));
extern __typeof__(FUN_0023d080) D_0023D080 __attribute__((alias("FUN_0023d080")));

/* Recovered original symbol name. */
extern __typeof__(FUN_0023d080) mpegError__FP7sceMpegP18sceMpegCbDataErrorPv __attribute__((alias("FUN_0023d080")));
