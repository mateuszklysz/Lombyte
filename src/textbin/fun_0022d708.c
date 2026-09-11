/*
STATE: C_EXACT
SYMBOL: FUN_0022d708
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
struct M2c_D_0013E550 {
    u8 pad_0[0x44];
    s32 unk44;
};

extern struct M2c_D_0013E550 D_0013E550;
extern s32 FUN_0012df20();
extern s32 FUN_0012e1a8();
extern s32 FUN_0012ed30();
extern s32 FUN_0012ee08();
extern s32 sceCdSync();
s32 FUN_0022d708(s32 arg0) {
    s32 var_18_7;

    var_18_7 = 0;
    if (D_0013E550.unk44 == 0) {
        D_0013E550.unk44 = 1;
        sceCdSync(0);
        var_18_7 = FUN_0012df20(arg0, 0);
        FUN_0012ed30(1);
        FUN_0012ee08(0);
        FUN_0012e1a8();
        D_0013E550.unk44 = 0;
    }
    return var_18_7;
}

extern s32 func_0022D708(s32 arg0) __attribute__((alias("FUN_0022d708")));
