/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00213f38
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 42.5351%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00213f38/FUN_00213f38.s", FUN_00213f38);
#else
#include "types.h"
extern s32 func_001F9988();
extern s32 func_001F99C0();
extern s32 func_00213ED8();
f32 FUN_00213f38(f32 *arg0, f32 *arg1, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    f32 temp_f1_23;
    f32 temp_f20_48;
    f32 temp_f20_92;
    f32 temp_f22_24;
    f32 temp_f23_39;
    f32 var_f0_66;
    f32 var_f12_53;
    f32 var_f13_55;

    temp_f1_23 = *arg1;
    temp_f22_24 = fparg0 - *arg0;
    if (!((temp_f1_23 * temp_f22_24) >= 0.0f)) {
        goto block_19;
    }
    if (temp_f22_24 == 0.0f) {
        goto block_19;
    }
    temp_f23_39 = ((temp_f1_23 * temp_f1_23) / fparg2) * 0.5f;
    if (func_001F99C0(temp_f22_24) < temp_f23_39) {
        goto block_4;
    }
    goto block_8;
block_4:
    temp_f20_48 = func_001F99C0(temp_f22_24);
    var_f12_53 = 0.0f;
    if (!(temp_f23_39 < (temp_f20_48 + func_001F99C0(*arg1)))) {
        goto block_7;
    }
    var_f13_55 = fparg2;
    goto block_12;
block_7:
    func_00213ED8(arg1, 0.0f, fparg2 * 1.1f);
    goto block_14;
block_8:
    var_f0_66 = func_001F9988(2.0f * fparg2 * temp_f22_24);
    if (!(fparg3 < var_f0_66)) {
        goto block_10;
    }
    var_f0_66 = fparg3;
block_10:
    var_f13_55 = fparg1;
    if (!(temp_f22_24 < 0.0f)) {
        goto block_13;
    }
    var_f12_53 = -var_f0_66;
block_12:
    func_00213ED8(arg1, var_f12_53, var_f13_55);
    goto block_14;
block_13:
    func_00213ED8(arg1, var_f0_66, var_f13_55);
block_14:
    temp_f20_92 = func_001F99C0(temp_f22_24);
    if (func_001F99C0(*arg1) < temp_f20_92) {
        goto block_16;
    }
    *arg0 = fparg0;
    goto block_18;
block_16:
    *arg0 += *arg1;
    goto block_20;
block_18:
    return temp_f22_24;
block_19:
    func_00213ED8(arg1, 0.0f, fparg2);
    *arg0 += *arg1;
block_20:
    return *arg1;
}
#endif /* NON_MATCHING */
