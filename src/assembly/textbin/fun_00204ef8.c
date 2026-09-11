/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00204ef8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00204ef8/FUN_00204ef8.s", FUN_00204ef8);
#else
#include "types.h"
extern u8 D_001A0368[];
s32 FUN_00204ef8(s32 arg0) {
    s32 temp_5_14;
    s32 temp_6_15;
    s32 var_5_11;
    s32 var_7_6;

    var_7_6 = 0;
    var_5_11 = 4 - 0;
loop_1:
    temp_5_14 = (arg0 == 0) ? var_7_6 : var_5_11;
    temp_6_15 = temp_5_14 * 4;
    if (*(temp_6_15 + D_001A0368) != 0) {
        var_7_6 += 1;
        if (*(temp_6_15 + (D_001A0368 + 0x14)) == -1) {
            return temp_5_14;
        }
        goto block_5;
    }
    var_7_6 += 1;
block_5:
    var_5_11 = 4 - var_7_6;
    if (var_7_6 >= 5) {
        return -1;
    }
    goto loop_1;
}
#endif /* NON_MATCHING */
