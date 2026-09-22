#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/set_tfrag_dists/FUN_00233068.s", FUN_00233068);
#else
#include "rnc/assembly_textbin_set_tfrag_dists_types.h"
#include "types.h"






extern struct M2c_D_00160EA0 D_00160EA0;
extern struct M2c_D_00160EB0 D_00160EB0;
extern f32 D_0018CF20;
extern struct M2c_D_001DE7F0 D_001DE7F0;
extern s32 func_001F9810();
extern s32 func_001FA6D0();
void FUN_00233068(void) {
    f32 temp_f20_49;
    f32 temp_f21_42;
    f32 temp_f22_51;
    f32 temp_f23_45;
    f32 temp_f24_41;

    D_00160EB0.unk0 = func_001FA6D0(D_00160EA0.unk0 * 1024.0f);
    D_00160EB0.unk4 = func_001FA6D0(D_00160EA0.unk4 * 1024.0f);
    temp_f24_41 = D_00160EA0.unk0 * D_0018CF20;
    temp_f21_42 = D_00160EA0.unk4 * D_0018CF20;
    temp_f23_45 = D_00160EA0.unk8 * D_0018CF20;
    D_00160EB0.unk8 = func_001FA6D0(D_00160EA0.unk8 * 1024.0f);
    temp_f20_49 = 1.0f / (temp_f24_41 - temp_f21_42);
    temp_f22_51 = 1.0f / (temp_f21_42 - temp_f23_45);
    func_001F9810(&D_001DE7F0, 0x40);
    D_001DE7F0.unkC = temp_f24_41;
    D_001DE7F0.unk1C = temp_f21_42;
    D_001DE7F0.unk10 = (f32) (temp_f22_51 * 0.5f);
    D_001DE7F0.unk24 = (f32) (temp_f24_41 * temp_f20_49);
    D_001DE7F0.unk30 = (f32) (temp_f23_45 * temp_f22_51 * -0.5f);
    D_001DE7F0.unk34 = (f32) (temp_f21_42 * temp_f22_51);
    D_001DE7F0.unk20 = (f32) (temp_f21_42 * temp_f20_49 * -0.5f);
    D_001DE7F0.unk0 = (f32) (temp_f20_49 * 0.5f);
    D_001DE7F0.unk4 = (f32) -temp_f20_49;
    D_001DE7F0.unk14 = (f32) -temp_f22_51;
}
#endif /* NON_MATCHING */
