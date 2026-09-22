#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f2690/FUN_001f2690.s", FUN_001f2690);
#else
#include "rnc/assembly_textbin_fun_001f2690_types.h"
#include "types.h"












extern struct M2c_D_0015F640 *D_0015F640[];
s32 *FUN_001f2690(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_4_41;
    s32 temp_5_23;
    s32 temp_6_8;
    u16 temp_3_50;
    struct M2c_temp_2_15 *temp_2_15;
    struct M2c_temp_2_30 *temp_2_30;
    struct M2c_temp_7_21 *temp_7_21;
    struct M2c_temp_7_39 *temp_7_39;
    struct M2c_temp_7_6 *temp_7_6;

    temp_7_6 = D_0015F640[0] + 4;
    temp_6_8 = arg2 - D_0015F640[0]->unk4;
    if (temp_6_8 < 0) {
        goto block_8;
    }
    if (temp_6_8 >= (s32) temp_7_6->unk2) {
        goto block_8;
    }
    temp_2_15 = ((u8 *)temp_7_6 + ((temp_6_8 * 2)));
    if (temp_2_15->unk4 == 0) {
        goto block_8;
    }
    temp_7_21 = D_0015F640[0] + (temp_2_15->unk4 * 4);
    temp_5_23 = arg1 - temp_7_21->unk0;
    if (temp_5_23 < 0) {
        goto block_8;
    }
    if (temp_5_23 >= (s32) temp_7_21->unk2) {
        goto block_8;
    }
    temp_2_30 = ((u8 *)temp_7_21 + ((temp_5_23 * 2)));
    if (temp_2_30->unk4 == 0) {
        goto block_7;
    }
    goto block_9;
block_7:
block_8:
    return NULL;
block_9:
    temp_7_39 = D_0015F640[0] + (temp_2_30->unk4 * 4);
    temp_4_41 = arg0 - temp_7_39->unk0;
    if (temp_4_41 < 0) {
        goto block_8;
    }
    if (temp_4_41 >= (s32) temp_7_39->unk2) {
        goto block_8;
    }
    temp_3_50 = *(s32 *)((u8 *)(((u8 *)temp_7_39 + ((temp_4_41 * 2)))) + 0x4);
    if (temp_3_50 == 0xFFFF) {
        goto block_13;
    }
    return D_0015F640[0] + D_0015F640[0]->unk0 + (temp_3_50 << 7);
block_13:
    return NULL;
}
#endif /* NON_MATCHING */
