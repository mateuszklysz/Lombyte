/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 48.9000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0020cd48/FUN_0020cd48.s", FUN_0020cd48);
#else
#include "rnc/assembly_textbin_fun_0020cd48_types.h"
#include "types.h"


extern s32 func_001F9A10();
extern s32 func_001F9A68();
extern s32 func_001F9CF8();
extern s32 func_002106F8();
void FUN_0020cd48(s32 arg2, struct M2c_arg0 *arg0, s32 arg1, s32 arg3) {
    f32 temp_f20_18;
    s32 temp_4_32;
    s32 temp_5_33;
    s32 var_16_14;
    s32 var_17_12;
    s32 var_4_21;

    var_17_12 = arg1;
    var_16_14 = arg3;
    temp_f20_18 = arg0->unk2C * 0.0009765625f;
    func_002106F8();
    if (var_17_12 > 0) {
        var_4_21 = var_16_14;
        do {
            var_17_12 -= 1;
            func_001F9A68(var_4_21, var_16_14, temp_f20_18);
            func_001F9CF8(var_16_14, var_16_14, ((u8 *)arg0 + (0xC0)));
            temp_4_32 = var_16_14;
            temp_5_33 = var_16_14;
            var_16_14 += 0x10;
            func_001F9A10(temp_4_32, temp_5_33, ((u8 *)arg0 + (0x10)));
            var_4_21 = var_16_14;
        } while (var_17_12 != 0);
    }
}
#endif /* NON_MATCHING */
