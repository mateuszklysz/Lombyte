/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00223e28
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 59.7904%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00223e28/FUN_00223e28.s", FUN_00223e28);
#else
#include "rnc/assembly_textbin_fun_00223e28_types.h"
#include "types.h"




extern s32 D_0015ED80;
extern s32 func_001F44B8();
extern s32 func_001F5450();
extern s32 func_001F99A8();
extern s32 func_001FF960();
extern s32 func_00200080();
extern s32 func_00213260();
extern s32 func_00233980();
void FUN_00223e28(struct M2c_arg0 *arg0) {
    s32 temp_16_69;
    s32 temp_18_66;
    s32 temp_19_64;
    s32 temp_21_25;
    s32 temp_22_22;
    s32 temp_23_21;
    s32 temp_30_20;
    s32 var_2_30;
    s64 temp_16_73;
    struct M2c_temp_20_17 *temp_20_17;

    if (arg0 != NULL) {
        temp_20_17 = arg0->unk78;
        if (temp_20_17 != NULL) {
            temp_30_20 = temp_20_17->unk50;
            temp_23_21 = temp_20_17->unk54;
            temp_22_22 = temp_20_17->unk58;
            temp_21_25 = temp_20_17->unk5C;
            if ((temp_30_20 < 0x200) && ((temp_30_20 + temp_22_22) >= 0)) {
                var_2_30 = temp_23_21 < 0x1C1;
                if (D_0015ED80 == 0) {
                    var_2_30 = temp_23_21 < 0x1A1;
                }
                if ((var_2_30 != 0) && ((temp_23_21 + temp_21_25) >= 0)) {
                    func_00233980(8, 0);
                    func_00233980(0x42, (0x8000 << 0x18) | 0x44);
                    func_00200080(func_001FF960(0xE99E, 7), temp_30_20 * 0x10, temp_23_21 * 0x10, temp_22_22 * 0x10, temp_21_25 * 0x10, 0x80);
                    if (temp_20_17->unk48 != 0) {
                        temp_20_17->unk4C = (s32) (temp_20_17->unk4C + 2);
                        temp_19_64 = func_00213260(0xC8);
                        temp_18_66 = func_00213260(0xC8);
                        temp_16_69 = 0x80 - func_001F99A8(temp_20_17->unk4C - 0x80);
                        func_00233980(8, 0);
                        temp_16_73 = temp_16_69 * 2;
                        func_00233980(0x42, (((temp_16_73 < 0x81) ? temp_16_73 : 0x80) << 0x20) | 0x68);
                        func_001F5450(temp_30_20, temp_23_21, temp_22_22, temp_21_25, temp_19_64, temp_18_66, temp_22_22, temp_21_25, 0x808080, func_001F44B8(0x1A));
                        if (temp_20_17->unk4C >= 0x100) {
                            temp_20_17->unk48 = 0;
                        }
                    } else if (func_00213260(0x7D0) == 0) {
                        temp_20_17->unk4C = 0;
                        temp_20_17->unk48 = 1;
                    }
                    func_00233980(8, 0);
                    func_00233980(0x42, (0x8000 << 0x18) | 0x44);
                    func_001F5450(temp_30_20, temp_23_21, temp_22_22, temp_21_25, 0, 0, temp_22_22, (s32) (temp_21_25 * 3) >> 1, 0x50606060, func_001F44B8(0x1C));
                    func_001F5450(temp_30_20 + 1, temp_23_21 + 1, temp_22_22 + ((temp_22_22 >= 0x97) ? 0 : ((temp_22_22 >= 0x4C) ? -1 : -2)), temp_21_25 + ((temp_21_25 >= 0x97) ? 0 : ((temp_21_25 >= 0x4C) ? -1 : -2)), 1, 1, 0x3E, 0x3E, (0x8080 << 0x10) | 0x8080, func_001F44B8(0x19));
                }
            }
        }
    }
}
#endif /* NON_MATCHING */
