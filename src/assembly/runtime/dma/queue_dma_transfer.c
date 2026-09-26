#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact low-cost entry recovered with target symbolic relocations. */
INCLUDE_ASM("config/us/expected/asm/assembly/runtime/dma/queue_dma_transfer/QueueDmaTransfer.s", QueueDmaTransfer);
#else
#include "types.h"

extern s32 D_0015EF64;
extern s32 D_0015EF60;
extern s32 D_001996FC[];
extern s32 D_0015F6A0;

__asm__(".extern D_0015F6A0, 4");

void QueueDmaTransfer(s32 index) __asm__("QueueDmaTransfer");

void QueueDmaTransfer(s32 index) {
    s32 *entry;
    s32 *slot;

    entry = (s32 *)(index * 4 + D_0015EF64);
    slot = (s32 *)((u8 *)D_0015EF60 + *entry);
    D_001996FC[0] = slot[0];
    D_0015F6A0 = (u32)slot + 8;
}
#endif /* NON_MATCHING */
