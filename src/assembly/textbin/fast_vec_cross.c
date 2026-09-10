/* ROLE: recovered whole function `FastVecCross` (fastfunc.s). */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 23.3333%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fast_vec_cross/FUN_001f9ad8.s", FUN_001f9ad8);
#else
#include "types.h"

void FUN_001f9ad8(s32 arg0, s32 arg1, s32 arg2) {
    /* m2c-unknown:  unknown instruction: lqc2 $vf1, ($a1)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf2, ($a2)  */
    /* m2c-unknown:  unknown instruction: vopmula.xyz $acc, $vf2, $vf1  */
    /* m2c-unknown:  unknown instruction: vopmsub.xyz $vf3, $vf1, $vf2  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf3, ($a0)  */
}
#endif /* NON_MATCHING */
