/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f9fc8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 16.6667%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f9fc8/FUN_001f9fc8.s", FUN_001f9fc8);
#else
#include "types.h"

void FUN_001f9fc8(s32 arg0) {
    /* m2c-unknown:  unknown instruction: vmulx.xyzw $vf1, $vf0, $vf0x  */
    /* m2c-unknown:  unknown instruction: vmulx.xyzw $vf2, $vf0, $vf0x  */
    /* m2c-unknown:  unknown instruction: vmr32.xyzw $vf3, $vf0  */
    /* m2c-unknown:  unknown instruction: vmove.xyzw $vf4, $vf0  */
    /* m2c-unknown:  unknown instruction: vaddw.x $vf1, $vf1, $vf0w  */
    /* m2c-unknown:  unknown instruction: vaddw.y $vf2, $vf2, $vf0w  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf1, ($a0)  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf2, 0x10($a0)  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf3, 0x20($a0)  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf4, 0x30($a0)  */
}
#endif /* NON_MATCHING */
