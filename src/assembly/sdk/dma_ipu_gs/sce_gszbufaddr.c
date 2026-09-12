/*
STATE: C_NON_MATCHING
SYMBOL: sceGszbufaddr
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceGszbufaddr; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma_ipu_gs/sce_gszbufaddr/sceGszbufaddr.s", sceGszbufaddr);
#else
#include "types.h"
extern s32 GetCoreDataTable();
s32 sceGszbufaddr(s16 arg0, s16 arg1, s16 arg2) {
    s32 temp_2_24;
    s32 temp_2_31;
    s32 temp_2_44;
    s32 temp_3_15;
    s32 var_2_46;
    s32 var_6_29;
    s64 *temp_5_16;

    temp_3_15 = arg1 + 0x3F;
    temp_5_16 = GetCoreDataTable(arg2 << 0x10);
    if (arg0 & 2) {
        temp_2_24 = arg2 + 0x3F;
        var_6_29 = (s32) ((temp_2_24 > -1) ? temp_2_24 : (arg2 + 0x7E)) >> 6;
    } else {
        temp_2_31 = arg2 + 0x1F;
        var_6_29 = (s32) ((temp_2_31 > -1) ? temp_2_31 : (arg2 + 0x3E)) >> 5;
    }
    temp_2_44 = ((s32) ((temp_3_15 > -1) ? temp_3_15 : (arg1 + 0x7E)) >> 6) * var_6_29;
    if ((*temp_5_16 & ((0xFFFF << 0x20) | 0xFFFF)) == 1) {
        var_2_46 = temp_2_44 << 0x10;
    } else {
        var_2_46 = temp_2_44 << 0x11;
    }
    return var_2_46 >> 0x10;
}
#endif /* NON_MATCHING */
