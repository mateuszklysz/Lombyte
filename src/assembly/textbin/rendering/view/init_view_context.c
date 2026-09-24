#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/rendering/view/init_view_context/FUN_001f2c60.s", FUN_001f2c60);
#else
#include "rnc/assembly_textbin_fun_001f2c60_types.h"
#include "types.h"






extern struct M2c_D_0013E500 D_0013E500;
extern struct M2c_D_00151780 D_00151780;
extern struct M2c_D_0018CD00 D_0018CD00;
extern s32 func_001FA6C0();
void init_view_context(void) __asm__("FUN_001f2c60");

void init_view_context(void) {
    f32 temp_f0_57;
    f32 temp_f5_63;
    s32 temp_10_23;
    s32 temp_6_34;
    s32 temp_7_35;
    s32 temp_8_36;
    s32 temp_9_26;

    temp_10_23 = (s32) (D_00151780.unk152 << 0x10) >> 0x11;
    temp_9_26 = (s32) (D_00151780.unk150 << 0x10) >> 0x11;
    D_0013E500.unk1C = (s32) ((temp_10_23 + 0x800) * 0x10);
    D_0013E500.unk0 = (s32) (s16) D_00151780.unk150;
    temp_6_34 = (0x800 - temp_9_26) * 0x10;
    temp_7_35 = (0x800 - temp_10_23) * 0x10;
    temp_8_36 = (temp_9_26 + 0x800) * 0x10;
    D_0013E500.unk4 = (s32) (s16) D_00151780.unk152;
    D_0013E500.unk10 = temp_6_34;
    D_0013E500.unk14 = temp_7_35;
    D_0013E500.unk18 = temp_8_36;
    D_0018CD00.unkA0 = 32.0f;
    D_0018CD00.unkB0 = 0.63f;
    D_0018CD00.unkA4 = 745472.0f;
    D_0013E500.unk8 = temp_9_26;
    D_0013E500.unkC = temp_10_23;__asm__ volatile ("" : : "r" (&D_0013E500));
    
    D_0018CD00.unk200 = (f32) (func_001FA6C0((s16) D_00151780.unk150, (s16) D_00151780.unk152, temp_6_34, temp_7_35, temp_8_36, temp_9_26, temp_10_23, &D_0013E500) * 0.5f);
    temp_f0_57 = func_001FA6C0((s16) D_00151780.unk152) * 0.5f;
    __asm__ volatile ("" : "+f" (temp_f0_57));
    temp_f5_63 = temp_f0_57 * 4.0f;
    D_0018CD00.unk21C = 524288.0f;
    D_0018CD00.unk228 = 255.0f;
    D_0018CD00.unk20C = temp_f5_63;
    D_0018CD00.unk208 = (f32) (D_0018CD00.unk200 * 4.0f);
    D_0018CD00.unk22C = 0;
    D_0018CD00.unk204 = temp_f0_57;
    D_0018CD00.unk218 = 0;
}
#endif /* NON_MATCHING */
