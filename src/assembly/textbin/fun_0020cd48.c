#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0020cd48/FUN_0020cd48.s", FUN_0020cd48);
#else
#include "rnc/assembly_textbin_fun_0020cd48_types.h"
#include "types.h"


extern s32 func_001F9A10();
extern s32 func_001F9A68(s32, s32, f32);
extern s32 func_001F9CF8();
extern s32 func_002106F8();
void FUN_0020cd48(s32 arg2, struct M2c_arg0 *arg0, s32 arg1, s32 arg3) {
    f32 temp_f20_16;
    s32 temp_4_30;
    s32 temp_5_31;
    s32 var_16_12;
    s32 var_17_10;
    s32 var_4_19;

    var_17_10 = arg1;
    var_16_12 = arg3;
    temp_f20_16 = arg0->unk2C * 0.0009765625f;
    func_002106F8();
    if (var_17_10 > 0) {
        var_4_19 = var_16_12;
        do {
            var_17_10 -= 1;
            func_001F9A68(var_4_19, var_16_12, temp_f20_16);
            func_001F9CF8(var_16_12, var_16_12, ((u8 *)arg0 + (0xC0)));
            temp_4_30 = var_16_12;
            temp_5_31 = var_16_12;
            var_16_12 += 0x10;
            func_001F9A10(temp_4_30, temp_5_31, ((u8 *)arg0 + (0x10)));
            var_4_19 = var_16_12;
        } while (var_17_10 != 0);
    }
}
#endif /* NON_MATCHING */
