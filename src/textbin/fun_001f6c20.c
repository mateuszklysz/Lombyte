/*
STATE: C_EXACT
SYMBOL: FUN_001f6c20
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: sn-O2
DECISION: promoted
BLOCKER: none
*/

/* ROLE: recovered function `FontPrintCenterLarge` starts here; this unit covers only its beginning. */


#include "types.h"
extern u8 D_001DF790[];
extern s32 func_001F44B8();
extern s32 func_001F6290();
extern void func_001F62B0();
s32 FUN_001f6c20(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_16_21;

    temp_16_21 = arg0 - (func_001F6290(arg3, arg4) >> 1);
    func_001F62B0(temp_16_21, arg1, arg2, arg3, arg4, func_001F44B8(3), D_001DF790);
    return temp_16_21;
}

extern __typeof__(FUN_001f6c20) func_001F6C20 __attribute__((alias("FUN_001f6c20")));
