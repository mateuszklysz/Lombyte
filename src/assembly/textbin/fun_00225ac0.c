/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 75.6235%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00225ac0/FUN_00225ac0.s", FUN_00225ac0);
#else
#include "rnc/assembly_textbin_fun_00225ac0_types.h"
#include "types.h"










extern struct M2c_D_001D5BF0 D_001D5BF0;
extern u8 D_001D60B8[];
void FUN_00225ac0(s32 arg0) {
    struct M2c_var_2_25 *var_2_25;
    s32 temp_6_59;
    s32 temp_9_22;
    s32 var_10_13;
    s32 var_2_11;
    s32 var_2_62;
    s32 var_4_20;
    s32 var_4_26;
    s32 var_4_47;
    s32 var_4_70;
    s32 var_5_10;
    s32 var_7_9;
    s32 var_8_7;
    struct M2c_var_3_46 *var_3_46;
    struct M2c_var_3_67 *var_3_67;
    struct M2c_var_3_87 *var_3_87;

    var_8_7 = D_001D5BF0.unk10C;
    var_7_9 = D_001D5BF0.unk108;
    if (arg0 == 0) {
        var_5_10 = 1;
        var_2_11 = 0;
        var_10_13 = 0;
    } else {
        var_5_10 = 2;
        var_2_11 = 1;
        var_10_13 = 2;
    }
    var_4_20 = 0;
    temp_9_22 = var_5_10 + var_2_11;
    if (var_5_10 > 0) {
        var_2_25 = D_001D60B8;
        var_4_26 = var_5_10;
        do {
            var_2_25->unk0 = var_7_9;
            var_4_26 -= 1;
            var_2_25->unk4 = 0;
            var_7_9 += 0x11800;
            var_2_25 += 8;
        } while (var_4_26 != 0);
        var_4_20 = var_5_10;
    }
    if (var_4_20 < temp_9_22) {
        var_3_46 = (var_4_20 * 8) + D_001D60B8;
        var_4_47 = temp_9_22 - var_4_20;
        do {
            var_3_46->unk0 = var_8_7;
            var_4_47 -= 1;
            var_3_46->unk4 = 0;
            var_8_7 += 0x11800;
            var_3_46 += 8;
        } while (var_4_47 != 0);
        var_4_20 = temp_9_22;
    }
    temp_6_59 = temp_9_22 + var_10_13;
    var_2_62 = var_4_20 < 5;
    if (var_4_20 < temp_6_59) {
        var_3_67 = (var_4_20 * 8) + D_001D60B8;
        var_4_70 = temp_6_59 - var_4_20;
        do {
            var_3_67->unk0 = var_7_9;
            var_4_70 -= 1;
            var_3_67->unk4 = 1;
            var_7_9 += 0x4F000;
            var_3_67 += 8;
        } while (var_4_70 != 0);
        var_4_20 = temp_6_59;
        var_2_62 = var_4_20 < 5;
    }
    if (var_2_62 != 0) {
        var_3_87 = (var_4_20 * 8) + D_001D60B8;
        do {
            var_3_87->unk4 = 0;
            var_4_20 += 1;
            var_3_87->unk0 = 0;
            var_3_87 += 8;
        } while (var_4_20 < 5);
    }
}
#endif /* NON_MATCHING */
