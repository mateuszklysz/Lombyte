/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 35.0741%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fb740/FUN_001fb740.s", FUN_001fb740);
#else
#include "rnc/assembly_textbin_fun_001fb740_types.h"
#include "types.h"








extern struct M2c_D_00160F00 *D_00160F00;
extern s32 func_00233980();
void FUN_001fb740(s32 arg0, s32 arg1) {
    s32 temp_16_15;
    s32 temp_2_76;
    s32 temp_3_81;
    s32 temp_4_24;
    s32 var_14_56;
    s32 var_4_86;
    s32 var_6_85;
    s64 temp_3_91;
    struct M2c_temp_15_61 *temp_15_61;
    struct M2c_temp_2_62 *temp_2_62;
    struct M2c_var_5_87 *var_5_87;

    temp_16_15 = (s32) ((arg0 > -1) ? arg0 : (arg0 + 0x1F)) >> 5;
    func_00233980(0x42, (0x8000 << 0x18) | 0x4A);
    temp_4_24 = temp_16_15 + 5;
    D_00160F00->unk4 = 0;
    D_00160F00->unk8 = 0;
    D_00160F00->unkC = (s32) (temp_4_24 | 0x50000000);
    var_14_56 = 0;
    D_00160F00->unk0 = (s32) (temp_4_24 | 0x10000000);
    temp_15_61 = D_00160F00;
    temp_2_62 = ((u8 *)temp_15_61 + (0x10));
    D_00160F00 = temp_2_62;
    temp_15_61->unk10 = (s64) ((0x8000 << 0x2D) | 1);
    temp_2_62->unk48 = 0x44;
    temp_2_62->unk8 = 0xE;
    temp_2_62->unk10 = 0x32003;
    temp_2_62->unk18 = 0x47;
    temp_2_62->unk20 = (s64) ((0x9000 << 0x2E) | 1);
    temp_2_62->unk28 = 0x10;
    temp_2_62->unk30 = 0x146;
    temp_2_62->unk38 = (s64) ((0x8000 << 0x10) | 0x8080);
    temp_2_62->unk40 = (s64) (temp_16_15 | 0x8000 | (0x9000 << 0x2E));
    if (temp_16_15 > 0) {
        temp_2_76 = arg1 * 8;
        temp_3_81 = 0 - (arg0 * 8);
        var_6_85 = temp_3_81 + 0x8000;
        var_4_86 = temp_3_81 + 0x8200;
        var_5_87 = ((u8 *)temp_15_61 + (0x60));
        do {
            temp_3_91 = var_4_86 | ((temp_2_76 + 0x7FF0) << 0x10);
            var_5_87->unk0 = (s64) (var_6_85 | ((0x8000 - temp_2_76) << 0x10));
            var_14_56 += 1;
            var_4_86 += 0x200;
            var_5_87->unk8 = temp_3_91;
            var_6_85 += 0x200;
            var_5_87 = ((u8 *)var_5_87 + (8 ))+ 8;
        } while (var_14_56 < temp_16_15);
    }
    D_00160F00 += (temp_16_15 * 0x10) + 0x50;
}
#endif /* NON_MATCHING */
