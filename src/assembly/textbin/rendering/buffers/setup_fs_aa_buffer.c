#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/rendering/buffers/setup_fs_aa_buffer/FUN_001fa978.s", FUN_001fa978);
#else
#include "types.h"
struct M2c_D_00151780 {
    u8 pad_0[0x150];
    s16 unk150;
    u16 unk152;
    s16 unk154;
    s16 unk156;
    s16 unk158;
    s16 unk15A;
    u16 unk15C;
    s16 unk15E;
    u8 pad_160[0x4];
    s32 unk164;
    u16 unk168;
    u16 unk16A;
    s16 unk16C;
    s16 unk16E;
    s32 unk170;
};

struct M2c_D_00151900 {
    s64 unk0;
    s32 unk8;
    u8 pad_C[0x4];
    s32 unk10;
    u8 pad_14[0x4];
    s32 unk18;
    u8 pad_1C[0x4];
    s32 unk20;
    u8 pad_24[0x4];
    s32 unk28;
    u8 pad_2C[0x4];
    s64 unk30;
    f32 unk38;
    u8 pad_3C[0x4];
    s64 unk40;
    s32 unk48;
    u8 pad_4C[0x4];
    s64 unk50;
    s32 unk58;
};

struct M2c_D_00151B60 {
    s64 unk0;
    s32 unk8;
    u8 pad_C[0x4];
    s32 unk10;
    u8 pad_14[0x4];
    f32 unk18;
    u8 pad_1C[0x4];
    s32 unk20;
    u8 pad_24[0x4];
    s32 unk28;
    u8 pad_2C[0x4];
    s64 unk30;
    s32 unk38;
    u8 pad_3C[0x4];
    s64 unk40;
    s32 unk48;
    u8 pad_4C[0x4];
    s64 unk50;
    s32 unk58;
    u8 pad_5C[0x204];
    s64 unk260;
    f32 unk268;
    u8 pad_26C[0x4];
    s32 unk270;
    u8 pad_274[0x4];
    s64 unk278;
    s64 unk280;
    s64 unk288;
};

struct M2c_D_00151DF0 {
    s64 unk0;
    s32 unk8;
    u8 pad_C[0x4];
    s32 unk10;
    u8 pad_14[0x4];
    s32 unk18;
    u8 pad_1C[0x4];
    s64 unk20;
    s32 unk28;
    u8 pad_2C[0x4];
    s64 unk30;
    s32 unk38;
    u8 pad_3C[0x4];
    s64 unk40;
    f32 unk48;
};

struct M2c_D_00152040 {
    s64 unk0;
    s32 unk8;
    u8 pad_C[0x4];
    s32 unk10;
    u8 pad_14[0x4];
    s32 unk18;
    u8 pad_1C[0x4];
    s64 unk20;
    s32 unk28;
    u8 pad_2C[0x4];
    s32 unk30;
    u8 pad_34[0x4];
    s64 unk38;
    s64 unk40;
    s32 unk48;
};

struct M2c_D_0015EEB8 {
    u8 pad_0[0x10];
    s64 unk10;
    u8 pad_18[0x18];
    s64 unk30;
    s64 unk38;
    s64 unk40;
    u8 pad_48[0x8];
    s64 unk50;
    u8 pad_58[0x68];
    s64 unkC0;
    s64 unkC8;
    s64 unkD0;
    u8 pad_D8[0x8];
    s64 unkE0;
    u8 pad_E8[0x68];
    s16 unk150;
    s16 unk152;
    s16 unk154;
    s16 unk156;
    s16 unk158;
    s16 unk15A;
    u8 pad_15C[0x2];
};

struct M2c_temp_15_206 {
    u8 pad_0[0x8];
    s64 unk8;
};

struct M2c_temp_15_222 {
    u8 pad_0[0x8];
    s64 unk8;
};

struct M2c_temp_6_421 {
    u8 pad_0[0x8];
    s64 unk8;
};

struct M2c_temp_6_432 {
    u8 pad_0[0x8];
    s64 unk8;
};

struct M2c_temp_7_333 {
    u8 pad_0[0x8];
    s64 unk8;
};

struct M2c_temp_7_343 {
    u8 pad_0[0x8];
    s64 unk8;
};

struct M2c_var_11_475 {
    s64 unk0;
    s64 unk8;
};

struct M2c_var_15_176 {
    s64 unk0;
    s64 unk8;
};

struct M2c_var_6_392 {
    s64 unk0;
    s64 unk8;
};

struct M2c_var_6_516 {
    s64 unk0;
    s64 unk8;
};

struct M2c_var_6_547 {
    s64 unk0;
    s64 unk8;
};

struct M2c_var_7_302 {
    s32 unk0;
    u8 pad_4[0x4];
    s64 unk8;
};

extern u8 D_0013CC90[];
extern u8 D_0013CDD0[];
extern struct M2c_D_00151780 D_00151780;
extern struct M2c_D_00151900 D_00151900;
extern struct M2c_D_00151B60 D_00151B60;
extern struct M2c_D_00151DF0 D_00151DF0;
extern struct M2c_D_00152040 D_00152040;
extern s32 D_0015EE80;
extern s32 D_0015EE84[];
extern s32 D_0015EE88;
extern struct M2c_D_0015EEB8 *D_0015EEB8[];
extern void sceGsSetDefDispEnv();
extern s32 sceGsSetDefDrawEnv();
void setup_fs_aa_buffer(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5) __asm__("FUN_001fa978");

void setup_fs_aa_buffer(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5) {
    s16 temp_4_234;
    s16 temp_5_209;
    register s32 temp_10_15 asm("s7");
    s32 temp_11_17;
    register s32 temp_3_211 asm("s4");
    s32 temp_4_327;
    register s32 temp_6_202 asm("s4");
    s32 var_12_481;
    s32 var_13_399;
    u32 var_13_477;
    s32 var_14_396;
    s32 var_16_281;
    register s32 var_18_289 asm("s2");
    s32 var_19_174;
    register s32 var_19_287 asm("s3");
    register s32 var_5_483 asm("s0");
    register s32 var_5_518 asm("s0");
    register s32 var_5_549 asm("s0");
    s32 var_7_394;
    s32 var_7_517;
    s32 var_7_548;
    register s32 var_8_400 asm("s0");
    s32 var_8_513;
    s32 var_8_544;
    s64 temp_21_66;
    s64 temp_2_329;
    u64 temp_30_59;
    struct M2c_temp_15_206 *temp_15_206;
    struct M2c_temp_15_222 *temp_15_222;
    struct M2c_temp_6_421 *temp_6_421;
    struct M2c_temp_6_432 *temp_6_432;
    struct M2c_temp_7_333 *temp_7_333;
    struct M2c_temp_7_343 *temp_7_343;
    struct M2c_var_11_475 *var_11_475;
    struct M2c_var_15_176 *var_15_176;
    struct M2c_var_6_392 *var_6_392;
    struct M2c_var_6_516 *var_6_516;
    register struct M2c_var_6_547 * var_6_547 asm("s0");
    register struct M2c_var_7_302 * var_7_302 asm("s0");

    temp_10_15 = (s32) D_0015EE84[0] >> 0xD;
    temp_11_17 = (s32) D_0015EE88 >> 0xD;
    D_00151780.unk156 = (s16) temp_10_15;
    D_00151780.unk16E = (s16) temp_11_17;
    D_00151780.unk150 = arg0;
    D_00151780.unk152 = arg1;
    D_00151780.unk16C = 0x31;
    D_00151780.unk15E = (s16) ((s32) D_0015EE80 >> 0xD);
    D_0015EEB8[0] = &D_00151780;
    D_00151780.unk158 = arg2;
    D_00151780.unk15A = arg3;
    D_00151780.unk168 = arg4;
    D_00151780.unk16A = arg5;
    D_00151780.unk170 = 0;
    D_00151780.unk15C = 0;
    temp_30_59 = -1U >> 4;
    D_00151780.unk154 = 0;
    D_00151780.unk164 = 0;
    sceGsSetDefDispEnv(&D_00151780, 0, arg2, arg3, arg4, arg5, temp_10_15, temp_11_17);
    temp_21_66 = 0x8000 << 0x2D;
    D_0015EEB8[0]->unk10 = (s64) ((D_0015EEB8[0]->unk10 & ~0x1FF) | (D_00151780.unk15E & 0x1FF));
    sceGsSetDefDrawEnv(D_0015EEB8[0] + 0x40, D_00151780.unk154, D_00151780.unk150, D_00151780.unk152, 3, D_00151780.unk16C);
    D_0015EEB8[0]->unk40 = (s64) ((D_0015EEB8[0]->unk40 & ~0x1FF) | (D_00151780.unk156 & 0x1FF));
    D_0015EEB8[0]->unk50 = (s64) (D_00151780.unk16E | (((u16) D_00151780.unk16C & 0xF) << 0x18));
    D_0015EEB8[0]->unk30 = (s64) /* m2c-unknown:  unknown instruction: por $v0, $zero, $zero  */
    D_0015EEB8[0]->unk38 = (s64) ((D_0015EEB8[0]->unk38 & ~0xF) | 0xE);
    D_0015EEB8[0]->unk30 = (s64) (((((s64) D_0015EEB8[0]->unk30 & ~0x7FFF) | 8 | 0x8000) & temp_30_59) | temp_21_66);
    sceGsSetDefDrawEnv(D_0015EEB8[0] + 0xD0, D_00151780.unk15C, D_00151780.unk158, D_00151780.unk15A, 0, 0);
    D_0015EEB8[0]->unkE0 = (s64) (0x8000 << 0x11);
    D_0015EEB8[0]->unkD0 = (s64) ((D_0015EEB8[0]->unkD0 & ~0x1FF) | (D_00151780.unk15E & 0x1FF));
    D_0015EEB8[0]->unkC0 = (s64) /* m2c-unknown:  unknown instruction: por $v1, $zero, $zero  */
    D_0015EEB8[0]->unkC8 = (s64) ((D_0015EEB8[0]->unkC8 & ~0xF) | 0xE);
    D_0015EEB8[0]->unkC0 = (s64) (((((s64) D_0015EEB8[0]->unkC0 & ~0x7FFF) | 8 | 0x8000) & temp_30_59) | temp_21_66);
    (*(struct M2c_D_00151B60 *)0x151B60).unk0 = (s64) ((((0x8116 << 0x10) | 0x8000) << 0x1F) | 1);
    (*(struct M2c_D_00151B60 *)0x151B60).unk8 = 0xEEEE;
    var_19_174 = 0;
    (*(struct M2c_D_00151B60 *)0x151B60).unk10 = 0x30000;
    var_15_176 = ((u8 *)&D_00151B60 + 0x60);
    (*(struct M2c_D_00151B60 *)0x151B60).unk18 = 0x47;
    (*(struct M2c_D_00151B60 *)0x151B60).unk20 = 5;
    (*(struct M2c_D_00151B60 *)0x151B60).unk28 = 8;
    (*(struct M2c_D_00151B60 *)0x151B60).unk30 = (s64) ((0x8000 << 0x11) | 0x261);
    (*(struct M2c_D_00151B60 *)0x151B60).unk38 = 0x14;
    (*(struct M2c_D_00151B60 *)0x151B60).unk48 = 6;
    (*(struct M2c_D_00151B60 *)0x151B60).unk50 = (s64) ((0x8800 << 0x2F) | 0x8010);
    (*(struct M2c_D_00151B60 *)0x151B60).unk58 = 0x5353;
    (*(struct M2c_D_00151B60 *)0x151B60).unk40 = (s64) (((s64) D_0015EEB8[0]->unk156 << 5) | ((((u16) D_0015EEB8[0]->unk150 >> 6) & 0x3F) << 0xE) | ((s64) D_0015EEB8[0]->unk154 << 0x14) | (0xEA80 << 0x14));
loop_1:
    temp_6_202 = var_19_174 + 1;
    var_15_176->unk0 = (s64) (var_19_174 * (s16) D_0015EEB8[0]->unk150);
    temp_15_206 = ((u8 *)var_15_176 + (8));
    temp_5_209 = D_0015EEB8[0]->unk158;
    temp_3_211 = var_19_174 * temp_5_209;
    var_19_174 = temp_6_202;
    var_15_176->unk8 = (s64) (((temp_3_211 + 0x8000) - (temp_5_209 * 8)) | ((0x7FF8 - (D_0015EEB8[0]->unk15A * 8)) << 0x10));
    temp_15_222 = ((u8 *)temp_15_206 + (8));
    temp_15_206->unk8 = (s64) ((temp_6_202 * (s16) D_0015EEB8[0]->unk150) | ((s64) D_0015EEB8[0]->unk152 << 0x14));
    temp_4_234 = D_0015EEB8[0]->unk158;
    temp_15_222->unk8 = (s64) ((((temp_6_202 * temp_4_234) + 0x8000) - (temp_4_234 * 8)) | (((D_0015EEB8[0]->unk15A * 8) + 0x7FF8) << 0x10));
    var_15_176 = ((u8 *)temp_15_222 + (8 ))+ 8;
    if (var_19_174 < 0x10) {
        goto loop_1;
    }
    (*(struct M2c_D_00151B60 *)0x151B60).unk270 = 0x181;
    (*(struct M2c_D_00151B60 *)0x151B60).unk278 = (s64) (0x8000 << 0x10);
    (*(struct M2c_D_00151B60 *)0x151B60).unk260 = (s64) ((0x8800 << 0x2F) | 0x8001);
    (*(struct M2c_D_00151B60 *)0x151B60).unk268 = 0x4410;
    var_16_281 = 0;
    var_19_287 = 0x71F8;
    (*(struct M2c_D_00151B60 *)0x151B60).unk280 = (s64) (((0x7FF8 - (D_0015EEB8[0]->unk15A * 8)) << 0x10) | 0x6FF8);
    var_18_289 = 0x6FF8;
    (*(struct M2c_D_00151B60 *)0x151B60).unk288 = (s64) ((((D_0015EEB8[0]->unk15A * 8) + 0x7FF8) << 0x10) | 0x6FF8);
    D_00151DF0.unk0 = (s64) ((0xC22D << 0x2E) | 1);
    D_00151DF0.unk8 = 0xEEE;
    var_7_302 = ((u8 *)&D_00151DF0 + 0x50);
    D_00151DF0.unk10 = 0x30000;
    D_00151DF0.unk18 = 0x47;
    D_00151DF0.unk20 = (s64) ((0x8000 << 0x11) | 0x261);
    D_00151DF0.unk28 = 0x14;
    D_00151DF0.unk38 = 6;
    D_00151DF0.unk40 = (s64) ((0x8800 << 0x2F) | 0x8010);
    D_00151DF0.unk48 = 0x5353;
    D_00151DF0.unk30 = (s64) (((s64) D_0015EEB8[0]->unk156 << 5) | ((((u16) D_0015EEB8[0]->unk150 >> 6) & 0x3F) << 0xE) | ((s64) D_0015EEB8[0]->unk154 << 0x14) | (0xEA80 << 0x14));
loop_3:
    temp_4_327 = var_16_281 + 1;
    temp_2_329 = var_16_281 * (s16) D_0015EEB8[0]->unk150;
    var_16_281 = temp_4_327;
    var_7_302->unk0 = temp_2_329;
    temp_7_333 = ((u8 *)var_7_302 + (8));
    var_7_302->unk8 = (s64) (var_18_289 | ((0x7FF8 - (D_0015EEB8[0]->unk15A * 8)) << 0x10));
    var_18_289 += 0x200;
    temp_7_343 = ((u8 *)temp_7_333 + (8));
    temp_7_333->unk8 = (s64) ((temp_4_327 * (s16) D_0015EEB8[0]->unk150) | 0x1A000000);
    temp_7_343->unk8 = (s64) (var_19_287 | (((D_0015EEB8[0]->unk15A * 8) + 0x7FF8) << 0x10));
    var_19_287 += 0x200;
    var_7_302 = ((u8 *)temp_7_343 + (8 ))+ 8;
    if (var_16_281 < 0x10) {
        goto loop_3;
    }
    D_00151900.unk0 = (s64) ((((0x8116 << 0x10) | 0x8000) << 0x1F) | 1);
    D_00151900.unk28 = 8;
    D_00151900.unk30 = (s64) ((0x8000 << 0x11) | 0x261);
    D_00151900.unk38 = 0x14;
    D_00151900.unk8 = 0xEEEE;
    D_00151900.unk10 = 0x30000;
    D_00151900.unk18 = 0x47;
    var_6_392 = ((u8 *)&D_00151900 + 0x60);
    D_00151900.unk20 = 5;
    var_7_394 = 0;
    var_14_396 = 0x7200;
    var_13_399 = 0x200;
    var_8_400 = 0x7000;
    D_00151900.unk48 = 6;
    D_00151900.unk50 = (s64) ((0x8800 << 0x2F) | 0x8010);
    D_00151900.unk58 = 0x5353;
    D_00151900.unk40 = (s64) (((s64) D_0015EEB8[0]->unk156 << 5) | ((((u16) D_0015EEB8[0]->unk150 >> 6) & 0x3F) << 0xE) | ((s64) D_0015EEB8[0]->unk154 << 0x14) | (0xEA80 << 0x14));
loop_5:
    var_6_392->unk0 = (s64) (var_7_394 << 9);
    var_7_394 += 1;
    temp_6_421 = ((u8 *)var_6_392 + (8));
    var_6_392->unk8 = (s64) (var_8_400 | ((0x8000 - (D_0015EEB8[0]->unk152 * 8)) << 0x10));
    var_8_400 += 0x200;
    temp_6_432 = ((u8 *)temp_6_421 + (8));
    temp_6_421->unk8 = (s64) (var_13_399 | ((s64) D_0015EEB8[0]->unk152 << 0x14));
    var_13_399 += 0x200;
    temp_6_432->unk8 = (s64) (var_14_396 | (((D_0015EEB8[0]->unk152 * 8) + 0x7FF0) << 0x10));
    var_14_396 += 0x200;
    var_6_392 = ((u8 *)temp_6_432 + (8 ))+ 8;
    if (var_7_394 < 0x10) {
        goto loop_5;
    }
    D_00152040.unk0 = (s64) ((0x8000 << 0x2D) | 1);
    D_00152040.unk20 = (s64) ((0x9000 << 0x2E) | 0x8001);
    D_00152040.unk8 = 0xE;
    var_11_475 = ((u8 *)&D_00152040 + 0x50);
    D_00152040.unk10 = 0x30000;
    var_13_477 = 0;
    D_00152040.unk18 = 0x47;
    D_00152040.unk28 = 0x10;
    var_12_481 = 0x71F8;
    D_00152040.unk30 = 0x106;
    var_5_483 = 0x6FF8;
    D_00152040.unk38 = (s64) ((0x8000 << 0x10) | 0x8000);
    D_00152040.unk40 = (s64) ((0x9000 << 0x2E) | 0x8010);
    D_00152040.unk48 = 0x44;
loop_7:
    var_13_477 += 1;
    var_11_475->unk0 = (s64) (var_5_483 | ((0x7FF8 - (D_0015EEB8[0]->unk152 * 8)) << 0x10));
    var_5_483 += 0x200;
    var_11_475->unk8 = (s64) (var_12_481 | (((D_0015EEB8[0]->unk152 * 8) + 0x7FF8) << 0x10));
    var_12_481 += 0x200;
    var_11_475 = ((u8 *)var_11_475 + (8 ))+ 8;
    if (var_13_477 < 0x10) {
        goto loop_7;
    }
    var_8_513 = 0;
    var_6_516 = D_0013CC90 + 0x40;
    var_7_517 = 0x71F8;
    var_5_518 = 0x6FF8;
loop_9:
    var_8_513 += 1;
    var_6_516->unk0 = (s64) (var_5_518 | ((0x7FF8 - (D_0015EEB8[0]->unk152 * 8)) << 0x10));
    var_5_518 += 0x200;
    var_6_516->unk8 = (s64) (var_7_517 | (((D_0015EEB8[0]->unk152 * 8) + 0x7FF8) << 0x10));
    var_7_517 += 0x200;
    var_6_516 = ((u8 *)var_6_516 + (8 ))+ 8;
    if (var_8_513 < 0x10) {
        goto loop_9;
    }
    var_8_544 = 0;
    var_6_547 = D_0013CDD0 + 0x40;
    var_7_548 = 0x71F8;
    var_5_549 = 0x6FF8;
loop_11:
    var_8_544 += 1;
    var_6_547->unk0 = (s64) (var_5_549 | ((0x7FF8 - (D_0015EEB8[0]->unk15A * 8)) << 0x10));
    var_5_549 += 0x200;
    var_6_547->unk8 = (s64) (var_7_548 | (((D_0015EEB8[0]->unk15A * 8) + 0x7FF8) << 0x10));
    var_7_548 += 0x200;
    var_6_547 = ((u8 *)var_6_547 + (8 ))+ 8;
    if (var_8_544 < 0x10) {
        goto loop_11;
    }
    return;
}
#endif /* NON_MATCHING */
