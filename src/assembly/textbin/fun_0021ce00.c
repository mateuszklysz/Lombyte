/* ROLE: recovered function `DrawSoundMenu` (game/pause.cpp, 0x1a90 bytes) starts here; this unit covers only its first fragment. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 34.0596%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021ce00/FUN_0021ce00.s", FUN_0021ce00);
#else
#include "rnc/assembly_textbin_fun_0021ce00_types.h"
#include "types.h"


extern s32 D_0015EDE8;
extern s32 D_0015EDEC;
extern s32 D_0015EDF0;
extern s32 func_001F4280();
extern s32 func_001F4398();
extern s32 func_001F6530();
extern s32 func_001F6940();
extern s32 func_001FDD10();
extern s32 func_001FF960();
extern s32 func_00200958();
extern s32 func_00200E08();
s32 FUN_0021ce00(struct M2c_arg0 *arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s64 sp28;
    s32 sp30;
    s32 sp34;
    s32 temp_16_177;
    s32 temp_16_49;
    s32 temp_17_23;
    s32 temp_19_25;
    s32 temp_20_26;
    s32 temp_21_54;
    s32 temp_22_40;
    s32 temp_23_51;
    s32 temp_2_38;
    s32 temp_3_153;
    s32 temp_3_87;
    s32 temp_5_30;
    s32 temp_6_90;
    s32 temp_7_154;
    s64 temp_16_39;
    s64 temp_20_118;
    s64 temp_20_65;
    s64 temp_5_114;
    s64 temp_6_185;
    s64 temp_6_34;

    temp_17_23 = (s32) arg0->unk20 >> 1;
    temp_19_25 = (s32) arg0->unk24 >> 2;
    func_001F4280(0);
    temp_20_26 = temp_19_25 - 8;
    sp10 = temp_17_23 - 8;
    temp_5_30 = temp_17_23 + 9;
    temp_6_34 = (0x8020 << 0x10) | 0xFFFF;
    sp14 = temp_17_23 + 7;
    sp18 = temp_5_30;
    temp_16_39 = (arg0->unk40 == 0) ? temp_6_34 : ((0x80FF << 0x10) | 0xA888);
    temp_2_38 = func_001FDD10(0x5212, temp_5_30, temp_6_34);
    temp_22_40 = temp_19_25 - 6;
    sp1C = temp_17_23 + 0x4A;
    temp_16_49 = temp_19_25 * 2;
    temp_23_51 = temp_16_49 - 8;
    sp20 = sp18 * 0x10;
    temp_21_54 = temp_16_49 - 6;
    func_001F6940(sp10, temp_20_26, temp_16_39, temp_2_38, -1);
    temp_20_65 = (0x8020 << 0x10) | 0xFFFF;
    func_00200E08(sp14, temp_20_26, arg0->unk20 - 0x3F, temp_19_25 + 8, (0x8069 << 0x10) | 0x6969, 0);
    func_00200E08(sp18, temp_22_40, arg0->unk20 - 0x41, temp_19_25 + 6, (0x8038 << 0x10) | 0x3838, 0);
    sp30 = temp_17_23 + 8;
    temp_3_87 = (arg0->unk20 - sp1C) * D_0015EDF0;
    sp28 = temp_20_65;
    temp_6_90 = temp_3_87 > -1;
    func_00200958(func_001FF960(0xE99E, 8, temp_6_90, -1), sp20, temp_22_40 * 0x10, (temp_17_23 + (((s32) ((temp_6_90 != 0) ? temp_3_87 : (temp_3_87 + 0x3FF)) >> 0xA) + 8)) * 0x10, (temp_19_25 + 5) * 0x10, 0, 0xA0, 0x1F0, 0x150, 0x80);
    temp_5_114 = (0x80FF << 0x10) | 0xA888;
    temp_20_118 = ((arg0->unk40 ^ 1) != 0) ? temp_5_114 : temp_20_65;
    func_001F6940(sp10, temp_23_51, temp_20_118, func_001FDD10(0x5213, (s32) temp_5_114), -1);
    func_00200E08(sp14, temp_23_51, arg0->unk20 - 0x3F, temp_16_49 + 8, (0x8069 << 0x10) | 0x6969, 0);
    func_00200E08(sp18, temp_21_54, arg0->unk20 - 0x41, temp_16_49 + 6, (0x8038 << 0x10) | 0x3838, 0);
    temp_3_153 = (arg0->unk20 - sp1C) * D_0015EDEC;
    temp_7_154 = temp_3_153 > -1;
    sp34 = temp_7_154;
    func_00200958(func_001FF960(0xE99E, 9, sp1C, temp_7_154), sp20, temp_21_54 * 0x10, (temp_17_23 + (((s32) ((temp_7_154 != 0) ? temp_3_153 : (temp_3_153 + 0x3FF)) >> 0xA) + 8)) * 0x10, (temp_16_49 + 5) * 0x10, 0, 0xA0, 0x1F0, 0x150, 0x80);
    temp_16_177 = (temp_19_25 * 3) - 8;
    temp_6_185 = ((arg0->unk40 ^ 2) != 0) ? ((0x80FF << 0x10) | 0xA888) : sp28;
    sp28 = temp_6_185;
    func_001F6940(sp10, temp_16_177, temp_6_185, func_001FDD10(0x5214), -1);
    func_001F6530(sp30, temp_16_177, (0x80FF << 0x10) | 0xA888, func_001FDD10((D_0015EDE8 == 0) ? 0x5215 : 0x5216), -1);
    func_001F4398();
    return 2;
}
#endif /* NON_MATCHING */
