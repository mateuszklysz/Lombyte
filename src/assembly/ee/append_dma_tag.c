/*
STATE: C_NON_MATCHING
SYMBOL: AppendDmaTag
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact low-cost entry recovered with target symbolic relocations. */
INCLUDE_ASM("config/us/expected/asm/assembly/ee/append_dma_tag/AppendDmaTag.s", AppendDmaTag);
#else
#include "rnc/assembly_ee_append_dma_tag_types.h"
#include "types.h"

extern s32 D_00160F00[];
void AppendDmaTag(s32 arg0) {
    register s32 cursor __asm__("v0");
    register s32 value __asm__("a0");
    register struct M2c_temp_5_7 *temp_5_7 __asm__("a1");
    cursor = D_00160F00[0];
    value = arg0 + 0x90000000;
    temp_5_7 = (struct M2c_temp_5_7 *)cursor;
    cursor += 0x10;
    D_00160F00[0] = cursor;
    temp_5_7->unk0 = value;
    temp_5_7->unkC = 0;
    __asm__ volatile ("" ::: "memory");
    temp_5_7->unk4 = 0;
    __asm__ volatile ("" ::: "memory");
    temp_5_7->unk8 = 0;
}
#endif /* NON_MATCHING */
