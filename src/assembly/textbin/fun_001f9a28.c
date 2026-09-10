/* ROLE: recovered function `FastVecSub` (fastfunc.s, 0x88 bytes) starts here; this unit covers only its first fragment. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 23.3333%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f9a28/FUN_001f9a28.s", FUN_001f9a28);
#else
#include "types.h"

void FUN_001f9a28(s32 arg0, s32 arg1, s32 arg2) {
    /* m2c-unknown:  unknown instruction: lqc2 $vf1, ($a1)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf2, ($a2)  */
    /* m2c-unknown:  unknown instruction: vsub.xyz $vf1, $vf1, $vf2  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf1, ($a0)  */
}
#endif /* NON_MATCHING */
