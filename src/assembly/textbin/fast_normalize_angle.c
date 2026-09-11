/*
STATE: C_NON_MATCHING
SYMBOL: FastNormalizeAngle
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `FastNormalizeAngle`. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 58.5000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fast_normalize_angle/FUN_001fa610.s", FUN_001fa610);
#else
#include "types.h"

void FUN_001fa610(f32 fparg0) {
    f32 var_f0_5;

    var_f0_5 = fparg0;
    if (!(var_f0_5 < 3.1415927f)) {
        do {
            var_f0_5 = (var_f0_5 - 3.1415927f) - 3.1415927f;
        } while (!(var_f0_5 < 3.1415927f));
    }
    if (var_f0_5 < -3.1415927f) {
        do {
            var_f0_5 = var_f0_5 + 3.1415927f + 3.1415927f;
        } while (var_f0_5 < -3.1415927f);
    }
}
#endif /* NON_MATCHING */
