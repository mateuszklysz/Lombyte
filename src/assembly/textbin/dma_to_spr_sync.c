/* ROLE: recovered whole function `DmaToSprSync` (miscproc). */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 42.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/dma_to_spr_sync/FUN_0020b3e0.s", FUN_0020b3e0);
#else
#include "types.h"

void FUN_0020b3e0(s32 arg0) {
loop_1:
    if (*(s32 *)0x1000D400 & 0x100) {
        goto loop_1;
    }
}
#endif /* NON_MATCHING */
