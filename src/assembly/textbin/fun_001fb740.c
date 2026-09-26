#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fb740/FUN_001fb740.s", FUN_001fb740);
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

extern struct TagPtr D_00160F00;
extern void func_00233980(s32, u64);

void FUN_001fb740(s32 w, s32 h) {
    struct DmaTag *tag;
    u64 *q;
    u64 *c;
    s32 n;
    s32 i;

    n = w / 32;
    func_00233980(0x42, 0x800000004AULL);
    D_00160F00.p->w0 = (n + 5) | 0x10000000;
    D_00160F00.p->addr = 0;
    D_00160F00.p->w2 = 0;
    D_00160F00.p->w3 = (n + 5) | 0x50000000;
    tag = D_00160F00.p;
    q = (u64 *)(tag + 1);
    D_00160F00.p = tag + 1;
    q[0] = 0x1000000000000001;
    q[1] = 0xE;
    q[2] = 0x32003;
    q[3] = 0x47;
    q[4] = 0x2400000000000001;
    q[5] = 0x10;
    q[6] = 0x146;
    q[7] = 0x80008080;
    q[8] = (n | 0x8000) | 0x2400000000000000;
    q[9] = 0x44;
    i = 0;
    if (n > 0) {
        c = (u64 *)((u8 *)tag + 0x60);
        do {
            *c++ = (0x8000 - w * 8 + i * 0x200) | ((u64)(0x8000 - h * 8) << 16);
            *c++ = (0x8200 - w * 8 + i * 0x200) | ((u64)(h * 8 + 0x7FF0) << 16);
            i++;
        } while (i < n);
    }
    D_00160F00.p = D_00160F00.p + (n + 5);
}
#endif /* NON_MATCHING */
