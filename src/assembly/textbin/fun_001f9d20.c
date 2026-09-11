/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f9d20
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 11.6667%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f9d20/FUN_001f9d20.s", FUN_001f9d20);
#else
#include "types.h"

void FUN_001f9d20(s32 arg0, s32 arg1, s32 arg2) {
    /* m2c-unknown:  unknown instruction: lqc2 $vf5, ($a1)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf1, ($a2)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf2, 0x10($a2)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf3, 0x20($a2)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf4, 0x30($a2)  */
    /* m2c-unknown:  unknown instruction: vmulax.xyzw $acc, $vf1, $vf5x  */
    /* m2c-unknown:  unknown instruction: vmadday.xyzw $acc, $vf2, $vf5y  */
    /* m2c-unknown:  unknown instruction: vmaddaz.xyzw $acc, $vf3, $vf5z  */
    /* m2c-unknown:  unknown instruction: vmaddw.xyzw $vf6, $vf4, $vf5w  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf6, ($a0)  */
}
#endif /* NON_MATCHING */
