/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 25.7647%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023c6b8/FUN_0023c6b8.s", FUN_0023c6b8);
#else
#include "rnc/assembly_textbin_fun_0023c6b8_types.h"
#include "types.h"






s32 FUN_0023c6b8(struct M2c_arg0 *arg0, struct M2c_arg1 *arg1) {
    s32 temp_2_10;
    s32 temp_2_51;
    s32 temp_2_53;
    s32 temp_2_70;
    s32 temp_3_78;
    s32 temp_4_35;
    s32 temp_5_39;
    s32 temp_5_50;
    s32 temp_5_55;
    s32 temp_6_9;
    s32 temp_8_18;
    s32 var_10_21;
    s32 var_14_8;
    struct M2c_var_6_25 *var_6_25;

    var_14_8 = 1;
    temp_6_9 = arg0->unk58;
    temp_2_10 = arg0->unk54;
    temp_8_18 = arg0->unk8 << 0xB;
    var_10_21 = (s32) ((arg0->unk5C - temp_6_9) + temp_2_10) % temp_2_10;
    if (temp_6_9 > 0) {
        var_6_25 = arg0->unk50 + (var_10_21 * 0x18);
        if ((var_6_25->unk14 != 0) && (arg1->unk14 != 0)) {
loop_4:
            temp_4_35 = var_6_25->unk10;
            temp_5_39 = arg1->unk10;
            if (((s32) ((temp_4_35 + temp_8_18) - temp_5_39) % temp_8_18) < arg1->unk14) {
                if (temp_8_18 == 0) {
                    M2C_BREAK(0);
                }
                temp_5_50 = var_6_25->unk14;
                temp_2_51 = (temp_5_39 + arg1->unk14) - temp_4_35;
                temp_2_53 = (temp_5_50 < temp_2_51) ? temp_5_50 : temp_2_51;
                temp_5_55 = temp_5_50 - temp_2_53;
                var_6_25->unk14 = temp_5_55;
                var_6_25->unk10 = (s32) ((s32) (temp_4_35 + temp_2_53) % temp_8_18);
                if (temp_5_55 == 0) {
                    if (var_6_25->unk0 >= 0) {
                        var_6_25->unk14 = 0;
                        var_6_25->unk0 = -1;
                        var_6_25->unk8 = -1;
                        var_6_25->unk10 = 0;
                    }
                    temp_2_70 = arg0->unk58 - 1;
                    arg0->unk58 = (s32) ((temp_2_70 <= -1) ? 0 : temp_2_70);
                }
            } else {
                var_14_8 = 0;
            }
            temp_3_78 = arg0->unk54;
            if (temp_3_78 == 0) {
                M2C_BREAK(0);
            }
            var_10_21 = (s32) (var_10_21 + 1) % temp_3_78;
            if (var_14_8 != 0) {
                var_6_25 = arg0->unk50 + (var_10_21 * 0x18);
                if ((var_6_25->unk14 != 0) && (arg1->unk14 != 0)) {
                    goto loop_4;
                }
            }
        }
    }
    return 0;
}
#endif /* NON_MATCHING */
