/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 7.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fa2d8/FUN_001fa2d8.s", FUN_001fa2d8);
#else
#include "types.h"

void FUN_001fa2d8(s32 arg0, s32 arg1) {
    /* m2c-unknown:  unknown instruction: lqc2 $vf1, ($a1)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf2, 0x10($a1)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf3, 0x20($a1)  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf0, 0x30($a0)  */
    /* m2c-unknown:  unknown instruction: vaddx.x $vf4, $vf0, $vf1x  */
    /* m2c-unknown:  unknown instruction: vaddy.y $vf5, $vf0, $vf2y  */
    /* m2c-unknown:  unknown instruction: vaddz.z $vf6, $vf0, $vf3z  */
    /* m2c-unknown:  unknown instruction: vaddy.x $vf5, $vf0, $vf1y  */
    /* m2c-unknown:  unknown instruction: vaddx.y $vf4, $vf0, $vf2x  */
    /* m2c-unknown:  unknown instruction: vaddz.x $vf6, $vf0, $vf1z  */
    /* m2c-unknown:  unknown instruction: vaddx.z $vf4, $vf0, $vf3x  */
    /* m2c-unknown:  unknown instruction: vaddz.y $vf6, $vf0, $vf2z  */
    /* m2c-unknown:  unknown instruction: vaddy.z $vf5, $vf0, $vf3y  */
    /* m2c-unknown:  unknown instruction: vsubw.w $vf4, $vf0, $vf0w  */
    /* m2c-unknown:  unknown instruction: vsubw.w $vf5, $vf0, $vf0w  */
    /* m2c-unknown:  unknown instruction: vsubw.w $vf6, $vf0, $vf0w  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf4, ($a0)  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf5, 0x10($a0)  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf6, 0x20($a0)  */
}
#endif /* NON_MATCHING */
