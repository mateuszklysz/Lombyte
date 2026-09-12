/*
STATE: C_NON_MATCHING
SYMBOL: sceCdSync
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceCdSync; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/scecdsync/sceCdSync.s", sceCdSync);
#else
#include "types.h"
extern u32 D_001312D0[];
extern u32 D_001312F0[];
extern u8 D_00132490[];
extern u8 D_00152EF0[];
extern s32 SceSifCheckStatRpc();
extern s32 sceCdDelayThread();
extern s32 scePrintf();
s32 sceCdSync(s32 arg0) {
    s32 var_2_35;

    if (arg0 != 0) {
        goto block_8;
    }
    if (D_001312D0[0] <= 0) {
        goto block_3;
    }
    scePrintf(D_00152EF0);
block_3:
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
    var_2_35 = 1;
    if (D_001312F0[0] != 0) {
        goto block_11;
    }
    var_2_35 = 1;
    if (SceSifCheckStatRpc(D_00132490) != 0) {
        goto block_11;
    }
    var_2_35 = 0;
block_11:
    return var_2_35;
}
#endif /* NON_MATCHING */
