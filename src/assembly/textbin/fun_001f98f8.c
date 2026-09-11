/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f98f8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f98f8/FUN_001f98f8.s", FUN_001f98f8);
#else
#include "types.h"
/* Tramp_MMI_COPY3Q_VADD_30A508 -- copy three quadwords (0x0/0x10/0x20) from a1 to a0 via MMI
 * lq/sq, and store a0.0x30 = a1.0x30 + a2 (vadd.xyz).  Single hardware-
 * intrinsic block; see godhand/mmi.h. */

__attribute__((section(".text.Tramp_MMI_COPY3Q_VADD_30A508")))
void FUN_001f98f8(void *a0, void *a1, void *a2) {
    MMI_COPY3Q_VADD(a0, a1, a2);
}
#endif /* NON_MATCHING */
