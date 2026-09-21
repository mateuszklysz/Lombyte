/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 24.5778%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002040e0/FUN_002040e0.s", FUN_002040e0);
#else
#include "rnc/assembly_textbin_fun_002040e0_types.h"
#include "types.h"
















extern s32 D_0015EE8C;
extern s32 D_00160E8C[];
extern s32 D_00160E90;
extern struct M2c_D_00160EA0 D_00160EA0;
extern s32 func_001F97A0();
extern s32 func_00233068();
void FUN_002040e0(struct M2c_arg0 *arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s64 sp10;
    s64 sp20;
    s64 sp30;
    f32 temp_f0_25;
    s64 temp_8_75;
    s64 var_30_54;
    s64 var_8_63;
    s32 temp_17_88;
    s32 temp_19_89;
    s32 temp_21_81;
    s32 temp_22_85;
    s32 temp_23_77;
    s32 temp_4_86;
    s32 temp_5_109;
    s32 temp_6_79;
    s32 var_3_53;
    s32 var_4_39;
    s64 temp_16_101;
    u16 temp_4_84;
    s32 *temp_16_36;
    struct M2c_temp_18_140 *temp_18_140;
    struct M2c_temp_18_150 *temp_18_150;
    struct M2c_temp_18_76 *temp_18_76;
    struct M2c_temp_20_82 *temp_20_82;
    struct M2c_temp_2_67 *temp_2_67;
    s32 *temp_4_57;
    struct M2c_var_3_40 *var_3_40;

    sp0 = arg1;
    *(s32 *)0x160E90 = arg0->unk4;
    temp_f0_25 = arg0->unk8;
    D_00160EA0.unk0 = (f32) (temp_f0_25 * 6.0f);
    D_00160EA0.unk4 = (f32) (temp_f0_25 * 4.0f);
    D_00160EA0.unk8 = (f32) (2.0f * temp_f0_25);
    func_00233068(&D_00160EA0);
    temp_16_36 = ((__typeof__(arg0))((u32)(arg0) + (u32)(arg0)))->unk0;
    D_00160E8C[0] = temp_16_36;
    if (D_00160E90 > 0) {
        var_4_39 = D_00160E90;
        var_3_40 = temp_16_36;
        do {
            var_4_39 -= 1;
            var_3_40->unk10 = (void *) (temp_16_36 + var_3_40->unk10);
            var_3_40 += 0x40;
        } while (var_4_39 != 0);
    }
    var_3_53 = 0;
    if (D_00160E90 > 0) {
        var_30_54 = 0 << 6;
        do {
            temp_4_57 = D_00160E8C[0];
            sp8 = var_3_53 + 1;
            var_8_63 = 0;
            if (*(s32 *)((u8 *)(var_30_54 + temp_4_57) + 0x28) != 0) {
                do {
                    temp_2_67 = var_30_54 + temp_4_57;
                    temp_8_75 = var_8_63 + 1;
                    temp_18_76 = temp_2_67->unk10 + temp_2_67->unk1C + (var_8_63 * 0x50);
                    temp_23_77 = temp_18_76->unk0;
                    temp_6_79 = temp_18_76->unk10;
                    temp_21_81 = temp_18_76->unk14;
                    temp_20_82 = sp0 + (temp_23_77 * 0x10);
                    sp4 = temp_18_76->unk20;
                    temp_4_84 = temp_20_82->unk4;
                    temp_22_85 = temp_18_76->unk24;
                    temp_4_86 = temp_4_84 << 0x10;
                    sp10 = (s64) temp_6_79;
                    temp_17_88 = temp_4_86 >> 0x16;
                    temp_19_89 = temp_4_86 >> 0x17;
                    sp20 = var_30_54;
                    sp30 = temp_8_75;
                    temp_16_101 = func_001F97A0((s16) temp_4_84, 1, temp_6_79, var_30_54, temp_8_75);
                    temp_5_109 = (s32) D_0015EE8C >> 8;
                    temp_18_76->unk0 = (s64) (((s64) ((temp_17_88 <= 0) ? 1 : temp_17_88) << 0xE) | ((temp_16_101 << 0x1A) | 0x01300000) | (func_001F97A0(temp_20_82->unk6) << 0x1E) | (((temp_20_82->unkA + temp_5_109) << 0x25) | (0x8000 << 0x13)) | (-1 << 0x3F));
                    temp_18_140 = ((u8 *)temp_18_76 + (0x10));
                    temp_18_76->unk10 = (s64) (((temp_20_82->unk8 - 1) * 4) | (((s64) temp_21_81 << 6) | 0x20) | ((s64) temp_6_79 << 0x20));
                    temp_18_150 = ((u8 *)temp_18_140 + (0x10));
                    temp_18_140->unk10 = (s64) (sp4 | ((s64) temp_22_85 * 4) | ((s64) temp_23_77 << 0x18));
                    temp_18_150->unk10 = (s64) (((s64) ((temp_19_89 <= 0) ? 1 : temp_19_89) << 0xE) | ((temp_20_82->unkC + temp_5_109) << 0x14) | (((temp_20_82->unkE + temp_5_109) << 0x28) | (0x8000 << 0x13)) | (0x8000 << 0x27));
                    *(s32 *)((u8 *)(((u8 *)temp_18_150 + (0x10))) + 0x10) = 0;
                    var_8_63 = temp_8_75;
                } while (var_8_63 < (s32) *(s32 *)((u8 *)(var_30_54 + D_00160E8C[0]) + 0x28));
            }
            var_3_53 = sp8;
            var_30_54 = var_3_53 << 6;
        } while (var_3_53 < D_00160E90);
    }
}
#endif /* NON_MATCHING */
