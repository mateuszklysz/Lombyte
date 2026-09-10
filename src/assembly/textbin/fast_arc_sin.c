/* ROLE: recovered whole function `FastArcSin__Ff` (fastfunc.s). */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 21.1579%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fast_arc_sin/FUN_001f9df8.s", FUN_001f9df8);
#else
#include "types.h"

f32 FUN_001f9df8(f32 fparg0) {
    f32 var_f10_12;

    var_f10_12 = 1.0f;
    if (fparg0 < 0.0f) {
        var_f10_12 = -1.0f;
    }
    /* m2c-unknown:  unknown instruction: qmtc2.ni $a0, $vf1  */
    /* m2c-unknown:  unknown instruction: adda.s $f4, $f13  */
    /* m2c-unknown:  unknown instruction: madda.s $f12, $f5  */
    /* m2c-unknown:  unknown instruction: madda.s $f2, $f6  */
    /* m2c-unknown:  unknown instruction: vaddq.x $vf1, $vf0, $q  */
    return var_f10_12 * (1.5707964f - (0 /*  unknown instruction: madd.s $f8, $f3, $f7  */ * 0 /*  unknown instruction: qmfc2.ni $a0, $vf1  */));
}
#endif /* NON_MATCHING */
