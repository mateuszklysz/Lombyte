#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f76a0/FUN_001f76a0.s", FUN_001f76a0);
#else
#include "types.h"
#include "eetypes.h"
struct M2c_D_00160F00 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct M2c_D_0018CD00 {
    u8 pad_0[0x190];
    s32 unk190;
    u8 pad_194[0xC];
    s32 unk1A0;
    u8 pad_1A4[0x6C];
    s32 unk210;
    u8 pad_214[0x14];
    s32 unk228;
    s32 unk22C;
};

struct M2c_temp_16_56 {
    u8 pad_0[0x10];
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    u8 pad_20[0x80];
    s32 unkA0;
    s32 unkA4;
    s32 unkA8;
    s32 unkAC;
    s64 unkB0;
    u8 pad_B8[0x8];
    s64 unkC0;
    u8 pad_C8[0x8];
    s32 unkD0;
    s32 unkD4;
    s32 unkD8;
    s32 unkDC;
    s32 unkE0;
    s32 unkE4;
    s32 unkE8;
    s32 unkEC;
};

struct M2c_temp_17_57 {
    u8 pad_0[0x38];
    s32 unk38;
};

struct M2c_temp_17_70 {
    u8 pad_0[0x38];
    s32 unk38;
};

struct M2c_temp_4_112 {
    s32 unk0;
};

extern s32 D_0010E800;
extern u8 D_0010E810[];
extern s32 D_0015F348;
extern s32 D_0015F620;
extern struct M2c_D_00160F00 *D_00160F00[];
extern u8 D_00187080[];
extern struct M2c_D_0018CD00 D_0018CD00;
extern void func_001F9A68();
extern void func_001F9FF8();
extern void func_001FA378();
extern void func_00233830();
extern void func_00233C90();
void FUN_001f76a0(void) {
    u8 sp_slot[0x80]; s32 sp30;
    f32 sp3C;
    struct M2c_temp_16_56 *temp_16_56;
    s32 *temp_17_102;
    struct M2c_temp_17_57 *temp_17_57;
    struct M2c_temp_17_70 *temp_17_70;
    struct M2c_temp_4_112 *temp_4_112;
    func_001F9FF8(sp_slot, 0x44800000);
    func_001F9A68(&sp30, D_00187080, 0xC4800000);
    sp3C = 1.0f;
    __asm__ volatile ("" : "+f" (sp3C));
    if (D_0015F620 != 7) {
        func_00233830(D_0010E810, *(s32 *)0x10E800);
        *(s32 *)0x15F620 = 7;
    }
    D_00160F00[0]->unk0 = 0x10000000;
    D_00160F00[0]->unk4 = 0;
    D_00160F00[0]->unk8 = 0x11000000;
    D_00160F00[0]->unkC = 0x01000404;
    temp_16_56 = D_00160F00[0];
    temp_17_57 = ((u8 *)temp_16_56) + 0x20;
    temp_16_56->unk10 = 0;
    temp_16_56->unk14 = 0;
    temp_16_56->unk18 = 0;
    temp_16_56->unk1C = 0x6C0C43A4;
    func_001FA378(temp_17_57, ((u8 *)D_00187080 - (u8 *)0x100), sp_slot, 0x6C0C43A4, 0x11000000);
    temp_17_57->unk38 = (f32)(u32)(temp_17_57->unk38 + *(s32 *)0x15F348);
    temp_17_70 = ((u8 *)temp_16_56) + 0x60;
    func_001FA378(temp_17_70, ((u8 *)D_00187080 - (u8 *)0x80), sp_slot);
    temp_17_70->unk38 = (f32)(u32)(temp_17_70->unk38 + *(s32 *)0x15F348);
    temp_16_56->unkA0 = 0x8000;
    temp_16_56->unkA4 = 0x303EC000;
    temp_16_56->unkA8 = 0x412;
    temp_16_56->unkAC = (f32) D_0018CD00.unk210;
    temp_16_56->unkB0 = (s64) D_0018CD00.unk190;
    temp_16_56->unkC0 = (s64) D_0018CD00.unk1A0;
    temp_16_56->unkD0 = (f32) D_0018CD00.unk22C;
    temp_17_102 = ((u8 *)temp_16_56) + 0xF0;
    temp_16_56->unkE4 = 0x020001D2;
    temp_16_56->unkD4 = (f32) D_0018CD00.unk228;
    temp_16_56->unkE8 = 0x15000000;
    temp_16_56->unkE0 = 0x03000000;
    temp_16_56->unkD8 = 0;
    temp_16_56->unkDC = 0;
    temp_16_56->unkEC = 0;
    temp_4_112 = D_00160F00[0];
    temp_4_112->unk0 = (s32) (temp_4_112->unk0 | (((s32) ((u32)temp_17_102 - (u32)temp_4_112) >> 4) - 1));
    D_00160F00[0] = temp_17_102;
    func_00233C90(temp_4_112, 0x15000000, 0x412);
}

extern void func_001F76A0(void) __attribute__((alias("FUN_001f76a0")));
#endif /* NON_MATCHING */
