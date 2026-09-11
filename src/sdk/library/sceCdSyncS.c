/*
STATE: C_EXACT
SYMBOL: sceCdSyncS
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
extern s32 D_001312D0[];
extern u8 D_00132D08[];
extern u8 D_00152F00[];
extern s32 SceSifCheckStatRpc();
extern s32 sceCdDelayThread();
extern s32 scePrintf();
s32 sceCdSyncS(s32 arg0) {
    register u32 stat_base __asm__("s0");
    if (arg0 != 0) {
        goto block_7;
    }
    if (D_001312D0[0] <= 0) {
        goto block_3;
    }
    scePrintf(D_00152F00);
block_3:
    stat_base = (u32)D_00132D08;
    goto loop_5;
block_4:
    sceCdDelayThread(0x3C);
loop_5:
    if (SceSifCheckStatRpc(D_00132D08) != 0) {
        goto block_4;
    }
    return 0;
block_7:
    return SceSifCheckStatRpc(D_00132D08);
}
