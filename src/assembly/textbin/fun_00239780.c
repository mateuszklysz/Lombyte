#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00239780/FUN_00239780.s", FUN_00239780);
#else
#include "types.h"
extern s32 D_0015ED80[];
extern s32 D_0015EED0;
extern s32 D_00161294;
extern s32 D_00161298[];
extern s32 D_0016129C;
extern s32 D_001612A0;
extern u8 D_001E6218[];
extern s32 func_001F55D8();
extern s32 func_001F9A10();
extern s32 func_001F9A28();
extern s32 func_001F9AF0();
extern void func_001F9BF8();
extern s32 func_001FA6C0();
extern s32 func_001FA6D0(f32);
extern s32 func_001FB740();
extern s32 func_0020CD48();
extern void func_00233980(s32, s64);
extern s32 func_00233B68();
extern s32 func_00237C80();
extern s32 func_00238520();
extern s32 func_00238630();
extern s32 func_002386E8();
extern s32 func_002389E0();
extern s32 func_00238F08();
extern s32 func_00239160();
extern s32 func_00239328();
extern s32 func_00239690();
extern void func_00239750(void);
extern void jtbl_001E8AD0();
extern void sp130();
extern void sp134();
extern void sp138();
extern void sp13C();
extern void sp140();
extern void sp144();
extern void sp148();
extern void sp14C();
void FUN_00239780(s32 arg0) {
u8 sp_slot[0x260];    s64 sp10;
    s64 sp20;
    s64 sp30;
    s32 sp40;
    s32 sp50;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s64 sp70;
    s64 sp80;
    s64 sp90;
    s64 spA0;
    s64 spB0;
    s64 sp110;
    s64 sp120;
    f32 sp130;
    f32 sp134;
    f32 sp138;
    f32 sp13C;
    f32 sp140;
    f32 sp144;
    f32 sp148;
    f32 sp14C;
    s32 *sp150;
    s64 *sp154;
    s64 *sp158;
    s64 *sp15C;
    s64 *sp160;
    f32 *sp164;
    f32 *sp168;
    f32 *sp16C;
    f32 *sp170;
    s64 *sp174;
    f32 *sp178;
    f32 *sp17C;
    f32 *sp180;
    f32 *sp184;
    s64 *sp188;
    s32 *sp18C;
    s32 *sp190;
    u32 temp_f0_169;
    u32 temp_f0_188;
    f32 temp_f20_176;
    u32 temp_f22_106;
    u32 temp_f22_89;
    f32 var_f23_145;
    s32 temp_17_77;
    s32 var_16_58;
    s64 temp_17_310;
    u32 var_23_38;

    sp150 = &sp60;
    sp18C = &sp40;
    sp190 = &sp50;
    sp164 = &sp130;
    sp168 = &sp134;
    sp16C = &sp138;
    sp170 = &sp13C;
    sp158 = &sp80;
    sp160 = &sp90;
    sp174 = &spA0;
    sp188 = &spB0;
    sp154 = &sp110;
    sp15C = &sp120;
    sp178 = &sp140;
    sp17C = &sp144;
    var_23_38 = 0;
    sp180 = &sp148;
    sp184 = &sp14C;
    var_16_58 = 0 * 4;
loop_1:
    sp64 = var_16_58 + 1;
    sp68 = var_16_58 + 2;
    sp60 = var_16_58;
    func_0020CD48(arg0, 3, sp150, &sp30);
    sp20 = sp30;
    func_001F9A28(sp_slot, sp18C, &sp30);
    temp_17_77 = var_23_38 * 0x10;
    func_001F9A28(&sp10, sp190, &sp30);
    temp_f22_89 = func_001F9AF0(sp_slot);
    __asm__ volatile ("" : "+r" (temp_f22_89));
    func_001F9BF8(&sp70, sp_slot, *(s32 *)(temp_17_77 + D_001E6218));
    func_001F9A10(&sp20, &sp20, &sp70);
    func_001F9BF8(sp_slot, sp_slot, temp_f22_89 - (2.0f * *(s32 *)((u8 *)(D_001E6218 + temp_17_77) + 0x8)));
    temp_f22_106 = func_001F9AF0(&sp10);
    func_001F9BF8(&sp70, &sp10, *(s32 *)((u8 *)(D_001E6218 + temp_17_77) + 0x4));
    func_001F9A10(&sp20, &sp20, &sp70);
    func_001F9BF8(&sp10, &sp10, temp_f22_106 - (2.0f * *(s32 *)((u8 *)(D_001E6218 + temp_17_77) + 0xC)));
    func_001F9A10(&sp70, &sp20, sp_slot);
    func_001F9A10(&sp70, &sp70, &sp10);
    func_00237C80(&sp20, &sp70, sp164, sp168, sp16C, sp170);
    if (D_00161298[0] != 0) {
        goto block_3;
    }
    if (D_001612A0 == 0) {
        goto block_8;
    }
block_3:
    var_f23_145 = 1.0f;
    __asm__ volatile ("" : "+f" (var_f23_145));
    if (D_001612A0 == 0) {
        goto block_5;
    }
    var_f23_145 = func_001FA6C0(8 - D_0016129C) * 0.125f;
block_5:
    if (D_00161298[0] == 0) {
        goto block_7;
    }
    var_f23_145 = func_001FA6C0(D_00161294) * 0.125f;
block_7:
    temp_f0_169 = func_001F9AF0(sp_slot);
    temp_f20_176 = 1.0f - var_f23_145;
    __asm__ volatile ("" : "+f" (temp_f20_176));
    func_001F9BF8(&sp70, sp_slot, temp_f0_169 * temp_f20_176 * 0.5f);
    func_001F9BF8(sp_slot, sp_slot, temp_f0_169 * var_f23_145);
    func_001F9A10(&sp20, &sp20, &sp70);
    temp_f0_188 = func_001F9AF0(&sp10);
    func_001F9BF8(&sp70, &sp10, temp_f0_188 * temp_f20_176 * 0.5f);
    func_001F9BF8(&sp10, &sp10, temp_f0_188 * var_f23_145);
    func_001F9A10(&sp20, &sp20, &sp70);
block_8:
    *sp158 = sp20;
    func_001F9A10(sp160, &sp20, sp_slot);
    func_001F9A10(sp174, &sp20, &sp10);
    func_001F9A10(sp188, sp174, sp_slot);
    sp110 = sp80;
    sp120 = spB0;
    func_00237C80(sp154, sp15C, sp178, sp17C, sp180, sp184);
    func_00239690(9, 7, 0x3F800000);
    func_001FB740(0x200, 0x200);
    func_00233980(0x42, (0x8000 << 0x18) | 0x64);
    if (var_23_38 >= 6U) {
        goto block_16;
    }
    switch (*(s32 *)(var_16_58 + &jtbl_001E8AD0));         /* unable to parse jump table */
/* case 0: */
    func_00238520(arg0);
    goto block_16;
/* case 1: */
    func_002389E0(arg0);
    goto block_16;
/* case 2: */
    func_00238630(arg0);
    goto block_16;
/* case 3: */
    func_00238F08(arg0, 0 /*  Read from unset register $f2  */, sp140);
    goto block_16;
/* case 4: */
    func_00239160(arg0);
    goto block_16;
/* case 5: */
    func_002386E8(arg0);
block_16:
    func_00239328(var_23_38, sp140, sp144);
    func_00239750();
    func_001FB740(0x200, 0x200);
    func_00233980(0x42, (0x8000 << 0x18) | 0x64);
    func_00233980(8, 5);
    func_00233B68();
    temp_17_310 = D_0015EED0;
    if (D_0015ED80[0] == 0) {
        goto block_18;
    }
    func_001F55D8(0, 0, 0x3F6DB6DC, func_001FA6D0((sp134 * 0.92857146f) - 1.0f), (0x8080 << 0x10) | 0x8080, temp_17_310, sp148, sp14C, sp140, sp144);
    goto block_19;
block_18:
    func_001F55D8(0, 0, 0x3F800000, 0x3F800000, (0x8080 << 0x10) | 0x8080, temp_17_310, sp148, sp14C, sp140, sp144);
block_19:
    func_00233980(8, 0);
    var_23_38 += 1;
    var_16_58 = var_23_38 * 4;
    if ((s32) var_23_38 < 6) {
        goto loop_1;
    }
    return;
}

extern void func_00239780(s32 arg0) __attribute__((alias("FUN_00239780")));
#endif /* NON_MATCHING */
