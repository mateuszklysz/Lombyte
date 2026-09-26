#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f33b8/FUN_001f33b8.s", FUN_001f33b8);
#else
#include "types.h"

struct M2c_D_0013E500 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
};

struct M2c_D_0018CD00 {
    u8 pad_0[0xA0];
    f32 unkA0;
    f32 unkA4;
    u8 pad_A8[0x8];
    f32 unkB0;
    u8 pad_B4[0x14C];
    f32 unk200;
    f32 unk204;
    f32 unk208;
    f32 unk20C;
    u8 pad_210[0x8];
    f32 unk218;
    f32 unk21C;
    u8 pad_220[0x8];
    f32 unk228;
    f32 unk22C;
};

extern struct M2c_D_0013E500 D_0013E500;
extern struct M2c_D_0018CD00 D_0018CD00;
extern f32 func_001FA6C0();
extern void func_001F2D98();
void FUN_001f33b8(s32 arg0, s32 arg1, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4) {
    s64 a0v;
    s32 t9;
    s32 t10;
    s32 va;
    s32 vb;
    s32 vd;
    s32 v1c;
    f32 k;
    f32 half;
    f32 q;

    a0v = arg0;
    t10 = (s32)arg1 >> 1;
    t9 = (s32)arg0 >> 1;
    v1c = (t10 + 0x800) << 4;
    vb = 0x800 - t10;
    vd = t9 + 0x800;
    va = 0x800 - t9;
    D_0013E500.unk1C = v1c;
    D_0018CD00.unkB0 = fparg0;
    D_0013E500.unk0 = (s32)a0v;
    D_0013E500.unk10 = va << 4;
    D_0013E500.unk14 = vb << 4;
    D_0013E500.unk18 = vd << 4;
    D_0018CD00.unkA0 = 32.0f;
    D_0018CD00.unkA4 = 524288.0f;
    D_0013E500.unk4 = arg1;
    k = 0.5f;
    D_0013E500.unk8 = t9;
    D_0013E500.unkC = t10;
    half = func_001FA6C0(arg0, va << 4, vb << 4, vd << 4) * k;
    D_0018CD00.unk200 = half;
    q = func_001FA6C0(arg1) * k;
    D_0018CD00.unk22C = fparg4;
    D_0018CD00.unk218 = fparg1;
    D_0018CD00.unk21C = fparg2;
    D_0018CD00.unk228 = fparg3;
    D_0018CD00.unk20C = q * 4.0f;
    D_0018CD00.unk208 = D_0018CD00.unk200 * 4.0f;
    D_0018CD00.unk204 = q;
    func_001F2D98();
}
#endif /* NON_MATCHING */
