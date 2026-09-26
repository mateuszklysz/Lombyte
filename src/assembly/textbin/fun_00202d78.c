#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00202d78/FUN_00202d78.s", FUN_00202d78);
#else
#include "types.h"

struct DrawIn {
    u8 pad_0[4];
    u16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
};

extern s32 D_0015EE8C[];
extern u64 D_0019E6C0[];
extern u64 D_0019E6D8[];
extern s32 func_001F97A0();

void FUN_00202d78(u64 *q, struct DrawIn *in, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 t;
    s32 z;
    s32 lo;
    s32 hi;
    s32 h;
    s32 g;
    s32 r1;
    s32 r2;
    u64 *src;

    t = in->unk4 << 16;
    z = 0;
    lo = t >> 23;
    h = t >> 22;
    hi = (z < h) ? 1 : h;
    lo = (z < lo) ? 1 : lo;
    r1 = func_001F97A0(t >> 16, z < h);
    r2 = func_001F97A0(in->unk6);
    g = D_0015EE8C[0] >> 8;
    if (a6 >= 0) {
        q[0] = (((u64)a3 << 6) | 0x20 | ((s64)(in->unk8 - 1) << 2)) | ((u64)(u32)a2 << 32);
        q += 2;
        q[0] = ((u64)a5 << 2) | a4 | ((u64)a6 << 24);
        q += 2;
        q[0] = ((u64)hi << 14) | (((u64)r1 << 26) | 0x1300000) | ((u64)r2 << 30) |
               (((u64)(in->unkA + g) << 37) | ((u64)0x8000 << 19)) |
               (((u64)(in->unkE + g) << 40) | ((u64)0x8000 << 19)) | ((u64)(s32)(-1) << 63);
        q[2] = ((u64)lo << 14) | ((u64)(in->unkC + g) << 20) |
               (((u64)(in->unkE + g) << 40) | ((u64)0x8000 << 19)) | ((u64)0x8000 << 39);
        q += 2;
    } else if (a6 < -1) {
        src = D_0019E6C0;
        if (a6 == -3) {
            src = D_0019E6D8;
        }
        q[0] = (0x20 | ((u64)a3 << 6)) | ((u64)(u32)a2 << 32);
        q += 2;
        q[0] = 5;
        q += 2;
        q[0] = src[0];
        q[2] = src[2];
    } else {
        q[0] = (0x20 | ((u64)a3 << 6)) | ((u64)(u32)a2 << 32);
        q += 2;
        q[0] = 5;
        q += 2;
        q[0] = ((u64)0x8000 << 29 | 0x9980) << 19 | 0x7FFB;
        q[2] = 0;
    }
}
#endif /* NON_MATCHING */
