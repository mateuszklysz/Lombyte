/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00219fa0
SCORE: code=71.0458 functions=71.0458 data=100 complete_data=100
DECISION: retained
BLOCKER: register-allocation, stack-alignment, delay-slot-scheduling
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00219fa0/FUN_00219fa0.s", FUN_00219fa0);
#else
#include "rnc/assembly_textbin_fun_00219fa0_types.h"
#include "types.h"




extern s32 D_0015F438[];
extern s32 D_001601B0;
extern s32 SubtractIntegerWithClamp();
extern s32 func_001F4280();
extern s32 func_001F4398();
extern s32 func_001FF960();
extern s32 func_001FFC30();
extern s32 func_001FFE18();
extern s32 func_00200080();
extern s32 func_00200E08();
s32 FUN_00219fa0(struct M2c_arg0 *arg0) {
    s32 sp0;
    s32 temp_21_23;
    s32 temp_5_100;
    s32 var_18_18;
    s32 var_19_11;
    s32 var_30_28;
    struct M2c_temp_22_35 *temp_22_35;

    var_19_11 = 0;
    var_18_18 = arg0->unk5C;
    sp0 = var_18_18;
    temp_21_23 = (s32) ((arg0->unk20 * 0x10) - 0x200) >> 1;
    func_001F4280(0);
    if (arg0->unk40 > 0) {
        var_30_28 = 0;
        do {
            temp_22_35 = arg0->unk48 + var_30_28;
            if (arg0->unk3C == var_19_11) {
                func_00200E08(temp_21_23 - 0x30, var_18_18 - 0x30, temp_21_23 + 0x230, var_18_18 + 0x230, (u64) ((((SubtractIntegerWithClamp((D_0015F438[0] & 0x3F) - 0x20) + 0x40) * 0x10202) | 0x80000000) << 0x20) >> 0x20, 1);
                func_00200E08(temp_21_23 - 0x10, var_18_18 - 0x10, temp_21_23 + 0x210, var_18_18 + 0x210, (u64) D_001601B0, 1);
            }
            var_19_11 += 1;
            var_30_28 += 0xA;
            func_00200080(func_001FF960(temp_22_35->unk0, temp_22_35->unk2), temp_21_23, var_18_18, 0x200, 0x200, 0x80);
            var_18_18 += 0x260;
        } while (var_19_11 < arg0->unk40);
    }
    if (sp0 < 0) {
        func_00200E08(0, 0, arg0->unk20, 0x14, (u64) D_001601B0, 0);
        func_001FFC30(func_001FF960(0xE99EU, 6), temp_21_23 >> 4, 2, 0x20, 0x10, 0x80);
    }
    temp_5_100 = arg0->unk24;
    if ((temp_5_100 * 0x10) < var_18_18) {
        func_00200E08(0, temp_5_100 - 0x14, arg0->unk20, temp_5_100, (u64) D_001601B0, 0);
        func_001FFE18(func_001FF960(0xE99EU, 6), temp_21_23 >> 4, arg0->unk24 - 0x12, 0x20, 0x10, 0x80);
    }
    func_001F4398();
    return 2;
}
#endif /* NON_MATCHING */
