/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00205220
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00205220/FUN_00205220.s", FUN_00205220);
#else
#include "types.h"
extern u32 D_001601E0[];
s32 FUN_00205220(s32 arg0) {
    s32 *var_3_6;
    s32 *var_5_10;
    s32 var_2_11;
    s32 var_6_9;

    var_3_6 = D_001601E0[0];
    var_6_9 = 0;
    if (*var_3_6 == 0) {
        goto block_8;
    }
    var_5_10 = var_3_6;
    var_2_11 = *var_5_10;
loop_2:
    var_3_6 += 4;
    if (var_2_11 != arg0) {
        goto block_4;
    }
    return var_6_9;
block_4:
    var_5_10 += 4;
    var_6_9 += 1;
    if (*var_3_6 == 0) {
        goto block_8;
    }
    if (var_6_9 >= 0x14) {
        goto block_7;
    }
    var_2_11 = *var_5_10;
    goto loop_2;
block_7:
block_8:
    return -1;
}
#endif /* NON_MATCHING */
