#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fd748/FUN_001fd748.s", FUN_001fd748);
#else
#include "types.h"
struct M2c_D_001A00F0 {
    u8 pad_0[0x224];
    s32 unk224;
};

struct M2c_sp20 {
    s32 unk0;
    s32 unk4;
    u8 pad_8[0x4];
    s32 unkC;
};

extern u8 D_0013DD40[];
extern u8 D_0013DD58[];
extern s32 D_0015ED80;
extern s32 D_0015F438;
extern s32 D_0015F690;
extern struct M2c_D_001A00F0 D_001A00F0;
extern u8 D_001DDD44[];
extern u8 D_001DDE28[];
extern s32 func_001F4280();
extern s32 func_001F4398();
extern s32 func_001F6250();
extern s32 func_001F6530();
extern s32 func_001F96F8();
extern s32 func_001F9B20();
extern s32 func_001FDD10();
extern s32 func_001FF960();
extern s32 func_001FFC30();
extern s32 func_00200258();
extern s32 func_00200C80();
extern s32 func_00200E08();
extern s32 func_00233980();
void FUN_001fd748(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
u8 sp_slot[0xD0];    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    struct M2c_sp20 *sp20;
    s32 *temp_21_165;
    s32 *temp_5_194;
    s32 temp_16_135;
    s32 temp_16_224;
    s32 temp_16_45;
    s32 temp_17_125;
    s32 temp_17_208;
    s32 temp_17_46;
    s32 temp_18_211;
    s32 temp_19_167;
    s32 temp_19_177;
    s32 temp_20_166;
    s32 temp_20_176;
    s32 temp_21_231;
    s32 temp_21_242;
    s32 temp_23_178;
    s32 temp_2_210;
    s32 temp_2_214;
    s32 temp_3_295;
    s32 temp_4_297;
    s32 var_30_107;
    s32 var_5_91;

    sp10 = 1;
    func_001F4280(0);
    sp1C = 0x10;
    func_00233980(0x42, (0x8000 << 0x18) | 0x44);
    func_00233980(0x47, 0x4B);
    func_00200E08(0, 0, 0x200, 0x1C0, 0x8000 << 0x10, 0);
    temp_16_45 = (arg1 - arg0) * 0x10;
    temp_17_46 = (arg3 - arg2) * 0x10;
    func_00200258(func_001FF960(0xE99A, 0xE), 0, 0, temp_16_45, temp_17_46, 0, 0, 0x80);
    func_00233980(8, 0);
    func_00200258(func_001FF960(0xE99A, 0xF), 0, 0, temp_16_45, temp_17_46, *(s32 *)0x15F438 & 0xFFF, 0, 0x80);
    func_00233980(8, 5);
    sp20 = D_001DDE28 + 0x10;
loop_1:
    if (sp20->unk0 == 0) {
        goto block_13;
    }
    var_5_91 = 3;
    if (*(sp10 + D_0013DD58) != 0) {
        goto block_4;
    }
    var_5_91 = (*(sp10 + D_0013DD40) == 0) ? 0 : 2;
block_4:
    if (var_5_91 == 0) {
        goto block_13;
    }
    sp14 = sp20->unk0;
    var_30_107 = sp20->unk4;
    if (*(s32 *)0x15ED80 == 0) {
        goto block_7;
    }
    var_30_107 = (s32) (var_30_107 * 0x1C0) / 416;
block_7:
    if (var_5_91 == 3) {
        goto block_10;
    }
    if (var_5_91 != 2) {
        goto block_11;
    }
    temp_17_125 = func_001F96F8(0x16, var_5_91);
    temp_16_135 = (s32) *(s32 *)0x15F438 % (s32) (temp_17_125 + func_001F96F8(8));
    if (temp_16_135 >= func_001F96F8(0x16)) {
        goto block_11;
    }
block_10:
    func_001FFC30(func_001FF960(0xE99A, 0xC), sp14 - 5, var_30_107 - 5, 0xA, 0xA, 0x80);
block_11:
    if (sp10 != D_001A00F0.unk224) {
        goto block_14;
    }
    temp_21_165 = sp1C + (D_001DDE28 + 8);
    temp_20_166 = sp20->unkC;
    temp_19_167 = *temp_21_165;
    temp_20_176 = var_30_107 + temp_20_166;
    temp_19_177 = sp14 + temp_19_167;
    temp_23_178 = temp_20_176 + 1;
    sp18 = temp_19_177 + 1;
    func_001F9B20(sp_slot, (f32) temp_19_167, (f32) temp_20_166);
    temp_5_194 = D_001DDD44 + (sp10 * 0xC);
    temp_17_208 = temp_19_177 + ((s32) ((sp14 - temp_19_177) * 0x4479E0C0) / 1148846080);
    temp_18_211 = temp_20_176 + ((s32) ((var_30_107 - temp_20_176) * 0x4479E0C0) / 1148846080);
    temp_2_210 = func_001FDD10(*temp_5_194, temp_5_194);
    temp_2_214 = func_001F6250(temp_2_210, -1);
    temp_16_224 = (*temp_21_165 <= -1) ? (temp_19_177 - temp_2_214) : (temp_19_177 + temp_2_214);
    temp_21_231 = temp_16_224;
    func_00200C80(temp_17_208 + 1, temp_18_211 + 1, sp18, temp_23_178, 0x8000 << 0x10, 0);
    func_00200C80(sp18, temp_23_178, temp_16_224 + 1, temp_23_178, 0x8000 << 0x10, 0);
    temp_21_242 = (temp_16_224 >= temp_19_177) ? temp_19_177 : temp_21_231;
    func_001F6530(temp_21_242 + 1, (temp_20_176 - D_0015F690) + 1, 0x8000 << 0x10, temp_2_210, -1);
    func_00200C80(temp_17_208, temp_18_211, temp_19_177, temp_20_176, (0x80F0 << 0x10) | 0xF0F0, 0);
    func_00200C80(temp_19_177, temp_20_176, temp_16_224, temp_20_176, (0x80F0 << 0x10) | 0xF0F0, 0);
    func_001F6530(temp_21_242, temp_20_176 - D_0015F690, (0x80F0 << 0x10) | 0xF0F0, temp_2_210, -1);
    func_001FFC30(func_001FF960(0xE99A, 0xD), sp14 - 0xA, var_30_107 - 0xA, 0x14, 0x14, 0x80);
block_13:
block_14:
    temp_3_295 = sp10 + 1;
    sp20 += 0x10;
    temp_4_297 = sp1C + 0x10;
    sp10 = temp_3_295;
    sp1C = temp_4_297;
    if (temp_3_295 < 0x14) {
        goto loop_1;
    }
    func_001F4398(temp_4_297);
    return;
}
#endif /* NON_MATCHING */
