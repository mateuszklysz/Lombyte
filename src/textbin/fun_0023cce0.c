/*
STATE: C_EXACT
SYMBOL: videoDecInputCount__FP8VideoDec
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `videoDecInputCount__FP8VideoDec` starts here; this unit covers only its beginning. */

#include "types.h"
extern s32 FUN_0023c610();
void FUN_0023cce0(s32 arg0) {
    FUN_0023c610(arg0 + 0x48);
}

extern void func_0023CCE0(s32 arg0) __attribute__((alias("FUN_0023cce0")));
