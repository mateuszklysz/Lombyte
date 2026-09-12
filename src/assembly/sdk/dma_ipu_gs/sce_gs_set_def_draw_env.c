/*
STATE: C_NON_MATCHING
SYMBOL: sceGsSetDefDrawEnv
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceGsSetDefDrawEnv; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma_ipu_gs/sce_gs_set_def_draw_env/sceGsSetDefDrawEnv.s", sceGsSetDefDrawEnv);
#else
#include "rnc/assembly_sdk_dma_ipu_gs_sce_gs_set_def_draw_env_types.h"
#include "types.h"


extern s32 sceGszbufaddr();
s32 sceGsSetDefDrawEnv(struct M2c_arg0 *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5) {
    s32 temp_7_20;
    s32 temp_8_22;
    s32 temp_9_24;
    s64 var_2_100;
    s64 var_2_114;
    s64 var_2_47;

    temp_7_20 = arg3 << 0x10;
    temp_8_22 = arg4 << 0x10;
    temp_9_24 = arg5 << 0x10;
    arg0->unk8 = 0x4C;
    arg0->unk0 = (s64) (((((s32) (arg2 + 0x3F) >> 6) & 0x3F) << 0x10) | ((arg1 & 0xF) << 0x18));
    arg0->unk18 = 0x4E;
    if (arg4 == 0) {
        var_2_47 = ((s64) (sceGszbufaddr(arg1, arg2, arg3, temp_7_20, temp_8_22, temp_9_24) << 0x30) >> 0x30) | ((arg5 & 0xF) << 0x18) | (0x8000 << 0x11);
    } else {
        var_2_47 = ((s64) (sceGszbufaddr(arg1, arg2, arg3, temp_7_20, temp_8_22, temp_9_24) << 0x30) >> 0x30) | ((arg5 & 0xF) << 0x18);
    }
    arg0->unk10 = var_2_47;
    arg0->unk28 = 0x18;
    arg0->unk20 = (s64) (((0x800 - ((s64) ((s64) (arg2 >> 1) << 0x30) >> 0x30)) * 0x10) | ((0x800 - ((s64) ((s64) (arg3 >> 1) << 0x30) >> 0x30)) << 0x24));
    arg0->unk38 = 0x40;
    arg0->unk30 = (s64) (((arg2 - 1) << 0x10) | ((arg3 - 1) << 0x30));
    arg0->unk48 = 0x1A;
    arg0->unk40 = (s64) (arg0->unk40 | 1);
    arg0->unk58 = 0x46;
    arg0->unk50 = (s64) (arg0->unk50 | 1);
    arg0->unk68 = 0x45;
    if (arg1 & 2) {
        var_2_100 = arg0->unk60 | 1;
    } else {
        var_2_100 = arg0->unk60 & ~1;
    }
    arg0->unk60 = var_2_100;
    arg0->unk78 = 0x47;
    if (arg4 != 0) {
        var_2_114 = ((arg4 & 3) << 0x11) | 0x10000;
    } else {
        var_2_114 = 0x30000;
    }
    arg0->unk70 = var_2_114;
    M2C_SYNC();
    return 8;
}
#endif /* NON_MATCHING */
