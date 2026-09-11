/*
STATE: C_NON_MATCHING
SYMBOL: FontPrintCenter
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `FontPrintCenter` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f6af0/FUN_001f6af0.s", FUN_001f6af0);
#else
#include "types.h"
extern u8 D_001DF050[];
extern s32 func_001F44B8();
extern s32 func_001F6250();
extern s32 func_001F62B0();
s32 FUN_001f6af0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_16_23;

    temp_16_23 = arg0 - (func_001F6250(arg3, arg4) >> 1);
    func_001F62B0(temp_16_23, arg1, arg2, arg3, arg4, func_001F44B8(1), D_001DF050);
    return temp_16_23;
}
#endif /* NON_MATCHING */
