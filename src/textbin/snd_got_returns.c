/*
STATE: C_EXACT
SYMBOL: FUN_0012de70
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"
extern s32 *D_0015EC80;
extern s32 D_0015EC84;
extern u8 D_0015EBC0[];
extern u8 D_00153C98[];
extern void FlushCache();
extern s32 SceSifCheckStatRpc();
extern s32 printf();
/* ROLE: snd_GotReturns: sample-safe return path; clears the pending-return
   flag once the SIF RPC slot and the current entry are both idle. Name
   recovered from config/us/recovered_names.json. */
s32 FUN_0012de70(void) {
    s32 *p;

    FlushCache(0);
    if (D_0015EC80 == 0) {
        return 1;
    }
    if (SceSifCheckStatRpc(D_0015EBC0) != 0) {
        return 0;
    }
    p = D_0015EC80;
    if (p[0] != 0xFFFFFFFF) {
        printf(D_00153C98);
        return 0;
    }
    if (p[D_0015EC84 + 1] != 0xFFFFFFFF) {
        printf(D_00153C98);
        return 0;
    }
    D_0015EC80 = 0;
    return 1;
}

extern s32 func_0012DE70(void) __attribute__((alias("FUN_0012de70")));
extern s32 snd_GotReturns(void) __attribute__((alias("FUN_0012de70")));
