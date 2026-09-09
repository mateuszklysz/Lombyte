#ifndef RNC_ASSEMBLY_TEXTBIN_FUN_001FCE28_TYPES_H
#define RNC_ASSEMBLY_TEXTBIN_FUN_001FCE28_TYPES_H

#include "types.h"

struct M2c_D_0013C940 {
    u8 pad_0[0x1A4];
    s32 unk1A4;
};

struct M2c_D_0013F350 {
    u8 pad_0[0x19C];
    s32 unk19C;
    u8 pad_1A0[0x6E0];
    s32 unk880;
    u8 pad_884[0xC];
    struct M2c_D_0013F350_unk890 * unk890;
    u8 pad_894[0x6];
    s16 unk89A;
    u8 pad_89C[0xD73];
    u8 unk160F;
    u8 pad_1610[0xA70];
    struct M2c_D_0013F350_unk2080 * unk2080;
};

struct M2c_D_0013F350_unk2080 {
    u8 pad_0[0x31];
    s32 unk31;
    s32 unk34;
    u8 pad_38[0x5C];
    s32 unk94;
};

struct M2c_D_0013F350_unk890 {
    u8 pad_0[0xBC];
    s32 unkBC;
};

struct M2c_D_00193300 {
    s32 unk0;
    s32 unk4;
    u8 pad_8[0x18];
    s32 unk20;
    s32 unk24;
};

struct M2c_temp_16_333 {
    u8 pad_0[0x20];
    s32 unk20;
    s32 unk24;
};

struct M2c_temp_16_89 {
    u8 pad_0[0x4];
    s32 unk4;
    u8 pad_8[0xC];
    s32 unk14;
    u8 pad_18[0x4];
    s32 unk1C;
    s32 unk20;
};

struct M2c_temp_2_440 {
    u8 pad_0[0x14];
    s32 unk14;
    s32 unk18;
};

struct M2c_temp_3_223 {
    u8 pad_0[0x1C];
    s32 unk1C;
    s32 unk20;
    s32 unk24;
};

struct M2c_temp_4_210 {
    u8 pad_0[0x1C];
    s32 unk1C;
    s32 unk20;
    s32 unk24;
};

struct M2c_temp_4_362 {
    u8 pad_0[0x4];
    s32 unk4;
    u8 pad_8[0xC];
    s32 unk14;
};

struct M2c_var_2_97 {
    u8 pad_0[0x14];
    s32 unk14;
};

#endif /* RNC_ASSEMBLY_TEXTBIN_FUN_001FCE28_TYPES_H */
