/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f6060
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f6060/FUN_001f6060.s", FUN_001f6060);
#else
#include "types.h"
extern s32 func_001F52A0();
void FUN_001f6060(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 temp_16_48;
    s32 temp_18_65;
    s32 temp_19_33;
    s32 temp_19_57;
    s32 temp_20_31;
    s32 temp_20_58;
    s32 temp_23_41;
    s32 temp_2_35;
    s32 temp_2_49;
    s32 temp_30_40;

    func_001F52A0((arg4 & 0xFF000000) | 4);
    sp0 = arg0 + 1;
    temp_20_31 = arg0 - 5;
    sp4 = arg2 + 3;
    temp_19_33 = arg2 - 1;
    temp_2_35 = arg3 + 5;
    sp8 = temp_2_35;
    temp_30_40 = arg3 - 3;
    func_001F52A0(arg0 - 1, sp0, sp4, temp_2_35, arg4);
    temp_23_41 = arg1 + 3;
    temp_16_48 = arg0 + 3;
    func_001F52A0(arg0 - 3, temp_20_31, temp_19_33, temp_30_40, arg4);
    temp_2_49 = arg1 - 3;
    spC = temp_2_49;
    temp_19_57 = arg1 + 1;
    func_001F52A0(temp_20_31, temp_2_49, temp_19_33, arg2 + 1, arg4);
    temp_20_58 = arg2 - 3;
    temp_18_65 = arg3 + 1;
    func_001F52A0(temp_16_48, temp_19_57, temp_20_58, arg2 - 5, arg4);
    func_001F52A0(arg1 - 1, temp_19_57, temp_20_58, temp_30_40, arg4);
    func_001F52A0(temp_23_41, arg1 + 5, sp4, temp_18_65, arg4);
    func_001F52A0(temp_16_48, temp_23_41, arg3 - 1, temp_18_65, arg4);
    func_001F52A0(sp0, spC, arg3 + 3, sp8, arg4);
}
#endif /* NON_MATCHING */
