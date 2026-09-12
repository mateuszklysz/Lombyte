/*
STATE: C_NON_MATCHING
SYMBOL: sceIpuSync
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library leaf sceIpuSync; target words retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/sce_ipu_sync/sceIpuSync.s", sceIpuSync);
#else
#include "types.h"

u32 sceIpuSync(s32 arg0) {
    u32 var_3_23;

    switch (arg0) {                                 /* irregular */
    case 0:
        do {

        } while ((s32) *(volatile u32 *)0x10002010 < 0);
        var_3_23 = 0;
block_7:
        return var_3_23;
    case 1:
        var_3_23 = (u32) *(u32 *)0x10002010 >> 0x1F;
        goto block_7;
    default:
        return 0U;
    }
}
#endif /* NON_MATCHING */
