#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x58];
    f32 unk58;
    f32 unk5C;
};

extern f32 func_0020C9E0();
extern f32 func_00214C48(s32, f32);
s32 is_value_within_interpolated_window(struct M2c_arg0 *arg0, f32 fparg0) __asm__("FUN_00214cc8");

s32 is_value_within_interpolated_window(struct M2c_arg0 *arg0, f32 fparg0) {
    f32 temp_f0_10;
    f32 temp_f0_20;
    f32 temp_f22_16;
    s32 var_2_25;

    temp_f0_10 = func_0020C9E0();
    temp_f22_16 = func_00214C48(4, temp_f0_10 - fparg0);
    temp_f0_20 = func_00214C48(4, arg0->unk58 * arg0->unk5C);
    var_2_25 = 0;
    if (fparg0 <= temp_f0_10) {
        var_2_25 = 1;
        if (!(temp_f22_16 < temp_f0_20)) {
            var_2_25 = 0;
        }
    }
    return var_2_25;
}

