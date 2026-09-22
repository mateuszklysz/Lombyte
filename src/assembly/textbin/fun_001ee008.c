#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ee008/FUN_001ee008.s", FUN_001ee008);
#else
#include "rnc/assembly_textbin_fun_001ee008_types.h"
#include "types.h"


extern s32 func_001F44B8();
extern s32 func_001F5AB0(s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_001F9DC8();
extern f32 func_001F9DE0();
extern f32 func_001FA580();
void FUN_001ee008(struct M2c_arg0 *arg0, f32 fparg0, f32 fparg1) {
    f32 sp0;
    f32 sp4;
    f32 sp10;
    f32 sp14;
    f32 temp_f0_78;
    f32 temp_f14_119;
    f32 temp_f14_138;
    f32 temp_f14_161;
    f32 temp_f14_183;
    f32 temp_f14_48;
    f32 temp_f14_97;
    f32 temp_f2_94;
    f32 var_f21_24;
    s32 temp_18_20;
    s32 temp_3_21;
    s32 var_17_40;

    temp_18_20 = func_001F44B8(arg0->unk18);
    temp_3_21 = arg0->unk2C;
    var_f21_24 = arg0->unk1C;
    switch (temp_3_21) {                            /* irregular */
    case 0:
        var_17_40 = 0;
        if (arg0->unk26 > 0) {
            do {
                temp_f14_48 = 40.0f * arg0->unk10;
                func_001F5AB0(0x3F, 0x3F, temp_18_20, 0xFFFFF3, arg0->unk14, 0, 0, fparg0, fparg1, temp_f14_48, temp_f14_48, var_f21_24, 0, 0);
                var_17_40 += 1;
                var_f21_24 = func_001FA580(var_f21_24, arg0->unk28);
            } while (var_17_40 < arg0->unk26);
        }
        return;
    case 1:
        temp_f0_78 = func_001F9DE0(var_f21_24) * 40.0f * arg0->unk10;
        sp0 = temp_f0_78;
        sp4 = func_001F9DC8(var_f21_24) * 40.0f * arg0->unk10;
        sp10 = func_001F9DC8(var_f21_24) * 40.0f * arg0->unk10;
        temp_f2_94 = arg0->unk10;
        temp_f14_97 = temp_f2_94 * 40.0f;
        sp14 = func_001F9DE0(var_f21_24) * -40.0f * temp_f2_94;
        func_001F5AB0(0x3F, 0x3F, temp_18_20, 0xFFFFF3, arg0->unk14, 0, 0, fparg0, fparg1, temp_f14_97, temp_f14_97, var_f21_24, 0, 0);
        temp_f14_119 = arg0->unk10 * 40.0f;
        func_001F5AB0(0x3F, 0x3F, temp_18_20, 0xFFFFF3, arg0->unk14, 1, 0, fparg0 + sp10, fparg1 + sp14, temp_f14_119, temp_f14_119, var_f21_24, 0, 0);
        temp_f14_138 = arg0->unk10 * 40.0f;
        func_001F5AB0(0x3F, 0x3F, temp_18_20, 0xFFFFF3, arg0->unk14, 0, 1, fparg0 - sp0, fparg1 - sp4, temp_f14_138, temp_f14_138, var_f21_24, 0, 0);
        temp_f14_161 = arg0->unk10 * 40.0f;
        func_001F5AB0(0x3F, 0x3F, temp_18_20, 0xFFFFF3, arg0->unk14, 1, 1, (fparg0 + sp10) - temp_f0_78, (fparg1 + sp14) - sp4, temp_f14_161, temp_f14_161, var_f21_24, 0, 0);
        break;
    case 2:
        temp_f14_183 = arg0->unk10 * 40.0f;
        func_001F5AB0(0x3F, 0x3F, temp_18_20, 0xFFFFF3, arg0->unk14, 0, 0, fparg0, fparg1, temp_f14_183, temp_f14_183, var_f21_24, 0x3F000000, 0x3F000000);
        break;
    }
}
#endif /* NON_MATCHING */
