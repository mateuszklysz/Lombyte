/*
STATE: C_NON_MATCHING
SYMBOL: sceGsExecLoadImage
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceGsExecLoadImage; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma_ipu_gs/sce_gs_exec_load_image/sceGsExecLoadImage.s", sceGsExecLoadImage);
#else
#include "types.h"
extern u8 D_001531D0[];
extern s32 scePrintf();
s32 sceGsExecLoadImage(s32 arg0, s32 arg1) {
    s32 temp_8_8;
    s32 var_2_40;
    s32 var_2_85;
    s32 var_5_0;
    u32 var_2_16;
    u32 var_2_58;
    u32 var_6_12;

    var_5_0 = arg1;
    temp_8_8 = var_5_0;
    var_6_12 = 0;
    if (!(*(s32 *)0x1000A000 & 0x100)) {
        goto block_4;
    }
    var_2_16 = 0;
loop_2:
    var_6_12 += 1;
    if (var_2_16 > 0x01000000U) {
        goto block_13;
    }
    var_2_16 = var_6_12;
    if (*(volatile u32 *)0x1000A000 & 0x100) {
        goto loop_2;
    }
block_4:
    var_5_0 = 6;
    *(s32 *)0x1000A020 = 6;
    if ((arg0 & 0x70000000) != 0x70000000) {
        goto block_6;
    }
    var_2_40 = (arg0 & 0x0FFFFFFF) | 0x80000000;
    goto block_7;
block_6:
    var_2_40 = arg0 & 0x0FFFFFFF;
block_7:
    *(s32 *)0x1000A010 = var_2_40;
    *(volatile u32 *)0x1000A000 = 0x101;
    if (!(*(volatile u32 *)0x1000A000 & 0x100)) {
        goto block_11;
    }
    var_2_58 = var_6_12;
loop_9:
    var_6_12 += 1;
    if (var_2_58 > 0x01000000U) {
        goto block_13;
    }
    var_2_58 = var_6_12;
    if (*(volatile u32 *)0x1000A000 & 0x100) {
        goto loop_9;
    }
block_11:
    *(volatile u32 *)0x1000A020 = (s32) ((s64) ((*(s32 *)((u8 *)arg0 + 0x50) & 0x7FFF) << 0x20) >> 0x20);
    if ((temp_8_8 & 0x70000000) != 0x70000000) {
        goto block_14;
    }
    var_2_85 = (temp_8_8 & 0x0FFFFFFF) | 0x80000000;
    goto block_15;
block_13:
    scePrintf(D_001531D0, var_5_0, var_6_12, arg0, temp_8_8);
    return -1;
block_14:
    var_2_85 = temp_8_8 & 0x0FFFFFFF;
block_15:
    *(volatile u32 *)0x1000A010 = var_2_85;
    *(volatile u32 *)0x1000A000 = 0x101;
    return 0;
}
#endif /* NON_MATCHING */
