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
    s32 *var_2_60;
    s32 temp_4_12;
    s32 var_17_6;
    u32 var_3_29;
    u8 temp_3_61;
    struct M2c_temp_2_35 *temp_2_35;
    struct M2c_temp_5_52 *temp_5_52;
    s32 *var_3_9;

    var_17_6 = 0;
    var_3_9 = ((u8 *)arg0 + (0x44));
    do {
        temp_4_12 = var_17_6 * 4;
        if ((*(s32 *)((u8 *)var_3_9 + temp_4_12) != 0) && ((*(s32 *)((u8 *)arg0 + var_17_6 + 0xA4)) == 0) && (*(temp_4_12 + D_001D5020) != 0)) {
            var_3_29 = var_17_6 - 1;
            if ((var_17_6 == 7) && (var_3_29 = var_17_6 - 1, (arg0->unk60->unkA6 == 0x4A))) {
                temp_2_35 = arg0->unk44;
                if (temp_2_35->unk52 == temp_2_35->unk53) {
                    var_3_29 = var_17_6 - 1;
                    goto block_8;
                }
            } else {
block_8:
                switch (var_3_29) {
                case 0:
                case 1:
                case 2:
                case 4:
                case 5:
                case 9:
                case 10:
                case 11:
                    temp_5_52 = arg0->unk44;
                    var_2_60 = var_3_9 + temp_4_12;
                    if (((temp_5_52->unk50 & (0xFFFF << 0x10)) == (0x9999 << 0x10)) && (temp_3_61 = (u8) temp_5_52->unk50, var_2_60 = var_3_9 + temp_4_12, ((temp_3_61 < 0x4DU) == 0))) {
                        if (temp_3_61 >= 0x92U) {
                        default:
                            var_2_60 = var_3_9 + temp_4_12;
                            goto block_14;
                        }
                    } else {
block_14:
                        func_0020D330(*var_2_60, 1, temp_4_12, var_3_9);
                    }
                    break;
                }
            }
        }
        var_17_6 += 1;
        var_3_9 = ((u8 *)arg0 + (0x44));
    } while (var_17_6 < 0x18);
    return 4;
}
#endif /* NON_MATCHING */
