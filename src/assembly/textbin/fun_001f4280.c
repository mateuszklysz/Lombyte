#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f4280/FUN_001f4280.s", FUN_001f4280);
#else
#include "rnc/assembly_textbin_fun_001f4280_types.h"
#include "types.h"






extern s32 D_0015EE74[];
extern s32 D_0015EE78[];
extern s32 D_0015EE8C[];
extern s32 D_0015F450[];
extern s32 D_0015F458;
extern s32 D_0015F45C[];
extern s32 D_00160F00[];
extern u8 D_0018D440[];
extern struct M2c_D_0019A3E8 D_0019A3E8;
void FUN_001f4280(s32 arg0) {
    s32 temp_2_67;
    s32 var_3_19;
    s32 var_4_63;
    s32 var_6_37;
    s64 *var_2_20;
    struct M2c_temp_4_45 *temp_4_45;

    D_0015F450[0] = D_00160F00[0];
    D_00160F00[0] += 0x10;
    D_0015EE74[0] = D_0015EE78[0];
    D_0015F458 = 0;
    if (D_0015F45C[0] > 0) {
        var_3_19 = D_0015F45C[0];
        var_2_20 = D_0018D440;
        do {
            *var_2_20 = 0;
            var_3_19 -= 1;
            var_2_20 += 2;
        } while (var_3_19 != 0);
    }
    if (arg0 == 0) {
        var_6_37 = 0;
        if (D_0019A3E8.unk18->unk44 > 0) {
loop_6:
            temp_4_45 = (var_6_37 * 8) + D_0019A3E8.unk24;
            if ((s32) temp_4_45->unk4 >= ((s32) D_0015EE8C[0] >> 8)) {
                temp_4_45->unk4 = 0U;
            }
            var_6_37 += 1;
            if (var_6_37 < D_0019A3E8.unk18->unk44) {
                goto loop_6;
            }
        }
        var_4_63 = 0;
        if (D_0019A3E8.unk18->unk24 > 0) {
loop_13:
            temp_2_67 = var_4_63 * 8;
            var_4_63 += 1;
            *(s32 *)((u8 *)(temp_2_67 + D_0019A3E8.unk28) + 0x4) = 0;
            if (var_4_63 < D_0019A3E8.unk18->unk24) {
                goto loop_13;
            }
        }
    }
}
#endif /* NON_MATCHING */
