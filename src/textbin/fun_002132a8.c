/*
STATE: C_EXACT
SYMBOL: FUN_002132a8
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: SN ee-gcc2.95.2-v2.73a cc1 + Sony Ps2EeAs (padless, ASTRA 2026-09-12)
DECISION: promoted
BLOCKER: none
*/

#include "types.h"
extern s32 rand();
f32 FUN_002132a8(s32 arg0, f32 fparg0, f32 fparg1) {
    return fparg0 + ((f32) ((rand() >> 0x10) & 0x7FFF) * (fparg1 - fparg0) * 0.000030517578f);
}

extern f32 func_002132A8(s32, f32, f32) __attribute__((alias("FUN_002132a8")));
