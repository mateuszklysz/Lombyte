/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 75.5932%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022c6f8/FUN_0022c6f8.s", FUN_0022c6f8);
#else
#include "rnc/assembly_textbin_fun_0022c6f8_types.h"
#include "types.h"


extern s32 func_001FA6C0();
extern s32 func_001FA6D0();
s32 FUN_0022c6f8(struct M2c_arg0 *arg0, f32 fparg0, f32 fparg1, f32 fparg2) {
    f32 temp_f12_30;
    f32 temp_f1_31;
    f32 var_f0_28;
    f32 var_f12_32;
    f32 var_f1_34;

    if (!(arg0->unk19 & 1)) {
        goto block_8;
    }
    if (!(fparg0 <= fparg1)) {
        goto block_3;
    }
    return arg0->unkC;
block_3:
    if (!(fparg2 <= fparg0)) {
        goto block_6;
    }
    return arg0->unk8;
block_6:
    var_f0_28 = func_001FA6C0(arg0->unkC - arg0->unk8);
    temp_f12_30 = fparg2 - fparg0;
    temp_f1_31 = fparg2 - fparg1;
    var_f12_32 = temp_f12_30 * temp_f12_30;
    var_f1_34 = temp_f1_31 * temp_f1_31;
    goto block_15;
block_8:
    if (!(fparg0 <= fparg1)) {
        goto block_10;
    }
    return arg0->unkC;
block_10:
    if (fparg2 <= fparg0) {
        goto block_12;
    }
    goto block_14;
block_12:
    return arg0->unk8;
block_14:
    var_f0_28 = func_001FA6C0(arg0->unkC - arg0->unk8);
    var_f12_32 = fparg2 - fparg0;
    var_f1_34 = fparg2 - fparg1;
block_15:
    return arg0->unk8 + func_001FA6D0((var_f12_32 * var_f0_28) / var_f1_34);
}
#endif /* NON_MATCHING */
