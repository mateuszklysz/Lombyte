/*
STATE: C_EXACT
SYMBOL: FUN_0021d2c8
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: SN 2.73a -O2 -g2 -DMATCHING_DECOMP -DBUILD_US_VERSION
DECISION: promoted
BLOCKER: none
*/

#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x38];
    s32 unk38;
    u8 pad_3C[0x14];
    s32 unk50;
    s32 unk54;
};

extern s16 D_001516D8[];
extern s32 D_0015F6A0[];
extern s32 D_001996FC[];
extern s32 FUN_002166e8();
extern s32 func_00225AC0();
s32 FUN_0021d2c8(struct M2c_arg0 *arg0) {
    register s32 temp_5_19 __asm__("a1");
    register s32 v38 __asm__("v1");

    if ((D_001516D8[0] != 0) && (arg0->unk50 == 1)) {
        FUN_002166e8();
    }
    func_00225AC0(1);
    temp_5_19 = arg0->unk54;
    if (temp_5_19 != 0) {
        v38 = arg0->unk38;
        *(s32 *)0x15F6A0 = temp_5_19;
        D_001996FC[0] = v38;
    }
    return 0;
}
