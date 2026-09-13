/*
STATE: C_EXACT
SYMBOL: FUN_0023c5b8
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: sn-O2 (-O2 -g2 -gstabs)
DECISION: promoted
BLOCKER: none
*/

#include "types.h"

struct M2c_arg0 {
    u8 pad_0[0x40];
    s32 unk40;
};

extern s32 FUN_0023bbb0(s32 arg0);
extern s32 DeleteSema(s32 arg0);

s32 FUN_0023c5b8(struct M2c_arg0 *arg0) {
    volatile s32 *p1;
    volatile s32 *p2;
    volatile s32 *p3;
    FUN_0023bbb0(5);
    p1 = (volatile s32 *)0x1000B420;
    p2 = (volatile s32 *)0x1000B410;
    p3 = (volatile s32 *)0x1000B430;
    *p1 = 0;
    *p2 = 0;
    *p3 = 0;
    DeleteSema(arg0->unk40);
    return 1;
}

extern __typeof__(FUN_0023c5b8) func_0023C5B8 __attribute__((alias("FUN_0023c5b8")));
