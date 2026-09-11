/*
STATE: C_EXACT
SYMBOL: __sread
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0xC];
    u16 unkC;
    s32 unkE;
    u8 pad_12[0x3E];
    s32 unk50;
    s32 unk54;
};

extern s64 func_00116108();
s64 __sread(struct M2c_arg0 *arg0, s32 arg1, s32 arg2) {
    register s32 temp_3_14 __asm__("v1");

    temp_3_14 = (s32)func_00116108(*(s32 *)((u8 *)arg0 + 0x54), *(s16 *)((u8 *)arg0 + 0xE), arg1, arg2);
    if (temp_3_14 >= 0) {
        goto block_2;
    }
    goto block_4;
block_2:
    *(s32 *)((u8 *)arg0 + 0x50) = *(s32 *)((u8 *)arg0 + 0x50) + temp_3_14;
    goto block_5;
block_4:
    arg0->unkC = (u16) (arg0->unkC & 0xEFFF);
block_5:
    return temp_3_14;
}
