/*
STATE: C_NON_MATCHING
SYMBOL: _dualPrimeVector
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _dualPrimeVector; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/dual_prime_vector/_dualPrimeVector.s", _dualPrimeVector);
#else
#include "rnc/assembly_sdk_library_dual_prime_vector_types.h"
#include "types.h"






void _dualPrimeVector(struct M2c_arg0 *arg0, struct M2c_arg1 *arg1, struct M2c_arg2 *arg2, s32 arg3, s32 arg4) {
    s32 temp_6_107;
    s32 var_2_103;
    s32 var_2_14;
    s32 var_2_24;
    s32 var_2_32;
    s32 var_2_41;
    s32 var_2_46;
    s32 var_2_55;
    s32 var_2_62;
    s32 var_2_75;
    s32 var_2_93;

    if (arg0->unk174 != 3) {
        goto block_26;
    }
    if (arg0->unk178 != 0) {
        goto block_3;
    }
    goto block_16;
block_3:
    if (arg3 <= 0) {
        goto block_6;
    }
    var_2_14 = (s32) (arg3 + 1) >> 1;
    goto block_7;
block_6:
    var_2_14 = arg3 >> 1;
block_7:
    arg1->unk0 = (s32) (var_2_14 + arg2->unk0);
    if (arg4 <= 0) {
        goto block_9;
    }
    var_2_24 = (s32) (arg4 + 1) >> 1;
    goto block_10;
block_9:
    var_2_24 = arg4 >> 1;
block_10:
    arg1->unk4 = (s32) ((var_2_24 + arg2->unk4) - 1);
    var_2_32 = arg3 * 3;
    if (arg3 <= 0) {
        goto block_12;
    }
    var_2_32 += 1;
block_12:
    arg1->unk8 = (s32) ((var_2_32 >> 1) + arg2->unk0);
    var_2_41 = arg4 * 3;
    if (arg4 <= 0) {
        goto block_14;
    }
    var_2_41 += 1;
block_14:
    var_2_46 = var_2_41 >> 1;
block_15:
    arg1->unkC = (s32) (var_2_46 + arg2->unk4 + 1);
    return;
block_16:
    var_2_55 = arg3 * 3;
    if (arg3 <= 0) {
        goto block_18;
    }
    var_2_55 += 1;
block_18:
    arg1->unk0 = (s32) ((var_2_55 >> 1) + arg2->unk0);
    var_2_62 = arg4 * 3;
    if (arg4 <= 0) {
        goto block_20;
    }
    var_2_62 += 1;
block_20:
    arg1->unk4 = (s32) (((var_2_62 >> 1) + arg2->unk4) - 1);
    if (arg3 <= 0) {
        goto block_22;
    }
    var_2_75 = (s32) (arg3 + 1) >> 1;
    goto block_23;
block_22:
    var_2_75 = arg3 >> 1;
block_23:
    arg1->unk8 = (s32) (var_2_75 + arg2->unk0);
    if (arg4 <= 0) {
        goto block_25;
    }
    var_2_41 = arg4 + 1;
    goto block_14;
block_25:
    var_2_46 = arg4 >> 1;
    goto block_15;
block_26:
    if (arg3 <= 0) {
        goto block_28;
    }
    var_2_93 = (s32) (arg3 + 1) >> 1;
    goto block_29;
block_28:
    var_2_93 = arg3 >> 1;
block_29:
    arg1->unk0 = (s32) (var_2_93 + arg2->unk0);
    if (arg4 <= 0) {
        goto block_31;
    }
    var_2_103 = (s32) (arg4 + 1) >> 1;
    goto block_32;
block_31:
    var_2_103 = arg4 >> 1;
block_32:
    temp_6_107 = var_2_103 + arg2->unk4;
    arg1->unk4 = temp_6_107;
    if (arg0->unk174 != 1) {
        goto block_34;
    }
    arg1->unk4 = (s32) (temp_6_107 - 1);
    return;
block_34:
    arg1->unk4 = (s32) (temp_6_107 + 1);
    return;
}
#endif /* NON_MATCHING */
