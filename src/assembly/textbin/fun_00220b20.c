/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 39.6995%
 * blocker: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00220b20/FUN_00220b20.s", FUN_00220b20);
#else
#include "rnc/assembly_textbin_fun_00220b20_types.h"
#include "types.h"


extern u8 D_0013E520[];
extern s32 D_0015F438;
extern s32 D_001601B0;
extern u8 D_001602D8[];
extern u8 D_001602E0[];
extern u8 D_001863D0[];
extern s32 SubtractIntegerWithClamp();
extern s32 func_001F4280();
extern s32 func_001F4398();
extern s32 func_001F6530();
extern s32 func_001F9DC8();
extern s32 func_001F9DE0();
extern s32 func_001FA610();
extern s32 func_001FF960();
extern s32 func_001FFC30();
extern s32 func_00200E08();
s32 FUN_00220b20(struct M2c_arg0 *arg0) {
    f32 temp_f0_126;
    f32 temp_f0_56;
    f32 temp_f22_44;
    f32 var_f0_65;
    s32 temp_2_20;
    s32 temp_3_22;
    s32 temp_4_102;
    s32 temp_ret_126;
    s32 var_19_11;
    s32 var_4_32;

    var_19_11 = 0;
    func_001F4280(0);
    temp_2_20 = arg0->unk24;
    temp_3_22 = arg0->unk20;
    var_4_32 = temp_3_22 < temp_2_20;
    temp_f22_44 = ((f32) ((var_4_32 == 0) ? temp_2_20 : temp_3_22) * 0.5f) - 40.0f;
    do {
        temp_f0_56 = func_001FA610(var_4_32, ((f32) var_19_11 * 0.7853982f) + -1.5707964f);
        func_001F9DC8(temp_f0_56);
        var_f0_65 = func_001F9DE0(temp_f0_56) * temp_f22_44;
        if (var_19_11 == arg0->unk50) {
            func_00200E08((s32)(u32) var_f0_65 - 0x13, (s32)(u32) var_f0_65 - 0x13, (s32)(u32) var_f0_65 + 0x13, (s32)(u32) var_f0_65 + 0x13, (u64) ((((SubtractIntegerWithClamp((D_0015F438 & 0x3F) - 0x20) + 0x40) * 0x10202) | 0x80000000) << 0x20) >> 0x20, 0);
            var_f0_65 = func_00200E08((s32)(u32) var_f0_65 - 0x12, (s32)(u32) var_f0_65 - 0x12, (s32)(u32) var_f0_65 + 0x12, (s32)(u32) var_f0_65 + 0x12, (u64) D_001601B0, 0);
        }
        temp_4_102 = *(s32 *)((u8 *)(((u8 *)arg0 + ((var_19_11 * 4)))) + 0x30);
        if (temp_4_102 == 0) {
            func_00200E08((s32)(u32) var_f0_65 - 0xF, (s32)(u32) var_f0_65 - 0xF, (s32)(u32) var_f0_65 + 0xF, (s32)(u32) var_f0_65 + 0xF, 0x40404040U, 0);
        } else {
            temp_ret_126 = func_001FF960(*(u16 *)((u8 *)((temp_4_102 * 0x4C) + D_001863D0) + 0x38), (*(temp_4_102 + D_0013E520) == 0) ? 0 : 4);
            temp_f0_126 = (f32) temp_ret_126;
            func_001FFC30(temp_ret_126, (s32)(u32) temp_f0_126 - 0x11, (s32)(u32) temp_f0_126 - 0x11, 0x20, 0x20, 0x80);
        }
        var_19_11 += 1;
        var_4_32 = 0xE99E;
    } while (var_19_11 < 8);
    func_001FFC30(func_001FF960(0xE99EU, 0), 8, 0x27, 0x20, -0x20, 0x80);
    func_001FFC30(func_001FF960(0xE99EU, 0), arg0->unk20 - 0xA, 0x27, -0x20, -0x20, 0x80);
    func_001F6530(0x28, 0xF, (0x80FF << 0x10) | 0xA888, D_001602D8, -1);
    func_001F6530(arg0->unk20 - 0x3C, 0xF, (0x80FF << 0x10) | 0xA888, D_001602E0, -1);
    func_001F4398();
    return 2;
}
#endif /* NON_MATCHING */
