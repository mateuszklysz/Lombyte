#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fb8f0/FUN_001fb8f0.s", FUN_001fb8f0);
#else
#include "types.h"

struct Hdr {
    s32 w0;
    s32 w1;
    s32 w2;
    s32 w3;
    s64 d0;
};

struct Dat {
    u8 pad0[8];
    s64 d1;
    s64 d2;
    s64 d3;
    s64 d4;
    s64 d5;
    s64 d6;
    s64 d7;
    s64 d8;
    s64 d9;
    s64 dA;
    s64 dB;
};

struct TagPtr { struct Hdr *p; };
extern struct TagPtr D_00160F00;
extern void func_00233938(s32);
extern void func_00233980(s32, u64);

void FUN_001fb8f0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s64 arg6) {
    s32 a5_8;
    s32 a4_8;
    s64 t6;
    s64 t9;
    struct Hdr *q0;
    struct Dat *q1;

    func_00233938(0x13000000);
    func_00233980(0x42, 0x64);
    D_00160F00.p->w0 = 0x10000006;
    D_00160F00.p->w1 = 0;
    D_00160F00.p->w2 = 0;
    D_00160F00.p->w3 = 0x50000006;
    q0 = D_00160F00.p;
    q1 = (struct Dat *)((u8 *)q0 + 0x10);
    D_00160F00.p = (struct Hdr *)q1;
    t6 = (0x9000ULL << 0x2E) | 1;
    q0->d0 = (s64)((0x8000ULL << 0x2D) | 1);
    t9 = (0x9000ULL << 0x2E) | 0x8001;
    a5_8 = arg5 * 8;
    a4_8 = arg4 * 8;
    q1->dB = (s64)((((arg2 * 0x10) + 0x8000) - a4_8) | ((s64)(((arg3 * 0x10) + 0x8000) - a5_8) << 0x10));
    q1->d1 = 0xE;
    q1->d7 = (u64)(arg6 << 0x20) >> 0x20;
    q1->dA = (s64)((((arg0 * 0x10) + 0x8000) - a4_8) | ((s64)(((arg1 * 0x10) + 0x8000) - a5_8) << 0x10));
    q1->d2 = 0x33003;
    q1->d3 = 0x47;
    q1->d4 = t6;
    q1->d5 = 0x10;
    q1->d6 = 0x106;
    q1->d8 = t9;
    q1->d9 = 0x44;
    D_00160F00.p = (struct Hdr *)((u8 *)D_00160F00.p + 0x60);
    func_00233980(0x42, (0x8000ULL << 0x18) | 0x44);
    func_00233938(0x13000000);
}
#endif /* NON_MATCHING */
