#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ed360/FUN_001ed360.s", FUN_001ed360);
#else
#include "rnc/assembly_textbin_fun_001ed360_types.h"
#include "types.h"




extern u8 D_00187080[];
extern struct M2c_D_001870C0 *D_001870C0[];
extern u8 D_00187290[];
extern u8 D_001872B0[];
extern s32 func_001F9740();
extern s32 func_001F9A10();
extern s32 func_001F9BF8(s32, s32, f32);
extern s32 func_001F9DC8(f32);
extern s32 func_001FA610();
extern f32 func_001FA6C0();
void FUN_001ed360(struct M2c_arg0 *arg0, s32 arg1) {
u8 sp_slot[0x50];    f32 temp_f12_47;
    f32 temp_f20_36;
    f32 temp_f20_39;
    s32 temp_3_21;

    if ((D_001870C0[0] != NULL) && (D_001870C0[0]->unk86 == 6)) {
        arg0->unkC = 0;
        arg0->unk8 = 0;
        return;
    }
    temp_3_21 = arg0->unk8;
    if (temp_3_21 == 0) {
        arg0->unkC = 0;
        return;
    }
    if (arg0->unkC < temp_3_21) {
        arg0->unkC = temp_3_21;
    }
    func_001F9740(((u8 *)arg0 + (8)));
    temp_f20_36 = func_001FA6C0(arg0->unk8);
    temp_f20_39 = temp_f20_36 / func_001FA6C0(arg0->unkC);
    temp_f12_47 = arg0->unk0 * func_001F9DC8(func_001FA610(2.0f * func_001FA6C0(arg0->unk8))) * temp_f20_39 * temp_f20_39;
    arg0->unk4 = temp_f12_47;
    if (arg1 == 0) {
        func_001F9BF8(sp_slot, D_001872B0, temp_f12_47);
    } else {
        func_001F9BF8(sp_slot, D_00187290, temp_f12_47);
    }
    func_001F9A10(D_00187080, D_00187080, sp_slot);
}
#endif /* NON_MATCHING */
