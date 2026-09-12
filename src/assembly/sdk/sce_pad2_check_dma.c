/*
STATE: C_NON_MATCHING
SYMBOL: scePad2CheckDma
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library leaf scePad2CheckDma; target words retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/sce_pad2_check_dma/scePad2CheckDma.s", scePad2CheckDma);
#else
#include "rnc/assembly_sdk_sce_pad2_check_dma_types.h"
#include "types.h"










extern struct M2c_D_00132DD8 D_00132DD8;
extern u8 D_0015B540[];
s32 scePad2CheckDma(s32 arg0) {
    struct M2c_sp0 *sp0;
    struct M2c_sp4 *sp4;
    s32 temp_4_10;
    struct M2c_temp_3_9 *temp_3_9;
    struct M2c_temp_5_11 *temp_5_11;

    temp_3_9 = *(s32 *)((u8 *)(D_0015B540 + (arg0 * 0x330)) + 0xC);
    temp_4_10 = temp_3_9->unk7C;
    temp_5_11 = ((u8 *)temp_3_9 + (0x80));
    sp0 = temp_3_9;
    sp4 = temp_5_11;
    if (temp_4_10 == 0) {
        goto block_3;
    }
    if (D_00132DD8.unk0 != temp_4_10) {
        goto block_4;
    }
    if (D_00132DD8.unk4 != temp_5_11->unk7C) {
        goto block_5;
    }
block_3:
    return 0;
block_4:
block_5:
    D_00132DD8.unk4 = (s32) sp4->unk7C;
    D_00132DD8.unk0 = (s32) sp0->unk7C;
    return 1;
}
#endif /* NON_MATCHING */
