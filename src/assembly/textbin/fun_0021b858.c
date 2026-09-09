/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 79.9761%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021b858/FUN_0021b858.s", FUN_0021b858);
#else
#include "rnc/assembly_textbin_fun_0021b858_types.h"
#include "types.h"
















extern struct M2c_D_0013C940 D_0013C940;
extern u8 D_0013D4C0[];
extern struct M2c_D_0013F350 D_0013F350;
extern u8 D_001863D0[];
extern struct M2c_D_001D5BF0 D_001D5BF0;
extern s32 func_001E9468();
extern s32 func_0022DA68();
s32 FUN_0021b858(struct M2c_arg0 *arg0, s32 arg3, s32 *arg4, s32 arg6) {
    s32 *var_8_0;
    s16 temp_4_310;
    s16 temp_4_342;
    s16 temp_5_330;
    s32 *temp_4_331;
    s32 temp_11_46;
    s32 temp_12_74;
    s32 temp_13_49;
    s32 temp_15_55;
    s32 temp_16_326;
    s32 temp_2_354;
    s32 temp_2_37;
    s32 temp_3_362;
    s32 temp_4_76;
    s32 temp_6_107;
    s32 temp_6_192;
    s32 temp_lo_53;
    s32 var_10_0;
    s32 var_2_106;
    s32 var_2_148;
    s32 var_2_188;
    s32 var_2_233;
    s32 var_2_263;
    s32 var_2_62;
    s32 var_3_103;
    s32 var_3_159;
    s32 var_3_73;
    s32 var_6_60;
    s32 var_7_0;
    s32 var_9_57;
    struct M2c_temp_17_309 *temp_17_309;
    s32 *temp_4_230;
    s32 *temp_4_260;
    struct M2c_var_5_156 *var_5_156;
    struct M2c_var_5_70 *var_5_70;

    var_7_0 = arg3;
    var_8_0 = arg4;
    var_10_0 = arg6;
    if (D_001D5BF0.unk4->unk40 != arg0) {
        goto block_101;
    }
    if (!(D_0013C940.unk1C4 & 0xD00)) {
        goto block_4;
    }
    if (D_001D5BF0.unk124 != 0) {
        goto block_4;
    }
    return 1;
block_4:
    if (!(D_0013C940.unk1C4 & 0x10)) {
        goto block_10;
    }
    temp_2_37 = D_001D5BF0.unk4->unk38;
    if (temp_2_37 == 0) {
        goto block_7;
    }
    D_001D5BF0.unk8 = temp_2_37;
    goto block_10;
block_7:
    if (D_001D5BF0.unk124 != 0) {
        goto block_10;
    }
    return -1;
block_10:
    temp_11_46 = arg0->unk44;
    temp_13_49 = arg0->unk3C;
    temp_lo_53 = temp_13_49 / temp_11_46;
    temp_15_55 = arg0->unk40;
    var_9_57 = temp_13_49 % temp_11_46;
    var_6_60 = var_9_57;
    if (!(D_0013C940.unk1C4 & 0x1000)) {
        goto block_33;
    }
    var_2_62 = temp_13_49 - temp_11_46;
    if (temp_lo_53 != 0) {
        goto block_32;
    }
    if (arg0->unk4C == NULL) {
        goto block_30;
    }
    var_8_0 = &D_001D5BF0;
    var_10_0 = D_001D5BF0.unk134;
    var_5_70 = arg0->unk4C;
loop_14:
    var_3_73 = 0;
    temp_12_74 = var_5_70->unk40;
    temp_4_76 = var_5_70->unk44;
    if (var_10_0 == 0) {
        goto block_16;
    }
    var_3_73 = !(var_5_70->unk30 & 8) ? 0 : 1;
block_16:
    if (D_001D5BF0.unk138 == 0) {
        goto block_18;
    }
    var_3_73 = (var_5_70->unk30 & 4) ? 1 : var_3_73;
block_18:
    if (var_3_73 == 0) {
        goto block_20;
    }
    var_5_70 = var_5_70->unk4C;
    goto loop_14;
block_20:
    var_7_0 = 5;
    D_001D5BF0.unk4->unk80 = var_5_70;
    if (temp_4_76 != 5) {
        goto block_23;
    }
    var_6_60 = ((arg0->unk44 ^ 3) != 0) ? var_9_57 : (var_9_57 + 1);
block_23:
    var_3_103 = temp_12_74 - 1;
    if (temp_4_76 != 3) {
        goto block_28;
    }
    var_2_106 = temp_4_76 - 1;
    if (arg0->unk44 != 5) {
        goto block_29;
    }
    temp_6_107 = var_6_60 - 1;
    if (temp_6_107 < 3) {
        goto block_27;
    }
    var_6_60 = 2;
    goto block_28;
block_27:
    var_6_60 = (temp_6_107 <= -1) ? 0 : temp_6_107;
    var_3_103 = temp_12_74 - 1;
block_28:
    var_2_106 = temp_4_76 - 1;
block_29:
    var_5_70->unk3C = (s32) ((var_3_103 * temp_4_76) + ((var_6_60 < var_2_106) ? var_6_60 : var_2_106));
    goto block_33;
block_30:
    if (arg0->unk30 & 0x8000) {
        goto block_34;
    }
    var_2_62 = (temp_11_46 * (temp_15_55 - 1)) + temp_13_49;
block_32:
    arg0->unk3C = var_2_62;
block_33:
block_34:
    if (!(D_0013C940.unk1C4 & 0x4000)) {
        goto block_60;
    }
    if ((temp_lo_53 + 1) < temp_15_55) {
        goto block_37;
    }
    goto block_39;
block_37:
    var_2_148 = arg0->unk3C + temp_11_46;
    goto block_59;
block_39:
    if (arg0->unk50 == NULL) {
        goto block_57;
    }
    var_8_0 = &D_001D5BF0;
    var_9_57 = D_001D5BF0.unk134;
    var_5_156 = arg0->unk50;
loop_41:
    var_3_159 = 0;
    var_7_0 = var_5_156->unk44;
    if (var_9_57 == 0) {
        goto block_43;
    }
    var_3_159 = !(var_5_156->unk30 & 8) ? 0 : 1;
block_43:
    if (D_001D5BF0.unk138 == 0) {
        goto block_45;
    }
    var_3_159 = (var_5_156->unk30 & 4) ? 1 : var_3_159;
block_45:
    if (var_3_159 == 0) {
        goto block_47;
    }
    var_5_156 = var_5_156->unk50;
    goto loop_41;
block_47:
    D_001D5BF0.unk4->unk80 = var_5_156;
    if (var_7_0 != 5) {
        goto block_50;
    }
    var_6_60 = ((arg0->unk44 ^ 3) == 0) ? (var_6_60 + 1) : var_6_60;
block_50:
    var_2_188 = var_7_0 - 1;
    if (var_7_0 != 3) {
        goto block_56;
    }
    var_2_188 = var_7_0 - 1;
    if (arg0->unk44 != 5) {
        goto block_56;
    }
    temp_6_192 = var_6_60 - 1;
    if (temp_6_192 < 3) {
        goto block_54;
    }
    var_6_60 = 2;
    goto block_55;
block_54:
    var_6_60 = (temp_6_192 <= -1) ? 0 : temp_6_192;
block_55:
    var_2_188 = var_7_0 - 1;
block_56:
    var_5_156->unk3C = (s32) ((var_6_60 >= var_2_188) ? var_2_188 : var_6_60);
    goto block_60;
block_57:
    if (arg0->unk30 & 0x8000) {
        goto block_61;
    }
    var_2_148 = arg0->unk3C - (arg0->unk44 * (arg0->unk40 - 1));
block_59:
    arg0->unk3C = var_2_148;
block_60:
block_61:
    if (!(D_0013C940.unk1C4 & 0x8000)) {
        goto block_72;
    }
    if (var_6_60 != 0) {
        goto block_64;
    }
    temp_4_230 = arg0->unk54;
    goto block_66;
block_64:
    var_2_233 = arg0->unk3C - 1;
    goto block_70;
block_66:
    if (temp_4_230 == NULL) {
        goto block_68;
    }
    D_001D5BF0.unk4->unk80 = temp_4_230;
    goto block_71;
block_68:
    if (arg0->unk30 & 0x8000) {
        goto block_72;
    }
    var_2_233 = arg0->unk3C - 1 + arg0->unk44;
block_70:
    arg0->unk3C = var_2_233;
block_71:
block_72:
    if (!(D_0013C940.unk1C4 & 0x2000)) {
        goto block_82;
    }
    if ((var_6_60 + 1) < temp_11_46) {
        goto block_75;
    }
    temp_4_260 = arg0->unk58;
    goto block_77;
block_75:
    var_2_263 = arg0->unk3C + 1;
    goto block_81;
block_77:
    if (temp_4_260 == NULL) {
        goto block_79;
    }
    D_001D5BF0.unk4->unk80 = temp_4_260;
    goto block_82;
block_79:
    if (arg0->unk30 & 0x8000) {
        goto block_83;
    }
    var_2_263 = (arg0->unk3C + 1) - arg0->unk44;
block_81:
    arg0->unk3C = var_2_263;
block_82:
block_83:
    if (arg0->unk3C != temp_13_49) {
        goto block_85;
    }
    if (D_001D5BF0.unk4->unk80 == NULL) {
        goto block_86;
    }
block_85:
    func_0022DA68(1, 0x11, arg0->unk14, var_7_0, var_8_0, var_9_57, var_10_0, temp_11_46);
block_86:
    if (!(D_0013C940.unk1C4 & 0x40)) {
        goto block_101;
    }
    if (!((arg0->unk30 ^ 1) & 1)) {
        goto block_100;
    }
    temp_17_309 = arg0->unk48 + (arg0->unk3C * 0xA);
    temp_4_310 = temp_17_309->unk6;
    if (temp_4_310 == 0) {
        goto block_99;
    }
    if (*(temp_4_310 + D_0013D4C0) == 0) {
        goto block_99;
    }
    temp_16_326 = *(s32 *)((u8 *)(D_001863D0 + (temp_4_310 * 0x4C)) + 0x8);
    func_0022DA68(0, 0x11, arg0->unk14);
    temp_5_330 = temp_17_309->unk6;
    temp_4_331 = (temp_16_326 * 4) + (((u8 *)&D_001D5BF0 + 0x30));
    if (*temp_4_331 != temp_5_330) {
        goto block_94;
    }
    if (temp_16_326 == 0) {
        goto block_94;
    }
    if (temp_16_326 == 3) {
        goto block_94;
    }
    *temp_4_331 = 0;
    goto block_100;
block_94:
    temp_4_342 = temp_17_309->unk6;
    if (temp_4_342 != 0x18) {
        goto block_98;
    }
    if (func_001E9468(0x18, temp_5_330) == 0) {
        goto block_100;
    }
    if (D_001D5BF0.unk0 != 3) {
        goto block_101;
    }
    temp_2_354 = func_001E9468(0x18);
    D_0013F350.unk1FF5 = 1;
    temp_3_362 = D_0013F350.unk1FF7 + temp_2_354;
    D_0013F350.unk1FF7 = (u8) ((temp_3_362 >= 7) ? 6 : temp_3_362);
    goto block_100;
block_98:
    *(s32 *)((u8 *)(((u8 *)&D_001D5BF0 + (temp_16_326 * 4))) + 0x30) = (s32) temp_4_342;
    goto block_100;
block_99:
    func_0022DA68(2, 0x11, arg0->unk14);
block_100:
block_101:
    return 0;
}
#endif /* NON_MATCHING */
