/*
STATE: C_NON_MATCHING
SYMBOL: sceGsSyncV
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceGsSyncV; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma_ipu_gs/sce_gs_sync_v/sceGsSyncV.s", sceGsSyncV);
#else
#include "rnc/assembly_sdk_dma_ipu_gs_sce_gs_sync_v_types.h"
#include "types.h"


extern s32 GetCoreDataTable();
extern s32 VSync();
extern s32 VSync2();
s64 sceGsSyncV(void) {
    s64 temp_4_32;
    s64 var_2_15;
    struct M2c_temp_2_6 *temp_2_6;

    temp_2_6 = GetCoreDataTable();
    if (temp_2_6->unk8 != 0) {
        goto block_3;
    }
    VSync();
    var_2_15 = 1;
    if (temp_2_6->unk0 != 1) {
        goto block_5;
    }
    return (s64) ((((u64) *(u64 *)0x12001000 >> 0xD) & 1) << 0x20) >> 0x20;
block_3:
    temp_4_32 = (VSync2() >> 0xD) & 1;
    var_2_15 = 1;
    if (temp_2_6->unk0 != 1) {
        goto block_5;
    }
    var_2_15 = (s64) (temp_4_32 << 0x20) >> 0x20;
block_5:
    return var_2_15;
}
#endif /* NON_MATCHING */
