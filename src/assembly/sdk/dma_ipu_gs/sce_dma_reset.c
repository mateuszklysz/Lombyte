/*
STATE: C_NON_MATCHING
SYMBOL: sceDmaReset
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceDmaReset; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma_ipu_gs/sce_dma_reset/sceDmaReset.s", sceDmaReset);
#else
#include "rnc/assembly_sdk_dma_ipu_gs_sce_dma_reset_types.h"
#include "types.h"


extern u8 D_00132D70[];
extern u8 D_001533F8[];
extern s32 Memclr();
extern s32 sceDmaPutEnv();
s32 sceDmaReset(s32 arg0) {
    volatile u32 *m2c_mmio = (volatile u32 *)0x1000E000;
    volatile u32 *m2c_mmio_1 = (volatile u32 *)0x1000E010;
u8 sp_slot[0x50];    s32 *var_6_14;
    s32 temp_17_16;
    s32 var_4_15;
    void **var_3_12;
    struct M2c_temp_2_21 *temp_2_21;

    var_3_12 = D_00132D70;
    var_6_14 = D_001533F8;
    var_4_15 = 9;
    temp_17_16 = *m2c_mmio & 1;
    do {
        if (*var_6_14 != 0) {
            temp_2_21 = *var_3_12;
            temp_2_21->unk80 = 0;
            temp_2_21->unk0 = 0;
            temp_2_21->unk30 = 0;
            temp_2_21->unk10 = 0;
            temp_2_21->unk50 = 0;
            temp_2_21->unk40 = 0;
        }
        var_3_12 += 4;
        var_4_15 -= 1;
        var_6_14 += 4;
    } while (var_4_15 >= 0);
    *m2c_mmio_1 = 0xFF1F;
    *m2c_mmio_1 &= 0xFF1F0000;
    Memclr(sp_slot, 0x14, 0xFF1F0000);
    sceDmaPutEnv(sp_slot);
    if (arg0 == 1) {
        *m2c_mmio = (s32) (*m2c_mmio | 1);
    }
    return temp_17_16;
}
#endif /* NON_MATCHING */
