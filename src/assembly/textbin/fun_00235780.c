/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 65.7292%
 * blocker: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
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
    s16 temp_3_28;
    s16 temp_3_35;
    s32 *var_9_11;
    s32 var_2_10;
    s32 var_7_14;
    struct M2c_temp_5_27 *temp_5_27;
    struct M2c_temp_8_17 *temp_8_17;
    struct M2c_var_4_20 *var_4_20;

    if (*(s32 *)D_001E3000 < 0) {
        goto block_10;
    }
    var_2_10 = *(s32 *)D_001E3000;
    var_9_11 = D_001E3000 + 4;
loop_2:
    var_7_14 = 0;
    temp_8_17 = *((var_2_10 * 4) + D_001E1700);
    var_4_20 = temp_8_17->unk2C;
    if (temp_8_17->unk23 == 0) {
        goto block_9;
    }
loop_4:
    temp_5_27 = (var_4_20->unk33 * 4) + D_001E2A00;
    temp_3_28 = temp_5_27->unk0;
    if (temp_3_28 == 0) {
        goto block_6;
    }
    var_4_20->unk0 = (s32) ((var_4_20->unk0 & 0xFFFFC000) | temp_3_28);
block_6:
    temp_3_35 = temp_5_27->unk2;
    if (temp_3_35 == 0) {
        goto block_8;
    }
    var_4_20->unk20 = (s32) ((var_4_20->unk20 & 0xFFFFC000) | temp_3_35);
block_8:
    var_7_14 += 1;
    var_4_20 += 0x50;
    if (var_7_14 < (s32) temp_8_17->unk23) {
        goto loop_4;
    }
block_9:
    var_2_10 = *var_9_11;
    var_9_11 += 4;
    if (var_2_10 >= 0) {
        goto loop_2;
    }
block_10:
    return;
}
#endif /* NON_MATCHING */
