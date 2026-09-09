/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 5.9298%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ebd78/FUN_001ebd78.s", FUN_001ebd78);
#else
#include "types.h"
extern s32 func_001F99C0();
f32 FUN_001ebd78(f32 *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4) {
    f32 temp_f14_18;
    f32 temp_f15_17;
    f32 temp_f1_15;
    f32 temp_f1_19;
    f32 temp_f20_13;
    f32 var_f0_39;
    f32 var_f16_0;

    var_f16_0 = fparg4;
    temp_f20_13 = fparg1 - fparg0;
    temp_f1_15 = *arg0;
    temp_f15_17 = fparg3 * temp_f1_15;
    temp_f14_18 = (fparg2 * temp_f20_13) - temp_f15_17;
    temp_f1_19 = temp_f1_15 + temp_f14_18;
    *arg0 = temp_f1_19;
    if ((var_f16_0 != 0.0f) && ((var_f16_0 < temp_f1_19) || (var_f16_0 = -var_f16_0, (temp_f1_19 < var_f16_0)))) {
        *arg0 = var_f16_0;
    }
    if (func_001F99C0(temp_f20_13, temp_f14_18, temp_f15_17, var_f16_0) < *arg0) {
        var_f0_39 = func_001F99C0(temp_f20_13);
        goto block_8;
    }
    if (*arg0 < -func_001F99C0(temp_f20_13)) {
        var_f0_39 = -func_001F99C0(temp_f20_13);
block_8:
        *arg0 = var_f0_39;
    }
    return fparg0 + *arg0;
}
#endif /* NON_MATCHING */
