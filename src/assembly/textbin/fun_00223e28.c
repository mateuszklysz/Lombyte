#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00223e28/FUN_00223e28.s", FUN_00223e28);
#else
#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x78];
    struct M2c_temp_20_15 * unk78;
};

struct M2c_temp_20_15 {
    u8 pad_0[0x48];
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    s32 unk58;
    s32 unk5C;
};

extern s32 D_0015ED80;
extern s32 SubtractIntegerWithClamp();
extern s32 func_001F44B8();
extern void func_001F5450();
extern s32 func_001FF960();
extern void func_00200080();
extern s32 func_00213260();
extern void func_00233980();
void FUN_00223e28(struct M2c_arg0 *arg0) {
    s32 temp_16_67;
    s32 temp_18_64;
    s32 temp_19_62;
    s32 temp_21_23;
    s32 temp_22_20;
    s32 temp_23_19;
    s32 temp_30_18;
    s32 var_2_28;
    s64 temp_16_71;
    struct M2c_temp_20_15 *temp_20_15;

    if (arg0 != NULL) {
        temp_20_15 = arg0->unk78;
        if (temp_20_15 != NULL) {
            temp_30_18 = temp_20_15->unk50;
            temp_23_19 = temp_20_15->unk54;
            temp_22_20 = temp_20_15->unk58;
            temp_21_23 = temp_20_15->unk5C;
            if ((temp_30_18 < 0x200) && ((temp_30_18 + temp_22_20) >= 0)) {
                var_2_28 = temp_23_19 < 0x1C1;
                if (D_0015ED80 == 0) {
                    var_2_28 = temp_23_19 < 0x1A1;
                }
                if ((var_2_28 != 0) && ((temp_23_19 + temp_21_23) >= 0)) {
                    func_00233980(8, 0);
                    func_00233980(0x42, (0x8000 << 0x18) | 0x44);
                    func_00200080(func_001FF960(0xE99E, 7), temp_30_18 * 0x10, temp_23_19 * 0x10, temp_22_20 * 0x10, temp_21_23 * 0x10, 0x80);
                    if (temp_20_15->unk48 != 0) {
                        temp_20_15->unk4C = (s32) (temp_20_15->unk4C + 2);
                        temp_19_62 = func_00213260(0xC8);
                        temp_18_64 = func_00213260(0xC8);
                        temp_16_67 = 0x80 - SubtractIntegerWithClamp(temp_20_15->unk4C - 0x80);
                        func_00233980(8, 0);
                        temp_16_71 = temp_16_67 * 2;
                        func_00233980(0x42, (((temp_16_71 < 0x81) ? temp_16_71 : 0x80) << 0x20) | 0x68);
                        func_001F5450(temp_30_18, temp_23_19, temp_22_20, temp_21_23, temp_19_62, temp_18_64, temp_22_20, temp_21_23, 0x808080, func_001F44B8(0x1A));
                        if (temp_20_15->unk4C >= 0x100) {
                            temp_20_15->unk48 = 0;
                        }
                    } else if (func_00213260(0x7D0) == 0) {
                        temp_20_15->unk4C = 0;
                        temp_20_15->unk48 = 1;
                    }
                    func_00233980(8, 0);
                    func_00233980(0x42, (0x8000 << 0x18) | 0x44);
                    func_001F5450(temp_30_18, temp_23_19, temp_22_20, temp_21_23, 0, 0, temp_22_20, (s32) (temp_21_23 * 3) >> 1, 0x50606060, func_001F44B8(0x1C));
                    func_001F5450(temp_30_18 + 1, temp_23_19 + 1, temp_22_20 + ((temp_22_20 >= 0x97) ? 0 : ((temp_22_20 >= 0x4C) ? -1 : -2)), temp_21_23 + ((temp_21_23 >= 0x97) ? 0 : ((temp_21_23 >= 0x4C) ? -1 : -2)), 1, 1, 0x3E, 0x3E, (0x8080 << 0x10) | 0x8080, func_001F44B8(0x19));
                }
            }
        }
    }
}
#endif /* NON_MATCHING */
