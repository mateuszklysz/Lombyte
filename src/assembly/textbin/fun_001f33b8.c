/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f33b8
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f33b8/FUN_001f33b8.s", FUN_001f33b8);
#else
#include "rnc/assembly_textbin_fun_001f33b8_types.h"
#include "types.h"




extern struct M2c_D_0013E500 D_0013E500;
extern struct M2c_D_0018CD00 D_0018CD00;
extern s32 func_001F2D98();
extern s32 func_001FA6C0();
void FUN_001f33b8(s32 arg0, s32 arg1, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4) {
    f32 temp_f0_57;
    s32 temp_10_11;
    s32 temp_5_28;
    s32 temp_6_30;
    s32 temp_7_32;
    s32 temp_9_20;

    temp_10_11 = arg1 >> 1;
    temp_9_20 = arg0 >> 1;
    temp_5_28 = (0x800 - temp_9_20) * 0x10;
    D_0013E500.unk1C = (s32) ((temp_10_11 + 0x800) * 0x10);
    temp_6_30 = (0x800 - temp_10_11) * 0x10;
    D_0018CD00.unkB0 = fparg0;
    temp_7_32 = (temp_9_20 + 0x800) * 0x10;
    D_0013E500.unk0 = arg0;
    D_0013E500.unk10 = temp_5_28;
    D_0013E500.unk14 = temp_6_30;
    D_0013E500.unk18 = temp_7_32;
    D_0018CD00.unkA4 = 524288.0f;
    D_0018CD00.unkA0 = 32.0f;
    D_0013E500.unk4 = arg1;
    D_0013E500.unk8 = temp_9_20;
    D_0013E500.unkC = temp_10_11;
    D_0018CD00.unk200 = (f32) (func_001FA6C0(temp_5_28, temp_6_30, temp_7_32, arg0, temp_9_20, temp_10_11, &D_0013E500) * 0.5f);
    temp_f0_57 = func_001FA6C0(arg1) * 0.5f;
    D_0018CD00.unk22C = fparg4;
    D_0018CD00.unk218 = fparg1;
    D_0018CD00.unk21C = fparg2;
    D_0018CD00.unk228 = fparg3;
    D_0018CD00.unk20C = (f32) (temp_f0_57 * 4.0f);
    D_0018CD00.unk208 = (f32) (D_0018CD00.unk200 * 4.0f);
    D_0018CD00.unk204 = temp_f0_57;
    func_001F2D98();
}
#endif /* NON_MATCHING */
