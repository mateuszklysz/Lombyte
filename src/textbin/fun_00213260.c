/*
STATE: C_EXACT
SYMBOL: FUN_00213260
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
extern s32 FUN_001160d8();
s32 FUN_00213260(s32 arg0) {
    return (s32) ((FUN_001160d8() >> 0x10) & 0x7FFF) % arg0;
}

extern s32 func_00213260(s32 arg0) __attribute__((alias("FUN_00213260")));
