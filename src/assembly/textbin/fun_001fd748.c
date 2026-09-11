/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001fd748
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fd748/FUN_001fd748.s", FUN_001fd748);
#else
#include "rnc/assembly_textbin_fun_001fd748_types.h"
#include "types.h"




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
    s32 *temp_21_167;
    s32 *temp_5_196;
    s32 temp_16_137;
    s32 temp_16_226;
    s32 temp_16_47;
    s32 temp_17_127;
    s32 temp_17_210;
    s32 temp_17_48;
    s32 temp_18_213;
    s32 temp_19_169;
    s32 temp_19_179;
    s32 temp_20_168;
    s32 temp_20_178;
    s32 temp_21_233;
    s32 temp_21_244;
    s32 temp_23_180;
    s32 temp_2_212;
    s32 temp_2_216;
    s32 temp_3_297;
    s32 temp_4_299;
    s32 var_30_109;
    s32 var_5_93;

    sp10 = 1;
    func_001F4280(0);
    sp1C = 0x10;
    func_00233980(0x42, (0x8000 << 0x18) | 0x44);
    func_00233980(0x47, 0x4B);
    func_00200E08(0, 0, 0x200, 0x1C0, 0x8000 << 0x10, 0);
    temp_16_47 = (arg1 - arg0) * 0x10;
    temp_17_48 = (arg3 - arg2) * 0x10;
    func_00200258(func_001FF960(0xE99A, 0xE), 0, 0, temp_16_47, temp_17_48, 0, 0, 0x80);
    func_00233980(8, 0);
    func_00200258(func_001FF960(0xE99A, 0xF), 0, 0, temp_16_47, temp_17_48, D_0015F438 & 0xFFF, 0, 0x80);
    func_00233980(8, 5);
    sp20 = D_001DDE28 + 0x10;
loop_1:
    if (sp20->unk0 == 0) {
        goto block_13;
    }
    var_5_93 = 3;
    if (*(sp10 + D_0013DD58) != 0) {
        goto block_4;
    }
    var_5_93 = (*(sp10 + D_0013DD40) == 0) ? 0 : 2;
block_4:
    if (var_5_93 == 0) {
        goto block_13;
    }
    sp14 = sp20->unk0;
    var_30_109 = sp20->unk4;
    if (D_0015ED80 == 0) {
        goto block_7;
    }
    var_30_109 = (s32) (var_30_109 * 0x1C0) / 416;
block_7:
    if (var_5_93 == 3) {
        goto block_10;
    }
    if (var_5_93 != 2) {
        goto block_11;
    }
    temp_17_127 = func_001F96F8(0x16, var_5_93);
    temp_16_137 = (s32) D_0015F438 % (s32) (temp_17_127 + func_001F96F8(8));
    if (temp_16_137 >= func_001F96F8(0x16)) {
        goto block_11;
    }
block_10:
    func_001FFC30(func_001FF960(0xE99A, 0xC), sp14 - 5, var_30_109 - 5, 0xA, 0xA, 0x80);
block_11:
    if (sp10 != D_001A00F0.unk224) {
        goto block_14;
    }
    temp_21_167 = sp1C + (D_001DDE28 + 8);
    temp_20_168 = sp20->unkC;
    temp_19_169 = *temp_21_167;
    temp_20_178 = var_30_109 + temp_20_168;
    temp_19_179 = sp14 + temp_19_169;
    temp_23_180 = temp_20_178 + 1;
    sp18 = temp_19_179 + 1;
    func_001F9B20(sp_slot, (f32) temp_19_169, (f32) temp_20_168);
    temp_5_196 = D_001DDD44 + (sp10 * 0xC);
    temp_17_210 = temp_19_179 + ((s32) ((sp14 - temp_19_179) * 0x4479E0C0) / 1148846080);
    temp_18_213 = temp_20_178 + ((s32) ((var_30_109 - temp_20_178) * 0x4479E0C0) / 1148846080);
    temp_2_212 = func_001FDD10(*temp_5_196, temp_5_196);
    temp_2_216 = func_001F6250(temp_2_212, -1);
    temp_16_226 = (*temp_21_167 <= -1) ? (temp_19_179 - temp_2_216) : (temp_19_179 + temp_2_216);
    temp_21_233 = temp_16_226;
    func_00200C80(temp_17_210 + 1, temp_18_213 + 1, sp18, temp_23_180, 0x8000 << 0x10, 0);
    func_00200C80(sp18, temp_23_180, temp_16_226 + 1, temp_23_180, 0x8000 << 0x10, 0);
    temp_21_244 = (temp_16_226 >= temp_19_179) ? temp_19_179 : temp_21_233;
    func_001F6530(temp_21_244 + 1, (temp_20_178 - D_0015F690) + 1, 0x8000 << 0x10, temp_2_212, -1);
    func_00200C80(temp_17_210, temp_18_213, temp_19_179, temp_20_178, (0x80F0 << 0x10) | 0xF0F0, 0);
    func_00200C80(temp_19_179, temp_20_178, temp_16_226, temp_20_178, (0x80F0 << 0x10) | 0xF0F0, 0);
    func_001F6530(temp_21_244, temp_20_178 - D_0015F690, (0x80F0 << 0x10) | 0xF0F0, temp_2_212, -1);
    func_001FFC30(func_001FF960(0xE99A, 0xD), sp14 - 0xA, var_30_109 - 0xA, 0x14, 0x14, 0x80);
block_13:
block_14:
    temp_3_297 = sp10 + 1;
    sp20 += 0x10;
    temp_4_299 = sp1C + 0x10;
    sp10 = temp_3_297;
    sp1C = temp_4_299;
    if (temp_3_297 < 0x14) {
        goto loop_1;
    }
    func_001F4398(temp_4_299);
    return;
}
#endif /* NON_MATCHING */
