/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 69.7481%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00219fa0/FUN_00219fa0.s", FUN_00219fa0);
#else
#include "rnc/assembly_textbin_fun_00219fa0_types.h"
#include "types.h"




extern s32 D_0015F438;
extern s32 D_001601B0;
extern s32 func_001F4280();
extern s32 func_001F4398();
extern s32 func_001F99A8();
extern s32 func_001FF960();
extern s32 func_001FFC30();
extern s32 func_001FFE18();
extern s32 func_00200080();
extern s32 func_00200E08();
s32 FUN_00219fa0(struct M2c_arg0 *arg0) {
    s32 sp0;
    s32 temp_21_25;
    s32 temp_5_102;
    s32 var_18_20;
    s32 var_19_13;
    s32 var_30_30;
    struct M2c_temp_22_37 *temp_22_37;

    var_19_13 = 0;
    var_18_20 = arg0->unk5C;
    sp0 = var_18_20;
    temp_21_25 = (s32) ((arg0->unk20 * 0x10) - 0x200) >> 1;
    func_001F4280(0);
    if (arg0->unk40 > 0) {
        var_30_30 = 0;
        do {
            temp_22_37 = arg0->unk48 + var_30_30;
            if (arg0->unk3C == var_19_13) {
                func_00200E08(temp_21_25 - 0x30, var_18_20 - 0x30, temp_21_25 + 0x230, var_18_20 + 0x230, (u64) ((((func_001F99A8((D_0015F438 & 0x3F) - 0x20) + 0x40) * 0x10202) | 0x80000000) << 0x20) >> 0x20, 1);
                func_00200E08(temp_21_25 - 0x10, var_18_20 - 0x10, temp_21_25 + 0x210, var_18_20 + 0x210, (u64) D_001601B0, 1);
            }
            var_19_13 += 1;
            var_30_30 += 0xA;
            func_00200080(func_001FF960(temp_22_37->unk0, temp_22_37->unk2), temp_21_25, var_18_20, 0x200, 0x200, 0x80);
            var_18_20 += 0x260;
        } while (var_19_13 < arg0->unk40);
    }
    if (sp0 < 0) {
        func_00200E08(0, 0, arg0->unk20, 0x14, (u64) D_001601B0, 0);
        func_001FFC30(func_001FF960(0xE99EU, 6), temp_21_25 >> 4, 2, 0x20, 0x10, 0x80);
    }
    temp_5_102 = arg0->unk24;
    if ((temp_5_102 * 0x10) < var_18_20) {
        func_00200E08(0, temp_5_102 - 0x14, arg0->unk20, temp_5_102, (u64) D_001601B0, 0);
        func_001FFE18(func_001FF960(0xE99EU, 6), temp_21_25 >> 4, arg0->unk24 - 0x12, 0x20, 0x10, 0x80);
    }
    func_001F4398();
    return 2;
}
#endif /* NON_MATCHING */
