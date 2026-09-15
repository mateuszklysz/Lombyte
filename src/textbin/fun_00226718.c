/*
STATE: C_EXACT
SYMBOL: FUN_00226718
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: cc_sn (SN ee-gcc2.95.2-v2.73a) -O2 -g2 -gstabs
DECISION: promoted
*/

#include "types.h"
struct M2c_D_001D5BF0 {
    u8 pad_0[0xCB];
    u8 unkCB;
};

extern s16 D_001516D8[];
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern u32 D_001D608C[];
extern s32 FUN_002166e8();
s32 FUN_00226718(s32 arg0) {
    if (D_001516D8[0] != 0) {
        if (D_001D5BF0.unkCB != 0) {
            FUN_002166e8();
            D_001D5BF0.unkCB = 0U;
        }
    }
    D_001D608C[0] = 0;
    *(u32 *)0x160350 = 0;
    return 0;
}
