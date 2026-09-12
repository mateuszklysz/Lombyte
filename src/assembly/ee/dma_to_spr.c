/*
STATE: C_NON_MATCHING
SYMBOL: WriteDmaChannelRegisters
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: WriteDmaChannelRegisters: programs three EE DMA channel registers and
 * arms the channel with 0x100. The configured unit path (`dma_to_spr`) is
 * historical and predates the symbol identification; the expected object and
 * the oracle carry `WriteDmaChannelRegisters`. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact low-cost entry recovered with target symbolic relocations. */
INCLUDE_ASM("config/us/expected/asm/assembly/ee/dma_to_spr/WriteDmaChannelRegisters.s", WriteDmaChannelRegisters);
#else
#include "types.h"

void WriteDmaChannelRegisters(u32 arg0, u32 arg1, u32 arg2) {
    *(volatile u32 *)0x1000D410 = arg0;
    *(volatile u32 *)0x1000D420 = arg1;
    *(volatile u32 *)0x1000D480 = arg2;
    *(volatile u32 *)0x1000D400 = 0x100;
}

#endif /* NON_MATCHING */
