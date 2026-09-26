#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ee4b0/FUN_001ee4b0.s", FUN_001ee4b0);
#else
#include "types.h"

extern u8 D_0015F484;
extern u8 D_0015F485;
extern u8 D_0015F486;
extern f32 D_0015F488;
extern f32 D_0015F48C;
extern f32 D_0015F490;
extern f32 D_0015F494;

struct M2c_D_0019ADC0 {
    u8 pad_0[0x50];
    s32 unk50;
    s32 unk54;
    s32 unk58;
    f32 unk5C;
    f32 unk60;
    f32 unk64;
    f32 unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    f32 unk78;
    u8 pad_7C[4];
};

extern struct M2c_D_0019ADC0 D_0019ADC0[];
extern s32 func_00212C28(void *a0, f32 *a1, s32 *a2);
extern s32 FUN_001FA6D0(f32 fparg0);

void FUN_001ee4b0(void *arg0) {
    f32 f;
    s32 idx;
    s32 q;
    s32 w;
    struct M2c_D_0019ADC0 *pal;

    if (func_00212C28(arg0, &f, &idx) == 0) {
        return;
    }
    pal = &D_0019ADC0[idx];
    if ((pal->unk50 & 2) == 0) {
        return;
    }
    q = FUN_001FA6D0(f * 255.0f);
    w = 255 - q;
    D_0015F486 = (u8)(((((pal->unk58 >> 16) & 0xFF) * q) + (((pal->unk54 >> 16) & 0xFF) * w)) >> 8);
    D_0015F484 = (u8)((((pal->unk58 & 0xFF) * q) + ((pal->unk54 & 0xFF) * w)) >> 8);
    D_0015F485 = (u8)(((((pal->unk58 >> 8) & 0xFF) * q) + (((pal->unk54 >> 8) & 0xFF) * w)) >> 8);
    D_0015F488 = (pal->unk6C * f + pal->unk5C * (1.0f - f)) * 1024.0f;
    D_0015F48C = ((pal->unk74 * f + pal->unk64 * (1.0f - f)) + 1024.0f) * 1024.0f;
    D_0015F490 = 255.0f - ((pal->unk70 * f + pal->unk60 * (1.0f - f)) * 255.0f);
    D_0015F494 = 255.0f - ((pal->unk78 * f + pal->unk68 * (1.0f - f)) * 255.0f);
}
#endif /* NON_MATCHING */
