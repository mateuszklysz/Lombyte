#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f4880/FUN_001f4880.s", FUN_001f4880);
#else
#include "rnc/assembly_textbin_fun_001f4880_types.h"
#include "types.h"








extern s32 D_0015F474;
extern u8 D_0018CAA0[];
extern u8 D_0018E350[];
extern s32 func_001F44B8();
extern void func_001F7D30();
extern void func_001F9BF8();
extern void sp50();
extern void sp54();
extern void sp90();
void FUN_001f4880(void) {    s32 sp94;
u8 sp_slot[0x110];    s32 sp98;
    s32 sp40;
    f32 sp50;
    f32 sp54;
    s64 sp70;
    s64 sp78;
    s64 sp80;
    s64 sp88;
    f32 sp90;
    struct M2c_var_2_26 *var_2_26;
    struct M2c_var_4_70 *var_4_70;
    f32 *var_3_30;
    f32 *var_4_29;
    f32 temp_f1_36;
    f32 temp_f1_74;
    f32 temp_f2_76;
    f32 temp_f5_80;
    f32 temp_f8_68;
    s32 *var_5_28;
    s32 var_16_55;
    s32 var_17_48;
    s32 var_5_71;
    s32 var_6_31;
    struct M2c_temp_16_66 *temp_16_66;
    struct M2c_var_3_67 *var_3_67;

    sp78 = func_001F44B8(0);
    sp80 = (0xFF90 << 0x20) | 0x260;
    sp70 = 5;
    sp88 = (0x8000 << 0x18) | 0x44;
    var_2_26 = D_0018CAA0;
    var_5_28 = &sp40;
    var_4_29 = &sp54;
    var_3_30 = &sp50;
    var_6_31 = 3;
loop_1:
    var_6_31 -= 1;
    temp_f1_36 = var_2_26->unkC;
    *var_3_30 = var_2_26->unk8;
    var_2_26 += 0x10;
    *var_4_29 = temp_f1_36;
    var_3_30 += 8;
    *var_5_28 = 0x40808080;
    var_4_29 += 8;
    var_5_28 += 4;
    if (var_6_31 >= 0) {
        goto loop_1;
    }
    var_17_48 = 0;
    if (D_0015F474 <= 0) {
        goto block_7;
    }
    var_16_55 = 0 << 5;
loop_4:
    sp90 = (s64) *(var_16_55 + D_0018E350);
    var_17_48 += 1;
    func_001F9BF8(&sp90, &sp90, 0x3F800000);
    temp_16_66 = var_16_55 + (((u8 *)D_0018E350 - (u8 *)0x10));
    var_3_67 = sp_slot;
    temp_f8_68 = temp_16_66->unkC;
    var_4_70 = D_0018CAA0;
    var_5_71 = 3;
loop_5:
    temp_f1_74 = var_4_70->unk0;
    temp_f2_76 = var_4_70->unk4;
    temp_f5_80 = (temp_f1_74 * sp90) + (temp_f2_76 * sp94);
    var_3_67->unk0 = (s64) temp_16_66->unk0;
    var_4_70 += 0x10;
    var_5_71 -= 1;
    var_3_67->unk0 = (f32) ((f32) var_3_67->unk0 + ((temp_f1_74 - (sp90 * temp_f5_80)) * temp_f8_68));
    var_3_67->unk4 = (f32) (var_3_67->unk4 + ((temp_f2_76 - (sp94 * temp_f5_80)) * temp_f8_68));
    var_3_67->unk8 = (f32) (var_3_67->unk8 - (sp98 * temp_f5_80 * temp_f8_68));
    var_3_67 += 0x10;
    if (var_5_71 >= 0) {
        goto loop_5;
    }
    func_001F7D30(sp_slot, 0, 0);
    var_16_55 = var_17_48 << 5;
    if (var_17_48 < D_0015F474) {
        goto loop_4;
    }
block_7:
    return;
}

extern void func_001F4880(void) __attribute__((alias("FUN_001f4880")));
#endif /* NON_MATCHING */
