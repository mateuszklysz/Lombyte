/* ROLE: recovered function `SetupGifPaging__Fi` (game/initonce.cpp, 0x118 bytes) starts here; this unit covers only its first fragment. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 56.9420%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f4280/FUN_001f4280.s", FUN_001f4280);
#else
#include "rnc/assembly_textbin_fun_001f4280_types.h"
#include "types.h"






extern u32 D_0015EE74[];
extern u32 D_0015EE78[];
extern u32 D_0015EE8C[];
extern u32 D_0015F450[];
extern u32 D_0015F458[];
extern u32 D_0015F45C[];
extern u32 D_00160F00[];
extern u8 D_0018D440[];
extern struct M2c_D_0019A3E8 D_0019A3E8;
void FUN_001f4280(s32 arg0) {
    s32 temp_2_69;
    s32 var_3_21;
    s32 var_4_65;
    s32 var_6_39;
    s64 *var_2_22;
    struct M2c_temp_4_47 *temp_4_47;

    D_0015F450[0] = D_00160F00[0];
    D_00160F00[0] += 0x10;
    D_0015EE74[0] = D_0015EE78[0];
    D_0015F458[0] = 0;
    if (D_0015F45C[0] > 0) {
        var_3_21 = D_0015F45C[0];
        var_2_22 = D_0018D440;
        do {
            *var_2_22 = 0;
            var_3_21 -= 1;
            var_2_22 += 0x10;
        } while (var_3_21 != 0);
    }
    if (arg0 == 0) {
        var_6_39 = 0;
        if (D_0019A3E8.unk18->unk44 > 0) {
loop_6:
            temp_4_47 = (var_6_39 * 8) + D_0019A3E8.unk24;
            if ((s32) temp_4_47->unk4 >= ((s32) D_0015EE8C[0] >> 8)) {
                temp_4_47->unk4 = 0U;
            }
            var_6_39 += 1;
            if (var_6_39 < D_0019A3E8.unk18->unk44) {
                goto loop_6;
            }
        }
        var_4_65 = 0;
        if (D_0019A3E8.unk18->unk24 > 0) {
loop_13:
            temp_2_69 = var_4_65 * 8;
            var_4_65 += 1;
            *(s32 *)((u8 *)(temp_2_69 + D_0019A3E8.unk28) + 0x4) = 0;
            if (var_4_65 < D_0019A3E8.unk18->unk24) {
                goto loop_13;
            }
        }
    }
}
#endif /* NON_MATCHING */
