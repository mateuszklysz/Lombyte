/*
STATE: C_EXACT
SYMBOL: FUN_00215420
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
extern s32 FUN_0012ef28();
extern void FUN_00216950();
void FUN_00215420(void) {
    FUN_0012ef28(&FUN_00216950);
}

extern void func_00215420(void) __attribute__((alias("FUN_00215420")));
