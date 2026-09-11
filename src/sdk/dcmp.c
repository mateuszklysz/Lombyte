/*
STATE: C_EXACT
SYMBOL: Dcmp
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x10];
    s32 unk10;
};

struct M2c_arg1 {
    u8 pad_0[0x10];
    s32 unk10;
};

s32 Dcmp(struct M2c_arg0 *arg0, struct M2c_arg1 *arg1) {
    s32 temp_2_5;
    register s32 temp_3_3 __asm__("v1");
    register u8 *var_3_19;
    register u8 *var_6_20 __asm__("a2");
    u32 temp_2_23;
    u32 temp_4_24;
    register u8 *temp_7_16 __asm__("a3");
    register u8 *base1 __asm__("v0");

    temp_3_3 = arg1->unk10;
    temp_2_5 = arg0->unk10 - temp_3_3;
    temp_3_3 = temp_3_3 * 4;
    if (temp_2_5 == 0) {
        goto block_3;
    }
    return temp_2_5;
block_2:
    return (temp_2_23 < temp_4_24) ? -1 : 1;
block_3:
    temp_7_16 = (u8 *)arg0 + 0x14;
    base1 = (u8 *)arg1 + 0x14;
    var_3_19 = base1 + temp_3_3;
    var_6_20 = temp_7_16 + temp_3_3 - 4;
loop_4:
    var_3_19 -= 4;
    temp_2_23 = *(u32 *)var_6_20;
    temp_4_24 = *(u32 *)var_3_19;
    if (temp_2_23 == temp_4_24) {
        goto block_6;
    }
    goto block_2;
block_6:
    if ((u32) temp_7_16 < (u32) var_6_20) {
        var_6_20 -= 4;
        goto loop_4;
    }
    return 0;
}
