#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00214a98/FUN_00214a98.s", FUN_00214a98);
#else
#include "types.h"
struct M2c_arg0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern f32 func_001F99C0();
extern s32 func_001F9D68(s32, s32, f32, f32, f32, f32);
extern s32 func_001FA6D0(f32);
void FUN_00214a98(struct M2c_arg0 *arg0, s32 *arg1) {
u8 sp_slot[0x50];    f32 temp_f0_17;
    f32 temp_f0_60;
    f32 temp_f21_15;
    f32 temp_f6_51;
    f32 var_f1_27;
    f32 var_f20_18;
    s32 temp_2_36;
    s32 temp_3_40;

    temp_f21_15 = func_001F99C0(arg0->unk0);
    var_f20_18 = func_001F99C0(arg0->unk4);
    temp_f0_17 = func_001F99C0(arg0->unk8);
    if (var_f20_18 < temp_f21_15) {
        var_f20_18 = temp_f21_15;
    }
    var_f1_27 = temp_f0_17;
    __asm__ volatile ("" : "+f" (var_f1_27));
    if (temp_f0_17 < var_f20_18) {
        var_f1_27 = var_f20_18;
    }
    temp_2_36 = func_001FA6D0((var_f1_27 * 10000.0f) / 63.0f);
    temp_3_40 = (temp_2_36 < 0x100) ? temp_2_36 : 0xFF;
    temp_f6_51 = (f32) ((temp_3_40 <= 0) ? 1 : temp_3_40);
    temp_f0_60 = 1.0f / (temp_f6_51 * 0.0001f);
    *arg1 = func_001F9D68(sp_slot, 1, (arg0->unk0 * temp_f0_60) + 127.0f, (arg0->unk4 * temp_f0_60) + 127.0f, (arg0->unk8 * temp_f0_60) + 127.0f, temp_f6_51);
}
#endif /* NON_MATCHING */
