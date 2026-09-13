/*
STATE: C_EXACT
SYMBOL: sceCdSync
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2 -O2 -g2 -gstabs
DECISION: retained
BLOCKER: none
*/

#include "types.h"
extern s32 D_001312D0[];
extern u32 D_001312F0[];
extern u8 D_00132490[];
extern u8 D_00152EF0[];
extern s32 SceSifCheckStatRpc();
extern s32 sceCdDelayThread();
extern s32 scePrintf();
s32 sceCdSync(s32 arg0) {
    register u32 state_base __asm__("s1");
    register u32 stat_base __asm__("s0");
    s32 result;

    if (arg0 != 0) {
        goto block_8;
    }
    if (D_001312D0[0] <= 0) {
        goto block_3;
    }
    scePrintf(D_00152EF0);
block_3:
    state_base = (u32)D_001312F0;
    stat_base = (u32)D_00132490;
    goto loop_5;
block_4:
    sceCdDelayThread(0x3C);
loop_5:
    if (D_001312F0[0] != 0) {
        goto block_4;
    }
    if (SceSifCheckStatRpc(D_00132490) != 0) {
        goto block_4;
    }
    return 0;
block_8:
    if (D_001312F0[0] != 0 || SceSifCheckStatRpc(D_00132490) != 0) { return 1; }
    return 0;
}
