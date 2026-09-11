/*
STATE: C_EXACT
SYMBOL: GetStateTableWord
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* ROLE: recovered function `readBufEndGet__FP7ReadBufi` starts here. */

#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x50004];
    s32 unk50004;
};

void GetStateTableWord(struct M2c_arg0 *arg0, s32 arg1) {
    register s32 temp_2_5 __asm__("v0");
    register s32 result __asm__("a2");

    temp_2_5 = arg0->unk50004;
    result = temp_2_5;
    if (arg1 < temp_2_5) {
        temp_2_5 = arg1;
    }
    result -= temp_2_5;
    arg0->unk50004 = result;
}
