/*
STATE: C_NON_MATCHING
SYMBOL: InitViewContext__Fv
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `InitViewContext__Fv` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 16.3766%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f2c60/FUN_001f2c60.s", FUN_001f2c60);
#else
#include "rnc/assembly_textbin_fun_001f2c60_types.h"
#include "types.h"






extern struct M2c_D_0013E500 D_0013E500;
extern struct M2c_D_00151780 D_00151780;
extern struct M2c_D_0018CD00 D_0018CD00;
extern s32 func_001FA6C0();
void FUN_001f2c60(void) {
    f32 temp_f0_59;
    f32 temp_f5_65;
    s32 temp_10_25;
    s32 temp_6_36;
    s32 temp_7_37;
    s32 temp_8_38;
    s32 temp_9_28;

    temp_10_25 = (s32) (D_00151780.unk152 << 0x10) >> 0x11;
    temp_9_28 = (s32) (D_00151780.unk150 << 0x10) >> 0x11;
    D_0013E500.unk1C = (s32) ((temp_10_25 + 0x800) * 0x10);
    D_0013E500.unk0 = (s32) (s16) D_00151780.unk150;
    temp_6_36 = (0x800 - temp_9_28) * 0x10;
    temp_7_37 = (0x800 - temp_10_25) * 0x10;
    temp_8_38 = (temp_9_28 + 0x800) * 0x10;
    D_0013E500.unk4 = (s32) (s16) D_00151780.unk152;
    D_0013E500.unk10 = temp_6_36;
    D_0013E500.unk14 = temp_7_37;
    D_0013E500.unk18 = temp_8_38;
    D_0018CD00.unkA0 = 32.0f;
    D_0018CD00.unkB0 = 0.63f;
    D_0018CD00.unkA4 = 745472.0f;
    D_0013E500.unk8 = temp_9_28;
    D_0013E500.unkC = temp_10_25;
    D_0018CD00.unk200 = (f32) (func_001FA6C0((s16) D_00151780.unk150, (s16) D_00151780.unk152, temp_6_36, temp_7_37, temp_8_38, temp_9_28, temp_10_25, &D_0013E500) * 0.5f);
    temp_f0_59 = func_001FA6C0((s16) D_00151780.unk152) * 0.5f;
    temp_f5_65 = temp_f0_59 * 4.0f;
    D_0018CD00.unk21C = 524288.0f;
    D_0018CD00.unk228 = 255.0f;
    D_0018CD00.unk20C = temp_f5_65;
    D_0018CD00.unk208 = (f32) (D_0018CD00.unk200 * 4.0f);
    D_0018CD00.unk22C = 0;
    D_0018CD00.unk204 = temp_f0_59;
    D_0018CD00.unk218 = 0;
}
#endif /* NON_MATCHING */
