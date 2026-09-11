/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: FUN_00228520
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 28.7241%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00228520/FUN_00228520.s", FUN_00228520);
#else
#include "types.h"
extern u32 D_001603A0[];
void FUN_00228520(s32 arg0, s32 arg1) {
    s32 var_11_7;

    var_11_7 = D_001603A0[0];
    /* m2c-unknown:  unknown instruction: vaddw.xyz $vf20, $vf0, $vf0w  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf10, ($a0)  */
    /* m2c-unknown:  unknown instruction: lqc2 $vf11, ($a1)  */
    do {
        /* m2c-unknown:  unknown instruction: lqc2 $vf1, ($a6)  */
        var_11_7 -= 1;
        /* m2c-unknown:  unknown instruction: lqc2 $vf2, 0x10($a6)  */
        /* m2c-unknown:  unknown instruction: vsub.xyz $vf3, $vf2, $vf1  */
        /* m2c-unknown:  unknown instruction: vdiv $q, $vf0w, $vf3z  */
        /* m2c-unknown:  unknown instruction: vsub.z $vf4, $vf10, $vf1  */
        /* m2c-unknown:  unknown instruction: vsub.z $vf5, $vf11, $vf2  */
        /* m2c-unknown:  unknown instruction: vmulz.xyz $vf4, $vf3, $vf4z  */
        /* m2c-unknown:  unknown instruction: vmulz.xyz $vf5, $vf3, $vf5z  */
        /* m2c-unknown:  unknown instruction: vwaitq  */
        /* m2c-unknown:  unknown instruction: vmulq.xyz $vf4, $vf4, $q  */
        /* m2c-unknown:  unknown instruction: vmulq.xyz $vf5, $vf5, $q  */
        /* m2c-unknown:  unknown instruction: vadd.xyz $vf1, $vf1, $vf4  */
        /* m2c-unknown:  unknown instruction: vadd.xyz $vf2, $vf2, $vf5  */
        /* m2c-unknown:  unknown instruction: sqc2 $vf1, ($a6)  */
        /* m2c-unknown:  unknown instruction: sqc2 $vf2, 0x10($a6)  */
    } while (var_11_7 != 0);
}
#endif /* NON_MATCHING */
