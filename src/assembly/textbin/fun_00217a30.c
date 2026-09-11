/*
STATE: C_NON_MATCHING
SYMBOL: CreatePart
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `CreatePart` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00217a30/FUN_00217a30.s", FUN_00217a30);
#else
#include "rnc/assembly_textbin_fun_00217a30_types.h"
#include "types.h"


extern s32 D_001600AC;
extern s32 D_001600B0;
extern s32 D_001600B4;
extern s32 D_001600B8;
extern u8 D_001CD780[];
s32 *FUN_00217a30(s8 arg0) {
    s32 temp_10_58;
    s32 var_2_55;
    u32 temp_6_13;
    u32 var_1_48;
    u32 var_24_47;
    u8 *temp_1_38;
    struct M2c_temp_2_89 *temp_2_89;

    temp_6_13 = D_001600B0;
    if ((D_001600B0 - 0x800) < 0) {
        goto block_9;
    }
    goto block_20;
block_9:
    temp_1_38 = (temp_6_13 >> 3) + D_001CD780;
    *temp_1_38 |= 1 << (temp_6_13 & 7);
    var_24_47 = D_001600B0 + 1;
    if ((D_001600B0 - D_001600B4) > 0) {
        goto block_16;
    }
    var_1_48 = var_24_47 >> 3;
    var_24_47 = var_1_48 * 8;
loop_11:
    if ((var_24_47 - 0x800) >= 0) {
        goto block_16;
    }
    var_2_55 = 1;
loop_13:
    temp_10_58 = *(var_1_48 + D_001CD780) & var_2_55;
    var_2_55 *= 2;
    if (temp_10_58 == 0) {
        goto block_16;
    }
    var_24_47 += 1;
    if (var_2_55 & 0xFF) {
        goto loop_13;
    }
    var_1_48 += 1;
    goto loop_11;
block_16:
    D_001600B0 = var_24_47;
    D_001600B4 = /* m2c-unknown:  unknown instruction: pmaxw $t9, $t9, $a2  */
    D_001600B8 += 1;
    temp_2_89 = (temp_6_13 << 6) + D_001600AC;
    temp_2_89->unk0 = 0;
    temp_2_89->unk10 = 0;
    temp_2_89->unk10 = 0;
    temp_2_89->unk10 = 0;
    temp_2_89->unk0 = arg0;
    return temp_2_89;
block_20:
    return NULL;
}
#endif /* NON_MATCHING */
