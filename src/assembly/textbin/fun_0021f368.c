/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 46.9018%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021f368/FUN_0021f368.s", FUN_0021f368);
#else
#include "rnc/assembly_textbin_fun_0021f368_types.h"
#include "types.h"


extern s32 D_0015ED84;
extern s32 func_001F4280();
extern s32 func_001F4398();
extern s32 func_001F61E8();
extern s32 func_001F61F8();
extern s32 func_001F6270();
extern s32 func_001F65B0();
extern s32 func_001FDD10();
extern s32 func_00233980();
s32 FUN_0021f368(struct M2c_arg0 *arg0) {
    s32 temp_16_119;
    s32 temp_16_128;
    s32 temp_16_139;
    s32 temp_16_24;
    s32 temp_16_54;
    s32 temp_16_62;
    s32 temp_18_74;
    s32 temp_18_78;
    s32 temp_2_48;
    s32 temp_2_56;
    s32 temp_2_64;
    s32 temp_6_71;
    s32 temp_lo_83;
    s32 var_16_35;
    s32 var_16_90;
    s32 var_2_80;
    s32 var_5_30;

    func_00233980(0x42, 0x44);
    func_00233980(0x47, 0xB);
    func_001F4280(0);
    temp_16_24 = func_001F6270(func_001FDD10(0x4EEE), -1);
    var_5_30 = func_001F6270(func_001FDD10(0x4EFA), -1);
    var_16_35 = (var_5_30 >= temp_16_24) ? var_5_30 : temp_16_24;
    if (D_0015ED84 != 0) {
        var_5_30 = func_001F6270(func_001FDD10(0x4EEF, var_5_30), -1);
        var_16_35 = (var_5_30 >= var_16_35) ? var_5_30 : var_16_35;
    }
    temp_2_48 = func_001F6270(func_001FDD10(0x4EFB, var_5_30), -1);
    temp_16_54 = (temp_2_48 >= var_16_35) ? temp_2_48 : var_16_35;
    temp_2_56 = func_001F6270(func_001FDD10(0x4EFC, temp_2_48), -1);
    temp_16_62 = (temp_2_56 >= temp_16_54) ? temp_2_56 : temp_16_54;
    temp_2_64 = func_001F6270(func_001FDD10(0x4EE0, temp_2_56), -1);
    temp_6_71 = arg0->unk24;
    temp_18_74 = (s32) (arg0->unk20 - ((temp_2_64 >= temp_16_62) ? temp_2_64 : temp_16_62)) >> 1;
    temp_18_78 = (temp_18_74 <= 1) ? 2 : temp_18_74;
    var_2_80 = 6;
    if (D_0015ED84 != 0) {
        var_2_80 = 7;
    }
    temp_lo_83 = temp_6_71 / var_2_80;
    func_001F61F8(D_0015ED84, 2, temp_6_71);
    var_16_90 = temp_lo_83 - 6;
    func_001F65B0(temp_18_78, var_16_90, (0x80FF << 0x10) | 0xA888, func_001FDD10(0x4EEE), -1);
    if (D_0015ED84 != 0) {
        var_16_90 += temp_lo_83;
        func_001F65B0(temp_18_78, var_16_90, (0x80FF << 0x10) | 0xA888, func_001FDD10(0x4EEF), -1);
    }
    temp_16_119 = var_16_90 + temp_lo_83;
    temp_16_128 = temp_16_119 + temp_lo_83;
    func_001F65B0(temp_18_78, temp_16_119, (0x80FF << 0x10) | 0xA888, func_001FDD10(0x4EFA), -1);
    temp_16_139 = temp_16_128 + temp_lo_83;
    func_001F65B0(temp_18_78, temp_16_128, (0x80FF << 0x10) | 0xA888, func_001FDD10(0x4EFB), -1);
    func_001F65B0(temp_18_78, temp_16_139, (0x80FF << 0x10) | 0xA888, func_001FDD10(0x4EFC), -1);
    func_001F65B0(temp_18_78, temp_16_139 + temp_lo_83, (0x80FF << 0x10) | 0xA888, func_001FDD10(0x4EE0), -1);
    func_001F61E8();
    func_001F4398();
    return 2;
}
#endif /* NON_MATCHING */
