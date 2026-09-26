#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002271d0/FUN_002271d0.s", FUN_002271d0);
#else
#include "types.h"

struct DmaTag {
    u32 w0;
    u32 addr;
    u32 w2;
    u32 w3;
};

struct TagPtr {
    struct DmaTag *p;
};

struct ScreenInfo {
    u8 pad0[0x150];
    s16 w;
    s16 h;
};

extern struct TagPtr D_00160F00;
extern struct ScreenInfo D_00151780;
extern void func_00233980(s32, s32);

void FUN_002271d0(void) {
    struct DmaTag *tag;
    u64 *q;
    s32 w;
    s32 h;
    s32 n;
    s32 i;

    w = D_00151780.w;
    h = D_00151780.h;
    n = w / 32;
    func_00233980(0x42, 0x64);
    D_00160F00.p->w0 = (n + 5) | 0x10000000;
    D_00160F00.p->addr = 0;
    D_00160F00.p->w2 = 0;
    D_00160F00.p->w3 = (n + 5) | 0x50000000;
    tag = D_00160F00.p;
    D_00160F00.p = tag + 1;
    q = (u64 *)(tag + 1);
    q[0] = 0x1000000000000001;
    q[1] = 0xE;
    q[2] = 0x31001;
    q[3] = 0x47;
    q[4] = 0x2400000000008001;
    q[5] = 0x10;
    q[6] = 0x146;
    q[7] = 0x7F808080;
    q[8] = (n | 0x8000) | 0x2400000000000000;
    q[9] = 0x44;
    for (i = 0; i < n; i++) {
        q[10 + i * 2] = (0x8000 - w * 8 + i * 0x200) | ((u64)(0x8000 - h * 8) << 16);
        q[11 + i * 2] = (0x8200 - w * 8 + i * 0x200) | ((u64)(h * 8 + 0x7FF0) << 16);
    }
    D_00160F00.p = D_00160F00.p + n + 5;
}
#endif /* NON_MATCHING */
