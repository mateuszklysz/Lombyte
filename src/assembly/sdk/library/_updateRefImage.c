/*
STATE: C_NON_MATCHING
SYMBOL: _updateRefImage
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
/* Exact SDK/library unit _updateRefImage; symbolic expected assembly retained pending source recovery. */
INCLUDE_ASM("config/us/expected/asm/assembly/sdk/library/_updateRefImage/_updateRefImage.s", _updateRefImage);
#else
#include "rnc/assembly_sdk_library__updateRefImage_types.h"
#include "types.h"
















s32 _updateRefImage(struct M2c_arg0 *arg0, s32 arg1) {
    s32 temp_10_7;
    s32 temp_4_64;
    s32 temp_9_5;
    s32 var_13_10;
    s32 var_4_115;
    s32 var_4_52;
    s32 *temp_3_106;
    s32 *temp_3_95;
    s32 *temp_4_105;
    s32 *temp_4_92;
    s32 *temp_6_97;
    struct M2c_var_2_113 *var_2_113;
    struct M2c_var_3_55 *var_3_55;
    struct M2c_var_8_8 *var_8_8;

    temp_9_5 = arg0->unk174;
    temp_10_7 = arg0->unk150;
    var_8_8 = NULL;
    var_13_10 = 0;
    if (temp_10_7 != 3) {
        goto block_19;
    }
    arg0->unk1C0 = (void *) arg0->unk1C4;
    arg0->unk1D0 = (void *) arg0->unk1D4;
    arg0->unk1E0 = (void *) arg0->unk1E4;
    if ((arg0->unkA0 + arg0->unkA4) < (((temp_9_5 ^ 3) == 0) ? 2 : 4)) {
        goto block_3;
    }
    arg0->unkE8 = 0;
    arg0->unk1A8 = 0;
    arg0->unk1A4 = 0;
block_3:
    if (arg0->unkE8 != 0) {
        goto block_5;
    }
    if (arg0->unk1A8 == 0) {
        goto block_7;
    }
block_5:
    if (arg0->unk1A4 != 0) {
        goto block_7;
    }
    arg0->unk1B8->unk28 = 0;
    arg0->unk1C8->unk28 = 0;
    arg0->unk1D8->unk28 = 0;
block_7:
    arg0->unkE8 = 0;
    arg0->unk1A8 = 0;
    if (arg0->unk174 != 3) {
        goto block_13;
    }
    var_4_52 = 1;
    if (arg0->unk1B8->unk28 != 1) {
        goto block_10;
    }
    var_3_55 = arg0->unk1BC;
    goto block_18;
block_10:
    if (arg0->unk1A4 == 0) {
        goto block_32;
    }
    var_3_55 = arg0->unk1BC;
    goto block_18;
block_13:
    temp_4_64 = arg0->unk1C8->unk28;
    if (temp_4_64 != 1) {
        goto block_15;
    }
    if (arg0->unk1D8->unk28 == temp_4_64) {
        goto block_16;
    }
block_15:
    if (arg0->unk1A4 == 0) {
        goto block_32;
    }
block_16:
    var_4_52 = arg0->unk1CC->unk28;
    if (var_4_52 != 1) {
        goto block_32;
    }
    var_3_55 = arg0->unk1DC;
block_18:
    var_13_10 = ((var_3_55->unk28 ^ 1) != 0) ? 0 : var_4_52;
    goto block_31;
block_19:
    if (arg1 != 0) {
        goto block_21;
    }
    temp_4_92 = arg0->unk1BC;
    arg0->unk1BC = (void *) arg0->unk1B8;
    temp_3_95 = arg0->unk1CC;
    arg0->unk1CC = (void *) arg0->unk1C8;
    temp_6_97 = arg0->unk1D8;
    arg0->unk1B8 = temp_4_92;
    arg0->unk1C8 = temp_3_95;
    arg0->unk1D8 = (void *) arg0->unk1DC;
    arg0->unk1DC = temp_6_97;
block_21:
    temp_4_105 = arg0->unk1CC;
    temp_3_106 = arg0->unk1DC;
    arg0->unk1C0 = (void *) arg0->unk1BC;
    arg0->unk1D0 = temp_4_105;
    arg0->unk1E0 = temp_3_106;
    if (temp_9_5 != 3) {
        goto block_24;
    }
    if (temp_10_7 != 2) {
        goto block_30;
    }
    var_2_113 = arg0->unk1B8;
    var_4_115 = 1;
    goto block_29;
block_24:
    if (temp_10_7 != 2) {
        goto block_30;
    }
    if (arg1 == 0) {
        goto block_27;
    }
    if (*(s32 *)((u8 *)(((temp_9_5 ^ 1) != 0) ? temp_4_105 : temp_3_106) + 0x28) == 1) {
        goto block_30;
    }
block_27:
    var_4_115 = arg0->unk1C8->unk28;
    if (var_4_115 != 1) {
        goto block_32;
    }
    var_2_113 = arg0->unk1D8;
block_29:
    if (var_2_113->unk28 != var_4_115) {
        goto block_32;
    }
block_30:
    var_13_10 = 1;
block_31:
block_32:
    if (arg0->unk174 == 2) {
        goto block_42;
    }
    if (arg0->unk174 >= 3) {
        goto block_38;
    }
    if (arg0->unk174 != 1) {
        goto block_36;
    }
    var_8_8 = arg0->unk1D0;
    goto block_43;
block_36:
    goto block_43;
block_38:
    if (arg0->unk174 != 3) {
        goto block_40;
    }
    var_8_8 = arg0->unk1C0;
    goto block_43;
block_40:
    goto block_43;
block_42:
    var_8_8 = arg0->unk1E0;
block_43:
    var_8_8->unk28 = 0;
    var_8_8->unk18 = (s64) arg0->unk828;
    var_8_8->unk2C = (s32) arg0->unk150;
    var_8_8->unk20 = (s64) arg0->unk830;
    var_8_8->unk30 = (s32) arg0->unk174;
    var_8_8->unk34 = (s32) arg0->unk13C;
    var_8_8->unk38 = (s32) arg0->unk188;
    var_8_8->unk3C = (s32) arg0->unk178;
    var_8_8->unk40 = (s32) arg0->unk184;
    var_8_8->unk44 = (s32) arg0->unk18C;
    var_8_8->unk48 = (s32) arg0->unk190;
    var_8_8->unk4C = (s32) arg0->unk194;
    var_8_8->unk50 = (s32) arg0->unk198;
    var_8_8->unk54 = (s32) arg0->unk19C;
    var_8_8->unk58 = (s32) arg0->unk1A0;
    var_8_8->unk5C = (s32) arg0->unk148;
    var_8_8->unk60 = (s32) arg0->unk14C;
    return var_13_10;
}
#endif /* NON_MATCHING */
