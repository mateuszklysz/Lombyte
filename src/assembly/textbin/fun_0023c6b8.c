/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 25.8235%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
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
    s32 temp_2_49;
    s32 temp_2_51;
    s32 temp_2_68;
    s32 temp_2_8;
    s32 temp_3_76;
    s32 temp_4_33;
    s32 temp_5_37;
    s32 temp_5_48;
    s32 temp_5_53;
    register s32 temp_6_7 asm("v1");
    s32 temp_8_16;
    s32 var_10_19;
    s32 var_14_6;
    struct M2c_var_6_23 *var_6_23;

    var_14_6 = 1;
    temp_6_7 = arg0->unk58;
    temp_2_8 = arg0->unk54;
    temp_8_16 = arg0->unk8 << 0xB;
    var_10_19 = (s32) ((arg0->unk5C - temp_6_7) + temp_2_8) % temp_2_8;
    if (temp_6_7 > 0) {
        var_6_23 = arg0->unk50 + (var_10_19 * 0x18);
        if ((var_6_23->unk14 != 0) && (arg1->unk14 != 0)) {
loop_4:
            temp_4_33 = var_6_23->unk10;
            temp_5_37 = arg1->unk10;
            if (((s32) ((temp_4_33 + temp_8_16) - temp_5_37) % temp_8_16) < arg1->unk14) {
                if (temp_8_16 == 0) {
                    M2C_BREAK(0);
                }
                temp_5_48 = var_6_23->unk14;
                temp_2_49 = (temp_5_37 + arg1->unk14) - temp_4_33;
                temp_2_51 = (temp_5_48 < temp_2_49) ? temp_5_48 : temp_2_49;
                temp_5_53 = temp_5_48 - temp_2_51;
                var_6_23->unk14 = temp_5_53;
                var_6_23->unk10 = (s32) ((s32) (temp_4_33 + temp_2_51) % temp_8_16);
                if (temp_5_53 == 0) {
                    if (var_6_23->unk0 >= 0) {
                        var_6_23->unk14 = 0;
                        var_6_23->unk0 = -1;
                        var_6_23->unk8 = -1;
                        var_6_23->unk10 = 0;
                    }
                    temp_2_68 = arg0->unk58 - 1;
                    arg0->unk58 = (s32) ((temp_2_68 <= -1) ? 0 : temp_2_68);
                }
            } else {
                var_14_6 = 0;
            }
            temp_3_76 = arg0->unk54;
            if (temp_3_76 == 0) {
                M2C_BREAK(0);
            }
            var_10_19 = (s32) (var_10_19 + 1) % temp_3_76;
            if (var_14_6 != 0) {
                var_6_23 = arg0->unk50 + (var_10_19 * 0x18);
                if ((var_6_23->unk14 != 0) && (arg1->unk14 != 0)) {
                    goto loop_4;
                }
            }
        }
    }
    return 0;
}
#endif /* NON_MATCHING */
