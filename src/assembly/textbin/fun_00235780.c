/* ROLE: recovered function `PatchTieGifs` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 60.2500%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00235780/FUN_00235780.s", FUN_00235780);
#else
#include "rnc/assembly_textbin_fun_00235780_types.h"
#include "types.h"






extern u8 D_001E1700[];
extern u8 D_001E2A00[];
extern u8 D_001E3000[];
void FUN_00235780(void) {
    s16 temp_3_30;
    s16 temp_3_37;
    s32 *var_9_13;
    s32 var_2_12;
    s32 var_7_16;
    struct M2c_temp_5_29 *temp_5_29;
    struct M2c_temp_8_19 *temp_8_19;
    struct M2c_var_4_22 *var_4_22;

    if (*(s32 *)D_001E3000 < 0) {
        goto block_10;
    }
    var_2_12 = *(s32 *)D_001E3000;
    var_9_13 = D_001E3000 + 4;
loop_2:
    var_7_16 = 0;
    temp_8_19 = *((var_2_12 * 4) + D_001E1700);
    var_4_22 = temp_8_19->unk2C;
    if (temp_8_19->unk23 == 0) {
        goto block_9;
    }
loop_4:
    temp_5_29 = (var_4_22->unk33 * 4) + D_001E2A00;
    temp_3_30 = temp_5_29->unk0;
    if (temp_3_30 == 0) {
        goto block_6;
    }
    var_4_22->unk0 = (s32) ((var_4_22->unk0 & 0xFFFFC000) | temp_3_30);
block_6:
    temp_3_37 = temp_5_29->unk2;
    if (temp_3_37 == 0) {
        goto block_8;
    }
    var_4_22->unk20 = (s32) ((var_4_22->unk20 & 0xFFFFC000) | temp_3_37);
block_8:
    var_7_16 += 1;
    var_4_22 += 0x50;
    if (var_7_16 < (s32) temp_8_19->unk23) {
        goto loop_4;
    }
block_9:
    var_2_12 = *var_9_13;
    var_9_13 += 4;
    if (var_2_12 >= 0) {
        goto loop_2;
    }
block_10:
    return;
}
#endif /* NON_MATCHING */
