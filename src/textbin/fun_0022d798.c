/*
STATE: C_EXACT
SYMBOL: FUN_0022d798
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/*
 * STATE: C_EXACT
 * SYMBOL: FUN_0022D798
 * SCORE: code=100.0000 functions=100.0000 data=100.0000 complete_data=100.0000
 * COMPILER: SN ee-gcc2.95.2-v2.73a, -O2 -g2
 * DECISION: promoted
 * BLOCKER: staged and full-ELF gates passed; retail image identity retained
 */

#include "types.h"
struct M2c_temp_3_11 {
    u8 pad_0[0x74];
    u8 unk74;
    u8 pad_auto_75[3];
    u8 pad_78[0x10];
    s32 unk88;
    s32 unk8C;
};

extern u8 D_0013E550[];
void FUN_0022d798(s32 arg0) {
    u8 temp_5_12;
    struct M2c_temp_3_11 *temp_3_11;

    if (arg0 < 0) {
        goto block_6;
    }
    temp_3_11 = (arg0 * 0x70) + D_0013E550;
    temp_5_12 = temp_3_11->unk74;
    if (temp_5_12 != 7) {
        goto block_3;
    }
    temp_3_11->unk88 = 0;
    temp_3_11->unk8C = 0;
    temp_3_11->unk74 = 0U;
    return;
block_3:
    if (temp_5_12 == 0) {
        goto block_6;
    }
    if (temp_5_12 == 6) {
        goto block_6;
    }
    temp_3_11->unk74 = 4U;
block_6:
    return;
}
