/*
STATE: C_NON_MATCHING
SYMBOL: sceGsPutDrawEnv
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceGsPutDrawEnv; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma_ipu_gs/sce_gs_put_draw_env/sceGsPutDrawEnv.s", sceGsPutDrawEnv);
#else
#include "types.h"
extern u8 D_00153078[];
extern s32 scePrintf();
s32 sceGsPutDrawEnv(s64 *arg0) {
u8 *var_2_44;
    u32 var_2_15;
    u32 var_4_11;

    var_4_11 = 0;
    if (!(*(s32 *)0x1000A000 & 0x100)) {
        goto block_4;
    }
    var_2_15 = 0;
loop_2:
    var_4_11 += 1;
    if (var_2_15 > 0x01000000U) {
        goto block_6;
    }
    var_2_15 = var_4_11;
    if (*(volatile u32 *)0x1000A000 & 0x100) {
        goto loop_2;
    }
block_4:
    *(s32 *)0x1000A020 = ((s64) ((*arg0 & 0x7FFF) << 0x20) >> 0x20) + 1;
    if (((s32) arg0 & 0x70000000) != 0x70000000) {
        goto block_7;
    }
    var_2_44 = ((s32) arg0 & 0x0FFFFFFF) | 0x80000000;
    goto block_8;
block_6:
    scePrintf(D_00153078, 0x01000000, arg0);
    return -1;
block_7:
    var_2_44 = (s32) arg0 & 0x0FFFFFFF;
block_8:
    *(s32 *)0x1000A010 = var_2_44;
    *(volatile u32 *)0x1000A000 = 0x101;
    return 0;
}
#endif /* NON_MATCHING */
