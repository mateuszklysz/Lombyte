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
    f32 temp_f1_21;
    f32 temp_f20_46;
    f32 temp_f20_90;
    f32 temp_f22_22;
    f32 temp_f23_37;
    f32 var_f0_64;
    f32 var_f12_51;
    f32 var_f13_53;

    temp_f1_21 = *arg1;
    temp_f22_22 = fparg0 - *arg0;
    if (!((temp_f1_21 * temp_f22_22) >= 0.0f)) {
        goto block_19;
    }
    if (temp_f22_22 == 0.0f) {
        goto block_19;
    }
    temp_f23_37 = ((temp_f1_21 * temp_f1_21) / fparg2) * 0.5f;
    if (func_001F99C0(temp_f22_22) < temp_f23_37) {
        goto block_4;
    }
    goto block_8;
block_4:
    temp_f20_46 = func_001F99C0(temp_f22_22);
    __asm__ volatile ("" : "+r" (temp_f20_46));
    var_f12_51 = 0.0f;
    if (!(temp_f23_37 < (temp_f20_46 + func_001F99C0(*arg1)))) {
        goto block_7;
    }
    var_f13_53 = fparg2;
    goto block_12;
block_7:
    func_00213ED8(arg1, 0.0f, fparg2 * 1.1f);
    goto block_14;
block_8:
    var_f0_64 = func_001F9988(2.0f * fparg2 * temp_f22_22);
    if (!(fparg3 < var_f0_64)) {
        goto block_10;
    }
    var_f0_64 = fparg3;
block_10:
    var_f13_53 = fparg1;
    if (!(temp_f22_22 < 0.0f)) {
        goto block_13;
    }
    var_f12_51 = -var_f0_64;
block_12:
    func_00213ED8(arg1, var_f12_51, var_f13_53);
    goto block_14;
block_13:
    func_00213ED8(arg1, var_f0_64, var_f13_53);
block_14:
    temp_f20_90 = func_001F99C0(temp_f22_22);
    if (func_001F99C0(*arg1) < temp_f20_90) {
        goto block_16;
    }
    *arg0 = fparg0;
    goto block_18;
block_16:
    *arg0 += *arg1;
    goto block_20;
block_18:
    return temp_f22_22;
block_19:
    func_00213ED8(arg1, 0.0f, fparg2);
    *arg0 += *arg1;
block_20:
    return *arg1;
}
#endif /* NON_MATCHING */
