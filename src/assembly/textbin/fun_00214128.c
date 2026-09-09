/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 42.7660%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00214128/FUN_00214128.s", FUN_00214128);
#else
#include "types.h"
extern s32 func_001F9BF8();
void FUN_00214128(s32 arg0) {
u8 sp_slot[0x50];    f32 *var_2_17;
    f32 *var_2_34;
    f32 *var_3_16;
    f32 *var_3_33;
    f32 temp_f0_21;
    f32 temp_f0_38;
    s32 var_16_12;
    s32 var_3_6;
    s32 var_4_18;
    s32 var_4_35;

    var_3_6 = 0;
    var_16_12 = 0 * 4;
    do {
        var_3_16 = sp_slot;
        var_2_17 = arg0 + var_16_12;
        var_4_18 = 2;
loop_2:
        temp_f0_21 = *var_2_17;
        var_4_18 -= 1;
        var_2_17 += 0x10;
        *var_3_16 = temp_f0_21;
        var_3_16 += 4;
        if (var_4_18 >= 0) {
            goto loop_2;
        }
        func_001F9BF8(sp_slot, sp_slot, 0x3F800000);
        var_3_33 = arg0 + var_16_12;
        var_2_34 = sp_slot;
        var_4_35 = 2;
loop_4:
        temp_f0_38 = *var_2_34;
        var_4_35 -= 1;
        var_2_34 += 4;
        *var_3_33 = temp_f0_38;
        var_3_33 += 0x10;
        if (var_4_35 >= 0) {
            goto loop_4;
        }
        var_3_6 += 1;
        var_16_12 = var_3_6 * 4;
    } while (var_3_6 < 3);
}
#endif /* NON_MATCHING */
