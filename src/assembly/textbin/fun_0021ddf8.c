/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 57.3289%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021ddf8/FUN_0021ddf8.s", FUN_0021ddf8);
#else
#include "rnc/assembly_textbin_fun_0021ddf8_types.h"
#include "types.h"








extern u8 D_001D5020[];
extern s32 func_0020D330();
s32 FUN_0021ddf8(struct M2c_arg0 *arg0) {
    s32 *var_2_62;
    s32 temp_4_14;
    s32 var_17_8;
    u32 var_3_31;
    u8 temp_3_63;
    struct M2c_temp_2_37 *temp_2_37;
    struct M2c_temp_5_54 *temp_5_54;
    s32 *var_3_11;

    var_17_8 = 0;
    var_3_11 = ((u8 *)arg0 + (0x44));
    do {
        temp_4_14 = var_17_8 * 4;
        if ((*(s32 *)((u8 *)var_3_11 + temp_4_14) != 0) && ((*(s32 *)((u8 *)arg0 + var_17_8 + 0xA4)) == 0) && (*(temp_4_14 + D_001D5020) != 0)) {
            var_3_31 = var_17_8 - 1;
            if ((var_17_8 == 7) && (var_3_31 = var_17_8 - 1, (arg0->unk60->unkA6 == 0x4A))) {
                temp_2_37 = arg0->unk44;
                if (temp_2_37->unk52 == temp_2_37->unk53) {
                    var_3_31 = var_17_8 - 1;
                    goto block_8;
                }
            } else {
block_8:
                switch (var_3_31) {
                case 0:
                case 1:
                case 2:
                case 4:
                case 5:
                case 9:
                case 10:
                case 11:
                    temp_5_54 = arg0->unk44;
                    var_2_62 = var_3_11 + temp_4_14;
                    if (((temp_5_54->unk50 & (0xFFFF << 0x10)) == (0x9999 << 0x10)) && (temp_3_63 = (u8) temp_5_54->unk50, var_2_62 = var_3_11 + temp_4_14, ((temp_3_63 < 0x4DU) == 0))) {
                        if (temp_3_63 >= 0x92U) {
                        default:
                            var_2_62 = var_3_11 + temp_4_14;
                            goto block_14;
                        }
                    } else {
block_14:
                        func_0020D330(*var_2_62, 1, temp_4_14, var_3_11);
                    }
                    break;
                }
            }
        }
        var_17_8 += 1;
        var_3_11 = ((u8 *)arg0 + (0x44));
    } while (var_17_8 < 0x18);
    return 4;
}
#endif /* NON_MATCHING */
