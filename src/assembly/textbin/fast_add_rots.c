/* ROLE: recovered whole function `FastAddRots__Fff`. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 32.7778%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fast_add_rots/FUN_001fa580.s", FUN_001fa580);
#else
#include "types.h"

f32 FUN_001fa580(f32 fparg0, f32 fparg1) {
    f32 var_f0_5;
    s32 temp_cond_14;

    var_f0_5 = fparg0 + fparg1;
    temp_cond_14 = var_f0_5 < -3.1415927f;
    if (!(var_f0_5 < 3.1415927f)) {
        var_f0_5 = (var_f0_5 - 3.1415927f) - 3.1415927f;
    }
    if (temp_cond_14) {
        var_f0_5 = var_f0_5 + 3.1415927f + 3.1415927f;
    }
    return var_f0_5;
}
#endif /* NON_MATCHING */
