/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00116168
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00116168/FUN_00116168.s", FUN_00116168);
#else
#include "types.h"

s32 FUN_00116168(s64 arg0) {
    s32 temp_4_16;
    s64 temp_2_6;

    temp_2_6 = (s64) (arg0 << 0x20) >> 0x20;
    temp_4_16 = 0x7FF00000 - (((arg0 >> 0x20) & 0x7FFFFFFF) | ((u32) (temp_2_6 | (0 - temp_2_6)) >> 0x1F));
    return 1 - ((u32) (temp_4_16 | (0 - temp_4_16)) >> 0x1F);
}
#endif /* NON_MATCHING */
