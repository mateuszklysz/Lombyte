/*
STATE: C_EXACT
SYMBOL: FUN_00225a68
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2). */
#include "types.h"

extern s32 func_0020D330();
s32 FUN_00225a68(s32 arg0) {
    s32 *var_16_10;
    s32 temp_4_12;
    s32 var_17_8;
    var_17_8 = 0x17;
    var_16_10 = (s32 *)(arg0 + 0x44);
    do {
        temp_4_12 = *var_16_10;
        if (temp_4_12 != 0) {
            func_0020D330(temp_4_12, 1);
        }
        var_17_8 -= 1;
        var_16_10 += 1;
    } while (var_17_8 >= 0);
    return 4;
}
