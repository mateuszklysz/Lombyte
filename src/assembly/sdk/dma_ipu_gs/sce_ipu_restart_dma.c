/*
STATE: C_NON_MATCHING
SYMBOL: sceIpuRestartDMA
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceIpuRestartDMA; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma_ipu_gs/sce_ipu_restart_dma/sceIpuRestartDMA.s", sceIpuRestartDMA);
#else
#include "rnc/assembly_sdk_dma_ipu_gs_sce_ipu_restart_dma_types.h"
#include "types.h"


extern s32 SetD3Chcr();
void sceIpuRestartDMA(struct M2c_arg0 *arg0) {
    s32 temp_17_23;
    s32 temp_18_20;
    s32 temp_19_13;
    s32 temp_2_18;
    s32 temp_5_17;
    s32 temp_6_19;
    u32 temp_2_10;

    temp_2_10 = arg0->unk1C;
    temp_19_13 = temp_2_10 & 0x7F;
    temp_5_17 = arg0->unk0;
    temp_2_18 = ((temp_2_10 >> 0x10) & 3) + ((temp_2_10 >> 8) & 0xF);
    temp_6_19 = arg0->unk10;
    temp_18_20 = arg0->unk8 + temp_2_18;
    temp_17_23 = temp_5_17 - (temp_2_18 * 0x10);
    if (temp_6_19 == 0) {
        goto block_3;
    }
    if (arg0->unk14 == 0) {
        goto block_3;
    }
    *(s32 *)0x1000B010 = temp_6_19;
    *(s32 *)0x1000B020 = arg0->unk14;
    SetD3Chcr(arg0->unk18 | 0x100, temp_5_17, temp_6_19);
block_3:
loop_4:
    if (*(s32 *)0x10002010 < 0) {
        goto loop_4;
    }
    *(s32 *)0x10002000 = temp_19_13;
loop_6:
    if (*(volatile u32 *)0x10002010 < 0) {
        goto loop_6;
    }
    if (temp_17_23 == 0) {
        goto block_11;
    }
    if (temp_18_20 == 0) {
        goto block_12;
    }
    *(s32 *)0x1000B410 = temp_17_23;
    *(s32 *)0x1000B430 = arg0->unk4;
    *(s32 *)0x1000B420 = temp_18_20;
    SetD4Chcr(arg0->unkC | 0x100);
    return;
block_11:
block_12:
    return;
}
#endif /* NON_MATCHING */
