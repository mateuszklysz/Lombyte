/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 27.9826%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00227378/FUN_00227378.s", FUN_00227378);
#else
#include "rnc/assembly_textbin_fun_00227378_types.h"
#include "types.h"










extern struct M2c_D_00151780 D_00151780;
extern struct M2c_D_00160F00 *D_00160F00;
void FUN_00227378(s64 arg0) {
    struct M2c_temp_24_53 *temp_24_53;
    struct M2c_temp_2_54 *temp_2_54;
    s32 *temp_3_99;
    struct M2c_var_5_79 *var_5_79;
    s32 temp_25_20;
    s32 temp_2_68;
    s32 temp_3_73;
    s32 temp_5_23;
    s32 var_15_47;
    s32 var_6_78;
    s32 var_7_75;
    s64 temp_3_83;

    temp_25_20 = (s16) ((D_00151780.unk150 > -1) ? D_00151780.unk150 : (D_00151780.unk150 + 0x1F)) >> 5;
    temp_5_23 = temp_25_20 + 5;
    D_00160F00->unk0 = temp_5_23 | 0x10000000;
    D_00160F00->unk4 = 0;
    var_15_47 = 0;
    D_00160F00->unkC = 0;
    D_00160F00->unkC = (s32) (temp_5_23 | 0x50000000);
    temp_24_53 = D_00160F00;
    temp_2_54 = ((u8 *)temp_24_53 + (0x10));
    D_00160F00 = temp_2_54;
    temp_24_53->unk10 = (s64) ((0x8000 << 0x2D) | 1);
    temp_2_54->unk48 = 0x44;
    temp_2_54->unk8 = 0xE;
    temp_2_54->unk10 = 0x3D801;
    temp_2_54->unk18 = 0x47;
    temp_2_54->unk20 = (s64) ((0x9000 << 0x2E) | 1);
    temp_2_54->unk28 = 0x10;
    temp_2_54->unk30 = 0x146;
    temp_2_54->unk38 = arg0;
    temp_2_54->unk40 = (s64) (temp_25_20 | 0x8000 | (0x9000 << 0x2E));
    if (temp_25_20 <= 0) {
        goto block_3;
    }
    temp_2_68 = D_00151780.unk152 * 8;
    temp_3_73 = 0 - (D_00151780.unk150 * 8);
    var_7_75 = temp_3_73 + 0x8000;
    var_6_78 = temp_3_73 + 0x8200;
    var_5_79 = ((u8 *)temp_24_53 + (0x60));
loop_2:
    temp_3_83 = var_6_78 | ((temp_2_68 + 0x7FF0) << 0x10);
    var_5_79->unk0 = (s64) (var_7_75 | ((0x8000 - temp_2_68) << 0x10));
    var_15_47 += 1;
    var_6_78 += 0x200;
    var_5_79->unk8 = temp_3_83;
    var_7_75 += 0x200;
    var_5_79 = ((u8 *)var_5_79 + (8 ))+ 8;
    if (var_15_47 < temp_25_20) {
        goto loop_2;
    }
block_3:
    temp_3_99 = D_00160F00 + ((temp_25_20 * 0x10) + 0x50);
    D_00160F00 = temp_3_99;
    *temp_3_99 = 0x10000000;
    D_00160F00->unk8 = 0;
    D_00160F00->unk8 = 0x13000000;
    D_00160F00->unk4 = 0;
    D_00160F00 += 0x10;
    return;
}
#endif /* NON_MATCHING */
