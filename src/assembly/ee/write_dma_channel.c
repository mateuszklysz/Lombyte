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
/* Byte-identical to RE4 PS2 (SLUS-21134) 0x002DAB68 — shared engine code.
 * Fills a 0x28-byte struct with -1; the leading 0x10 bytes are written as two
 * 64-bit stores (the EE merges adjacent -1 words into sd). */

__attribute__((section(".text.func_00369158")))
void WriteDmaChannel(void *a0) {
    char *p = (char *)a0;
    *(long long *)(p + 0x0) = -1;
    *(long long *)(p + 0x8) = -1;
    *(int *)(p + 0x10) = -1;
    *(int *)(p + 0x14) = -1;
    *(int *)(p + 0x18) = -1;
    *(int *)(p + 0x1C) = -1;
    *(int *)(p + 0x20) = -1;
    *(int *)(p + 0x24) = -1;
}
#endif /* NON_MATCHING */
