/*
STATE: C_NON_MATCHING
SYMBOL: WriteDmaChannel
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact low-cost entry recovered with target symbolic relocations. */
INCLUDE_ASM("config/us/expected/asm/assembly/ee/write_dma_channel/WriteDmaChannel.s", WriteDmaChannel);
#else
#include "types.h"
/* Retail also performs a volatile read of 0x20100000 whose ORed result is
 * discarded; this descriptive form keeps the architecturally visible register
 * programming. The $at-addressed absolute stores are the documented wall. */

void WriteDmaChannel(u32 arg0, u32 arg1, u32 arg2) {
    *(volatile u32 *)0x1000D080 = arg1;
    *(volatile u32 *)0x1000D010 = arg0;
    *(volatile u32 *)0x1000D020 = arg2;
    *(volatile u32 *)0x1000D000 = 0x100;
    (void)*(volatile u32 *)0x20100000;
}

#endif /* NON_MATCHING */
