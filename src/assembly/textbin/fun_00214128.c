#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00214128/FUN_00214128.s", FUN_00214128);
#else
#include "types.h"
extern s32 func_001F9BF8();
void FUN_00214128(s32 arg0) {
u8 sp_slot[0x50];    f32 *var_2_15;
    f32 *var_2_32;
    f32 *var_3_14;
    f32 *var_3_31;
    f32 temp_f0_19;
    f32 temp_f0_36;
    s32 var_16_10;
    s32 var_3_4;
    s32 var_4_16;
    s32 var_4_33;

    var_3_4 = 0;
    var_16_10 = 0 * 4;
    do {
        var_3_14 = sp_slot;
        var_2_15 = arg0 + var_16_10;
        var_4_16 = 2;
loop_2:
        temp_f0_19 = *var_2_15;
        var_4_16 -= 1;
        var_2_15 += 4;
        *var_3_14 = temp_f0_19;
        var_3_14 += 4;
        if (var_4_16 >= 0) {
            goto loop_2;
        }
        func_001F9BF8(sp_slot, sp_slot, 0x3F800000);
        var_3_31 = arg0 + var_16_10;
        var_2_32 = sp_slot;
        var_4_33 = 2;
loop_4:
        temp_f0_36 = *var_2_32;
        var_4_33 -= 1;
        var_2_32 += 1;
        *var_3_31 = temp_f0_36;
        var_3_31 += 0x10;
        if (var_4_33 >= 0) {
            goto loop_4;
        }
        var_3_4 += 1;
        var_16_10 = var_3_4 * 4;
    } while (var_3_4 < 3);
}
#endif /* NON_MATCHING */
