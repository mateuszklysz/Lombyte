/*
STATE: C_EXACT
SYMBOL: FUN_00222f58
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x48];
    s32 unk48;
};

extern s32 FUN_00225cd8();
s32 FUN_00222f58(struct M2c_arg0 *arg0) {
    arg0->unk48 = FUN_00225cd8(arg0->unk48);
    return 0;
}
