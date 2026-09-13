/*
STATE: C_EXACT
SYMBOL: FUN_00237e90
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: sn-O2 -O2 -g2 -gstabs
DECISION: promoted
BLOCKER: none
*/

#include "types.h"
struct M2c_D_001E63C0 {
    u8 pad_0[0x2C];
    s32 unk2C;
    u8 pad_30[0x14];
    s32 unk44;
};

extern struct M2c_D_001E63C0 D_001E63C0;
extern u8 D_001E8A70[];
extern s32 sprintf();
void FUN_00237e90(s32 arg0) {
    sprintf(D_001E63C0.unk2C, D_001E8A70, arg0);
    D_001E63C0.unk44 = 0;
}

extern void func_00237E90(s32 arg0) __attribute__((alias("FUN_00237e90")));
