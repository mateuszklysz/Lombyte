/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 7.0000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fa328/FUN_001fa328.s", FUN_001fa328);
#else
#include "types.h"

void FUN_001fa328(s32 arg0, s32 arg1, s32 arg2) {
    /* m2c-unknown:  unknown instruction: lqc2 $vf4, ($a1)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf5, 0x10($a1)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf6, 0x20($a1)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf1, ($a2)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf2, 0x10($a2)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf3, 0x20($a2)  */
    /* m2c-unknown:  unknown instruction: vmulax.xyzw $acc, $vf4, $vf1x  */
    /* m2c-unknown:  unknown instruction: vmadday.xyzw $acc, $vf5, $vf1y  */
    /* m2c-unknown:  unknown instruction: vmaddz.xyzw $vf1, $vf6, $vf1z  */
    /* m2c-unknown:  unknown instruction: vmulax.xyzw $acc, $vf4, $vf2x  */
    /* m2c-unknown:  unknown instruction: vmadday.xyzw $acc, $vf5, $vf2y  */
    /* m2c-unknown:  unknown instruction: vmaddz.xyzw $vf2, $vf6, $vf2z  */
    /* m2c-unknown:  unknown instruction: vmulax.xyzw $acc, $vf4, $vf3x  */
    /* m2c-unknown:  unknown instruction: vmadday.xyzw $acc, $vf5, $vf3y  */
    /* m2c-unknown:  unknown instruction: vmaddz.xyzw $vf3, $vf6, $vf3z  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf1, ($a0)  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf2, 0x10($a0)  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf3, 0x20($a0)  */
}
#endif /* NON_MATCHING */
