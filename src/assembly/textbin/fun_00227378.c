/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 11.3043%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
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
extern struct M2c_D_00160F00 *D_00160F00[];
void FUN_00227378(s64 arg0) {
    struct M2c_temp_24_51 *temp_24_51;
    struct M2c_temp_2_52 *temp_2_52;
    s32 *temp_3_97;
    struct M2c_var_5_77 *var_5_77;
    s32 temp_25_18;
    s32 temp_2_66;
    s32 temp_3_71;
    register s32 temp_5_21 asm("a1");
    s32 var_15_45;
    s32 var_6_76;
    s32 var_7_73;
    s64 temp_3_81;

    temp_25_18 = (s16) ((D_00151780.unk150 > -1) ? D_00151780.unk150 : (D_00151780.unk150 + 0x1F)) >> 5;
    temp_5_21 = temp_25_18 + 5;
    D_00160F00[0]->unk0 = temp_5_21 | 0x10000000;
    D_00160F00[0]->unk4 = 0;
    var_15_45 = 0;
    D_00160F00[0]->unk8 = 0;
    D_00160F00[0]->unkC = (s32) (temp_5_21 | 0x50000000);
    temp_24_51 = D_00160F00[0];
    temp_2_52 = ((u8 *)temp_24_51 + (0x10));
    D_00160F00[0] = temp_2_52;
    temp_24_51->unk10 = (s64) ((0x8000 << 0x2D) | 1);
    temp_2_52->unk48 = 0x44;
    temp_2_52->unk8 = 0xE;
    temp_2_52->unk10 = 0x3D801;
    temp_2_52->unk18 = 0x47;
    temp_2_52->unk20 = (s64) ((0x9000 << 0x2E) | 1);
    temp_2_52->unk28 = 0x10;
    temp_2_52->unk30 = 0x146;
    temp_2_52->unk38 = arg0;
    temp_2_52->unk40 = (s64) (temp_25_18 | 0x8000 | (0x9000 << 0x2E));
    if (temp_25_18 <= 0) {
        goto block_3;
    }
    temp_2_66 = D_00151780.unk152 * 8;
    temp_3_71 = -(D_00151780.unk150 * 8);
    var_7_73 = temp_3_71 + 0x8000;
    var_6_76 = temp_3_71 + 0x8200;
    var_5_77 = ((u8 *)temp_24_51 + (0x60));
loop_2:
    temp_3_81 = var_6_76 | ((temp_2_66 + 0x7FF0) << 0x10);
    var_5_77->unk0 = (s64) (var_7_73 | ((0x8000 - temp_2_66) << 0x10));
    var_15_45 += 1;
    var_6_76 += 0x200;
    var_5_77->unk8 = temp_3_81;
    var_7_73 += 0x200;
    var_5_77 = ((u8 *)var_5_77 + (8 ))+ 8;
    if (var_15_45 < temp_25_18) {
        goto loop_2;
    }
block_3:
    temp_3_97 = D_00160F00[0] + ((temp_25_18 * 0x10) + 0x50);
    D_00160F00[0] = temp_3_97;
    *temp_3_97 = 0x10000000;
    D_00160F00[0]->unk4 = 0;
    D_00160F00[0]->unk8 = 0x13000000;
    D_00160F00[0]->unkC = 0;
    D_00160F00[0] += 0x10;
    return;
}
#endif /* NON_MATCHING */
