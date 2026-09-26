#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022e8c8/FUN_0022e8c8.s", FUN_0022e8c8);
#else
#include "types.h"

struct Block {
    u8 pad0[0x40];
    s32 color;
    u8 pad1[0x0C];
    s32 flag;
    u8 pad2[0x1C];
    s64 v0;
    s64 v1;
    s64 v2;
    s64 v3;
};

extern s32 D_0015ED84[];
extern f32 D_001D9A90[];
extern u8 D_001D9A50[];
extern u64 D_00160580;
extern u8 D_001D97B0[];
extern u8 D_001604F0;

__asm__(".extern D_001604F0, 4");

extern void func_00233980(s32, u64);
extern void func_001F98D0(void *, u8 *, s32);
extern void func_001F9A68(void *, u8 *, f32);
extern void func_001F9A10(void *, void *, u8 *);
extern void func_001F7D30(void *, s32, s32);

void FUN_0022e8c8(void) {
    struct Block b;
    f32 f;
    u8 *pp;
    u8 *bp;
    s32 *cp;
    s32 i;

    func_00233980(0x47, 0x31801);
    f = 1.0f;
    b.v1 = D_00160580;
    b.v3 = 0x8000 << 24 | 0x44;
    b.v2 = 0xFF90 << 32 | 0x260;
    b.v0 = 0;
    func_001F98D0(&b.flag, D_001D97B0, 0x20);
    if ((u32)D_0015ED84[0] < 0x13) {
        f = D_001D9A90[D_0015ED84[0]];
    }
    pp = D_001D9A50;
    bp = b.pad0;
    cp = &b.color;
    i = 3;
    do {
        *cp = 0x80808080;
        func_001F9A68(bp, pp, f);
        pp += 0x10;
        func_001F9A10(bp, bp, (u8 *)&D_001604F0);
        bp += 0x10;
        cp += 4;
        i -= 1;
    } while (i >= 0);

    func_001F7D30(b.pad0, 0, 0);
    func_00233980(0x47, 0x5360B);
}
#endif /* NON_MATCHING */
