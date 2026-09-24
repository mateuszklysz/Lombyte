#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/rendering/dma_to_spr_sync/FUN_0020b3e0.s", FUN_0020b3e0);
#else
#include "types.h"

void dma_to_spr_sync(s32 arg0) __asm__("FUN_0020b3e0");

void dma_to_spr_sync(s32 arg0) {
loop_1:
    if (*(s32 *)0x1000D400 & 0x100) {
        goto loop_1;
    }
}
#endif /* NON_MATCHING */
