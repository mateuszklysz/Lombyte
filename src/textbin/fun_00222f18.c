/*
STATE: C_EXACT
SYMBOL: FUN_00222f18
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x48];
    s32 unk48;
    s32 unk4C;
};

extern s32 FUN_00225ac0();
extern s32 FUN_00225c18();
s32 FUN_00222f18(struct M2c_arg0 *arg0) {
    FUN_00225ac0(1);
    arg0->unk48 = FUN_00225c18(0);
    arg0->unk4C = 0;
    return 0;
}
