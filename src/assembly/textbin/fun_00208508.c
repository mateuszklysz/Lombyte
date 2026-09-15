/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 22.6039%
 * blocker: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00208508/FUN_00208508.s", FUN_00208508);
#else
#include "rnc/assembly_textbin_fun_00208508_types.h"
#include "types.h"








extern s32 D_0015ED84;
extern s32 D_0015FDB0;
extern struct M2c_D_0019A3E8 D_0019A3E8;
extern struct M2c_D_001A00F0 D_001A00F0;
extern u8 D_001A01A4[];
extern s32 func_001FF960();
extern s32 func_00200080();
extern s32 func_00200E08();
extern s32 func_00208408();
extern void sp4();
void FUN_00208508(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {    s32 sp0;
u8 sp_slot[0xB0];    f32 sp4;
    s32 sp8;
    s32 spC;
    f32 temp_f0_108;
    f32 temp_f4_127;
    s32 temp_17_55;
    s32 temp_18_58;
    s32 temp_2_80;
    s32 temp_4_67;
    s32 temp_6_30;
    s32 var_19_22;
    u8 temp_3_106;
    struct M2c_temp_2_103 *temp_2_103;
    struct M2c_var_16_24 *var_16_24;

    sp8 = arg2;
    spC = arg3;
    var_19_22 = D_001A00F0.unkB0 - 1;
    var_16_24 = D_001A00F0.unk1C;
    if (var_19_22 != -1) {
        temp_6_30 = D_0015ED84;
loop_2:
        func_00208408(sp_slot, &sp4, temp_6_30, var_16_24->unk0, var_16_24->unk4);
        temp_17_55 = arg0 + (s32)(u32) sp4;
        temp_18_58 = arg1 + (s32)(u32) ((f32) (sp8 - arg0) * sp0);
        if ((temp_17_55 >= -0x199) && (temp_18_58 >= -0x199) && (temp_17_55 < 0x219A) && (temp_18_58 < 0x1B9A)) {
            temp_4_67 = var_16_24->unk8;
            if (temp_4_67 == -1) {
                func_00200E08(temp_17_55 - D_0015FDB0, temp_18_58 - D_0015FDB0, temp_17_55 + D_0015FDB0, temp_18_58 + D_0015FDB0, var_16_24->unkC, 1);
            } else {
                temp_2_80 = func_001FF960(temp_4_67, var_16_24->unkC);
                temp_2_103 = D_0019A3E8.unk24 + (*(s32 *)((u8 *)((temp_2_80 * 4) + D_0019A3E8.unk20) + 0x2) * 8);
                temp_3_106 = temp_2_103->unk6;
                temp_f0_108 = ((2.0f * *((D_001A00F0.unk224 * 4) + D_001A01A4)) + 5.0f) / 13.0f;
                temp_f4_127 = (f32) (1 << (temp_3_106 + 4));
                func_00200080(temp_2_80, temp_17_55 - (s32)(u32) temp_f4_127, temp_18_58 - (s32)(u32) (temp_f0_108 * (f32) (1 << (temp_3_106 + 3))), temp_f0_108 * (f32) (1 << (temp_2_103->unk7 + 3)), temp_f0_108 * temp_f4_127, 0x80);
            }
        }
        var_16_24 += 1;
        var_19_22 -= 1;
        if (var_19_22 != -1) {
            goto loop_2;
        }
    }
}
#endif /* NON_MATCHING */
