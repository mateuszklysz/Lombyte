/*
STATE: C_EXACT
SYMBOL: __sseek
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0xC];
    u16 unkC;
    s16 unkE;
    u8 pad_12[0x3E];
    s32 unk50;
    s32 unk54;
};

extern s32 func_00114518();
s64 __sseek(struct M2c_arg0 *arg0, s32 arg1, s32 arg2) {
    s64 temp_2_11;
    register u16 var_2_18 __asm__("v0");
    register s32 temp_2_19 __asm__("v1");

    temp_2_11 = func_00114518(arg0->unk54, arg0->unkE, arg1, arg2);
    if (temp_2_11 != -1)
        goto nonminus;
    var_2_18 = arg0->unkC;
    var_2_18 &= 0xEFFF;
    goto done;
nonminus:
        temp_2_19 = (s32) ((s64) (temp_2_11 << 0x20) >> 0x20);
        arg0->unk50 = temp_2_19;
        var_2_18 = arg0->unkC;
        var_2_18 |= 0x1000;
done:
    arg0->unkC = var_2_18;
    return temp_2_11;
}
