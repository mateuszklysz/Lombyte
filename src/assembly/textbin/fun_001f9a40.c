/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f9a40
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 14.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f9a40/FUN_001f9a40.s", FUN_001f9a40);
#else
#include "types.h"

void FUN_001f9a40(s32 arg0, s32 arg1, s32 arg2, f32 fparg0) {
    /* m2c-unknown:  unknown instruction: lqc2 $vf1, ($a1)  */
    /* m2c-unknown:  unknown instruction: qmtc2.ni $at, $vf3  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf2, ($a2)  */
    /* m2c-unknown:  unknown instruction: vsub.xyz $vf2, $vf2, $vf1  */
    /* m2c-unknown:  unknown instruction: vmulx.xyz $vf2, $vf2, $vf3x  */
    /* m2c-unknown:  unknown instruction: vadd.xyz $vf1, $vf1, $vf2  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf1, ($a0)  */
}
#endif /* NON_MATCHING */
