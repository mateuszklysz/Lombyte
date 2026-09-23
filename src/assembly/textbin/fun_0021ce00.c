#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021ce00/FUN_0021ce00.s", FUN_0021ce00);
#else
#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x20];
    s32 unk20;
    s32 unk24;
    u8 pad_28[0x18];
    s32 unk40;
};

extern s32 D_0015EDE8;
extern s32 D_0015EDEC;
extern s32 D_0015EDF0;
extern s32 func_001F4280();
extern s32 func_001F4398();
extern void func_001F6530(s32, s32, s32, s32, s32);
extern void func_001F6940(s32, s32, s32, s32, s32);
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
    s32 temp_16_175;
    s32 temp_16_47;
    s32 temp_17_21;
    s32 temp_19_23;
    s32 temp_20_24;
    s32 temp_21_52;
    s32 temp_22_38;
    s32 temp_23_49;
    s32 temp_2_36;
    s32 temp_3_151;
    s32 temp_3_85;
    s32 temp_5_28;
    s32 temp_6_88;
    s32 temp_7_152;
    s64 temp_16_37;
    s64 temp_20_116;
    s64 temp_20_63;
    s64 temp_5_112;
    s64 temp_6_183;
    s64 temp_6_32;

    temp_17_21 = (s32) arg0->unk20 >> 1;
    temp_19_23 = (s32) arg0->unk24 >> 2;
    func_001F4280(0);
    temp_20_24 = temp_19_23 - 8;
    sp10 = temp_17_21 - 8;
    temp_5_28 = temp_17_21 + 9;
    temp_6_32 = (0x8020 << 0x10) | 0xFFFF;
    sp14 = temp_17_21 + 7;
    sp18 = temp_5_28;
    temp_16_37 = (arg0->unk40 == 0) ? temp_6_32 : ((0x80FF << 0x10) | 0xA888);
    temp_2_36 = func_001FDD10(0x5212, temp_5_28, temp_6_32);
    temp_22_38 = temp_19_23 - 6;
    sp1C = temp_17_21 + 0x4A;
    temp_16_47 = temp_19_23 * 2;
    temp_23_49 = temp_16_47 - 8;
    sp20 = sp18 * 0x10;
    temp_21_52 = temp_16_47 - 6;
    func_001F6940(sp10, temp_20_24, temp_16_37, temp_2_36, -1);
    temp_20_63 = (0x8020 << 0x10) | 0xFFFF;
    func_00200E08(sp14, temp_20_24, arg0->unk20 - 0x3F, temp_19_23 + 8, (0x8069 << 0x10) | 0x6969, 0);
    func_00200E08(sp18, temp_22_38, arg0->unk20 - 0x41, temp_19_23 + 6, (0x8038 << 0x10) | 0x3838, 0);
    sp30 = temp_17_21 + 8;
    temp_3_85 = (arg0->unk20 - sp1C) * *(s32 *)0x15EDF0;
    sp28 = temp_20_63;
    temp_6_88 = temp_3_85 > -1;
    func_00200958(func_001FF960(0xE99E, 8, temp_6_88, -1), sp20, temp_22_38 * 0x10, (temp_17_21 + (((s32) ((temp_6_88 != 0) ? temp_3_85 : (temp_3_85 + 0x3FF)) >> 0xA) + 8)) * 0x10, (temp_19_23 + 5) * 0x10, 0, 0xA0, 0x1F0, 0x150, 0x80);
    temp_5_112 = (0x80FF << 0x10) | 0xA888;
    temp_20_116 = ((arg0->unk40 ^ 1) != 0) ? temp_5_112 : temp_20_63;
    func_001F6940(sp10, temp_23_49, temp_20_116, func_001FDD10(0x5213, (s32) temp_5_112), -1);
    func_00200E08(sp14, temp_23_49, arg0->unk20 - 0x3F, temp_16_47 + 8, (0x8069 << 0x10) | 0x6969, 0);
    func_00200E08(sp18, temp_21_52, arg0->unk20 - 0x41, temp_16_47 + 6, (0x8038 << 0x10) | 0x3838, 0);
    temp_3_151 = (arg0->unk20 - sp1C) * D_0015EDEC;
    temp_7_152 = temp_3_151 > -1;
    sp34 = temp_7_152;
    func_00200958(func_001FF960(0xE99E, 9, sp1C, temp_7_152), sp20, temp_21_52 * 0x10, (temp_17_21 + (((s32) ((temp_7_152 != 0) ? temp_3_151 : (temp_3_151 + 0x3FF)) >> 0xA) + 8)) * 0x10, (temp_16_47 + 5) * 0x10, 0, 0xA0, 0x1F0, 0x150, 0x80);
    temp_16_175 = (temp_19_23 * 3) - 8;
    temp_6_183 = ((arg0->unk40 ^ 2) != 0) ? ((0x80FF << 0x10) | 0xA888) : sp28;
    sp28 = temp_6_183;
    func_001F6940(sp10, temp_16_175, temp_6_183, func_001FDD10(0x5214), -1);
    func_001F6530(sp30, temp_16_175, (0x80FF << 0x10) | 0xA888, func_001FDD10((*(s32 *)0x15EDE8 == 0) ? 0x5215 : 0x5216), -1);
    func_001F4398();
    return 2;
}
#endif /* NON_MATCHING */
