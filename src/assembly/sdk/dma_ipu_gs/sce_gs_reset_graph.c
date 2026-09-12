/*
STATE: C_NON_MATCHING
SYMBOL: sceGsResetGraph
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceGsResetGraph; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma_ipu_gs/sce_gs_reset_graph/sceGsResetGraph.s", sceGsResetGraph);
#else
#include "rnc/assembly_sdk_dma_ipu_gs_sce_gs_reset_graph_types.h"
#include "types.h"




extern s32 GetCoreDataTable();
extern s32 GsPutIMR();
extern s32 RemoveIntcHandler();
extern s32 func_00119028();
void sceGsResetGraph(u16 arg0, u16 arg1, u16 arg2, u16 arg3) {
    s32 temp_5_6;
    s32 temp_6_8;
    s32 temp_7_10;
    struct M2c_temp_16_37 *temp_16_37;
    struct M2c_temp_2_78 *temp_2_78;

    temp_5_6 = arg1 << 0x10;
    temp_6_8 = arg2 << 0x10;
    temp_7_10 = arg3 << 0x10;
    if (arg0 == 1) {
        goto block_12;
    }
    if (arg0 < 2) {
        goto block_3;
    }
    goto block_6;
block_3:
    if (arg0 == 0) {
        goto block_8;
    }
    return;
block_6:
    if (arg0 == 5) {
        goto block_13;
    }
    return;
block_8:
    temp_16_37 = GetCoreDataTable(arg0, temp_5_6, temp_6_8, temp_7_10);
    *(volatile u32 *)0x12001000 = 0x200U;
    temp_16_37->unk0 = arg1;
    temp_16_37->unk2 = arg2;
    temp_16_37->unk6 = (s16) (((u64) *(volatile u32 *)0x12001000 >> 0x10) & 0xFF & 0xFFFF);
    GsPutIMR(0xFF00);
    temp_16_37->unk4 = (s16) (arg3 != 0);
    if (temp_16_37->unk8 == 0) {
        goto block_10;
    }
    func_00119028(2);
    RemoveIntcHandler(2, temp_16_37->unkC);
    temp_16_37->unkC = 0;
    temp_16_37->unk8 = 0;
block_10:
    SetGsCrt(arg1 & 1, arg2 & 0xFF, arg3 & 1);
    return;
block_12:
    *(volatile u32 *)0x12001000 = 0x100U;
    return;
block_13:
    temp_2_78 = GetCoreDataTable(arg0, temp_5_6, temp_6_8, temp_7_10);
    temp_2_78->unk4 = (s16) (arg3 != 0);
    temp_2_78->unk0 = arg1;
    temp_2_78->unk2 = arg2;
    temp_2_78->unk6 = (s16) (((u64) *(u64 *)0x12001000 >> 0x10) & 0xFF & 0xFFFF);
    SetGsCrt(arg1 & 1, arg2 & 0xFF, arg3 & 1);
    return;
}
#endif /* NON_MATCHING */
