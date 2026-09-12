/*
STATE: C_NON_MATCHING
SYMBOL: sceDmaPutEnv
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceDmaPutEnv; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma_ipu_gs/sce_dma_put_env/sceDmaPutEnv.s", sceDmaPutEnv);
#else
#include "rnc/assembly_sdk_dma_ipu_gs_sce_dma_put_env_types.h"
#include "types.h"




extern u8 D_00153420[];
extern u8 D_00153430[];
extern u8 D_00153440[];
extern struct M2c_D_001599D8 D_001599D8;
s32 sceDmaPutEnv(struct M2c_arg0 *arg0) {
    s32 temp_10_73;
    s32 var_10_82;
    u8 temp_11_34;

    if ((u8) arg0->unk0 >= 0xAU) {
        goto block_2;
    }
    goto block_4;
block_2:
    return -1;
block_4:
    if ((u8) arg0->unk1 >= 0xAU) {
        goto block_6;
    }
    goto block_8;
block_6:
    return -2;
block_8:
    if ((u8) arg0->unk2 >= 0xAU) {
        goto block_10;
    }
    temp_11_34 = arg0->unk3;
    goto block_12;
block_10:
    return -3;
block_12:
    if (temp_11_34 < 7U) {
        goto block_14;
    }
    return -4;
block_14:
    temp_10_73 = (((((*(s32 *)0x1000E000 & 0xFFFFFFCF) | (*(arg0->unk0 + D_00153420) * 0x10)) & 0xFFFFFF3F) | (*(arg0->unk1 + D_00153430) << 6)) & 0xFFFFFFF3) | (*(arg0->unk2 + D_00153440) * 4);
    if (temp_11_34 == 0) {
        goto block_16;
    }
    var_10_82 = ((temp_10_73 | 2) & 0xFFFFFCFF) | ((arg0->unk3 - 1) << 8);
    goto block_17;
block_16:
    var_10_82 = temp_10_73 & 0xFFFFFFFD;
block_17:
    *(volatile u32 *)0x1000E000 = var_10_82;
    *(volatile u32 *)0x1000E020 = (s32) ((arg0->unk4 << 0x10) | arg0->unk6);
    *(volatile u32 *)0x1000E030 = (s32) ((arg0->unkA << 0x10) | arg0->unk8);
    *(volatile u32 *)0x1000E050 = (s32) arg0->unkC;
    *(volatile u32 *)0x1000E040 = (s32) arg0->unk10;
    /* m2c-unknown:  unknown instruction: ldl $v0, 0x7($a5)  */
    /* m2c-unknown:  unknown instruction: ldr $v0, ($a5)  */
    /* m2c-unknown:  unknown instruction: ldl $a0, 0xf($a5)  */
    /* m2c-unknown:  unknown instruction: ldr $a0, 0x8($a5)  */
    /* m2c-unknown:  unknown instruction: sdl $v0, 0x7($a2)  */
    /* m2c-unknown:  unknown instruction: sdr $v0, ($a2)  */
    /* m2c-unknown:  unknown instruction: sdl $a0, 0xf($a2)  */
    /* m2c-unknown:  unknown instruction: sdr $a0, 0x8($a2)  */
    D_001599D8.unk10 = (s32) arg0->unk10;
    return 0;
}
#endif /* NON_MATCHING */
