/*
STATE: C_NON_MATCHING
SYMBOL: ParseOcclGrid
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `ParseOcclGrid` starts here; this unit covers only its beginning. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f2690/FUN_001f2690.s", FUN_001f2690);
#else
#include "rnc/assembly_textbin_fun_001f2690_types.h"
#include "types.h"












extern struct M2c_D_0015F640 *D_0015F640;
s32 *FUN_001f2690(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_4_43;
    s32 temp_5_25;
    s32 temp_6_10;
    u16 temp_3_52;
    struct M2c_temp_2_17 *temp_2_17;
    struct M2c_temp_2_32 *temp_2_32;
    struct M2c_temp_7_23 *temp_7_23;
    struct M2c_temp_7_41 *temp_7_41;
    struct M2c_temp_7_8 *temp_7_8;

    temp_7_8 = D_0015F640 + 4;
    temp_6_10 = arg2 - D_0015F640->unk4;
    if (temp_6_10 < 0) {
        goto block_8;
    }
    if (temp_6_10 >= (s32) temp_7_8->unk2) {
        goto block_8;
    }
    temp_2_17 = ((u8 *)temp_7_8 + ((temp_6_10 * 2)));
    if (temp_2_17->unk4 == 0) {
        goto block_8;
    }
    temp_7_23 = D_0015F640 + (temp_2_17->unk4 * 4);
    temp_5_25 = arg1 - temp_7_23->unk0;
    if (temp_5_25 < 0) {
        goto block_8;
    }
    if (temp_5_25 >= (s32) temp_7_23->unk2) {
        goto block_8;
    }
    temp_2_32 = ((u8 *)temp_7_23 + ((temp_5_25 * 2)));
    if (temp_2_32->unk4 == 0) {
        goto block_7;
    }
    goto block_9;
block_7:
block_8:
    return NULL;
block_9:
    temp_7_41 = D_0015F640 + (temp_2_32->unk4 * 4);
    temp_4_43 = arg0 - temp_7_41->unk0;
    if (temp_4_43 < 0) {
        goto block_8;
    }
    if (temp_4_43 >= (s32) temp_7_41->unk2) {
        goto block_8;
    }
    temp_3_52 = *(s32 *)((u8 *)(((u8 *)temp_7_41 + ((temp_4_43 * 2)))) + 0x4);
    if (temp_3_52 == 0xFFFF) {
        goto block_13;
    }
    return D_0015F640 + D_0015F640->unk0 + (temp_3_52 << 7);
block_13:
    return NULL;
}
#endif /* NON_MATCHING */
