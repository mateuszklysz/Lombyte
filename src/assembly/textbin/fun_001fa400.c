/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 6.2500%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fa400/FUN_001fa400.s", FUN_001fa400);
#else
#include "types.h"

void FUN_001fa400(s32 arg0, s32 arg1, s32 arg2, f32 fparg0) {
    /* m2c-unknown:  unknown instruction: qmtc2.ni $at, $vf3  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf1, ($a1)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf2, ($a2)  */
    /* m2c-unknown:  unknown instruction: vsubx.w $vf3, $vf0, $vf3x  */
    /* m2c-unknown:  unknown instruction: vaddw.xyz $vf7, $vf0, $vf0w  */
    /* m2c-unknown:  unknown instruction: vmulw.xyzw $vf1, $vf1, $vf3w  */
    /* m2c-unknown:  unknown instruction: vmulx.xyzw $vf2, $vf2, $vf3x  */
    /* m2c-unknown:  unknown instruction: vadd.xyzw $vf4, $vf1, $vf2  */
    /* m2c-unknown:  unknown instruction: vmul.xyzw $vf6, $vf1, $vf2  */
    /* m2c-unknown:  unknown instruction: vmul.xyzw $vf5, $vf4, $vf4  */
    /* m2c-unknown:  unknown instruction: vaddax.y $acc, $vf6, $vf6x  */
    /* m2c-unknown:  unknown instruction: vmaddaz.y $acc, $vf7, $vf6z  */
    /* m2c-unknown:  unknown instruction: vmaddw.y $vf6, $vf7, $vf6w  */
    /* m2c-unknown:  unknown instruction: vadday.x $acc, $vf5, $vf5y  */
    /* m2c-unknown:  unknown instruction: vmaddaz.x $acc, $vf7, $vf5z  */
    /* m2c-unknown:  unknown instruction: vmaddw.x $vf5, $vf7, $vf5w  */
    if (0 /*  unknown instruction: qmfc2.ni $a5, $vf6  */ < 0) {
        /* m2c-unknown:  unknown instruction: vsub.xyzw $vf4, $vf1, $vf2  */
        /* m2c-unknown:  unknown instruction: vmul.xyzw $vf5, $vf4, $vf4  */
        /* m2c-unknown:  unknown instruction: vadday.x $acc, $vf5, $vf5y  */
        /* m2c-unknown:  unknown instruction: vmaddaz.x $acc, $vf7, $vf5z  */
        /* m2c-unknown:  unknown instruction: vmaddw.x $vf5, $vf7, $vf5w  */
    }
    /* m2c-unknown:  unknown instruction: vrsqrt $q, $vf0w, $vf5x  */
    /* m2c-unknown:  unknown instruction: vwaitq  */
    /* m2c-unknown:  unknown instruction: vmulq.xyzw $vf1, $vf4, $q  */
    /* m2c-unknown:  unknown instruction: sqc2 $vf1, ($a0)  */
}
#endif /* NON_MATCHING */
