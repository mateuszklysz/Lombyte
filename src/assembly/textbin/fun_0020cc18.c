/*
STATE: C_NON_MATCHING
SYMBOL: FUN_0020cc18
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0020cc18/FUN_0020cc18.s", FUN_0020cc18);
#else
#include "types.h"
extern u8 D_001B2BC0[];
s32 FUN_0020cc18(s32 arg0) {
    s32 *var_5_7;
    s32 temp_2_10;
    s32 var_3_6;

    var_3_6 = 0;
    var_5_7 = D_001B2BC0;
loop_1:
    temp_2_10 = *var_5_7;
    if (temp_2_10 == 0) {
        goto block_5;
    }
    if (temp_2_10 == arg0) {
        goto block_4;
    }
    var_3_6 += 1;
    goto block_6;
block_4:
block_5:
    *var_5_7 = arg0;
    return var_3_6;
block_6:
    var_5_7 += 4;
    if (var_3_6 < 0x10) {
        goto loop_1;
    }
    return -1;
}
#endif /* NON_MATCHING */
