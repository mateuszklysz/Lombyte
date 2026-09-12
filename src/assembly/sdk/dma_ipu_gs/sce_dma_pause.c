/*
STATE: C_NON_MATCHING
SYMBOL: sceDmaPause
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit sceDmaPause; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/dma_ipu_gs/sce_dma_pause/sceDmaPause.s", sceDmaPause);
#else
#include "types.h"
extern s32 DIntr();
extern s32 EnableInterrupts();
s32 sceDmaPause(s32 *arg0) {
    s32 temp_16_27;
    s32 temp_4_29;
    s32 temp_6_13;
    s32 temp_7_9;

    temp_7_9 = DIntr();
    temp_6_13 = *(s32 *)0x1000F520;
    if (!(temp_6_13 & 0x10000)) {
        *(s32 *)0x1000F590 = temp_6_13 | 0x10000;
    }
    temp_16_27 = *arg0;
    temp_4_29 = temp_16_27 & 0xFFFFFEFF;
    *arg0 = temp_4_29;
    *(volatile u32 *)0x1000F590 = temp_6_13;
    if (temp_7_9 != 0) {
        EnableInterrupts(temp_4_29, *(s32 *)0x1000E000, temp_6_13, temp_7_9);
    }
    return temp_16_27;
}
#endif /* NON_MATCHING */
