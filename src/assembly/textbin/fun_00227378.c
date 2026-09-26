#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00227378/FUN_00227378.s", FUN_00227378);
#else
#include "types.h"

struct Src {
    u8 pad_0[0x150];
    s16 unk150;
    s16 unk152;
};

struct Tag {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s64 unk10;
    s64 unk18;
    s64 unk20;
    s64 unk28;
    s64 unk30;
    s64 unk38;
    s64 unk40;
    s64 unk48;
    s64 unk50;
    s64 unk58;
};

struct LoopTag {
    s64 unk0;
    s64 unk8;
};

extern struct Src D_00151780;
extern struct Tag *D_00160F00[1];

void FUN_00227378(s64 arg0) {
    struct Tag *base;
    struct Tag *p;
    struct LoopTag *lt;
    struct Src *src;
    s32 rows;
    s32 width;
    s32 height;
    s32 count;
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 neg;
    s32 h;
    s64 b64;
    s64 d64;
    s64 hi;
    s64 lo;

    src = &D_00151780;
    height = src->unk150;
    width = src->unk152;
    h = (height > -1) ? height : (height + 0x1F);
    rows = h >> 5;
    D_00160F00[0]->unk0 = (rows + 5) | 0x10000000;
    D_00160F00[0]->unk4 = 0;
    D_00160F00[0]->unk8 = 0;
    D_00160F00[0]->unkC = (rows + 5) | 0x50000000;
    base = D_00160F00[0];
    p = (struct Tag *)((u8 *)base + 0x10);
    D_00160F00[0] = p;
    base->unk10 = 0x1000000000000001;
    p->unk18 = 0xE;
    p->unk20 = 0x3D801;
    p->unk28 = 0x47;
    p->unk30 = 0x2400000000000001;
    p->unk38 = 0x10;
    p->unk40 = 0x146;
    p->unk48 = arg0;
    p->unk50 = (s64)(rows | 0x8000) | 0x2400000000000000;
    p->unk58 = 0x44;
    if (rows > 0) {
        d = width * 8 + 0x7FF0;
        b = 0x8000 - width * 8;
        neg = -(height * 8);
        b64 = (s64)b << 16;
        a = neg + 0x8000;
        c = neg + 0x8200;
        d64 = (s64)d << 16;
        count = 0;
        lt = (struct LoopTag *)((u8 *)base + 0x60);
        do {
            hi = (s64)a | b64;
            lo = (s64)c | d64;
            lt->unk0 = hi;
            count += 1;
            lt = (struct LoopTag *)((u8 *)lt + 8);
            c += 0x200;
            lt->unk8 = lo;
            a += 0x200;
            lt = (struct LoopTag *)((u8 *)lt + 8);
        } while (count < rows);
    }
    p = (struct Tag *)((u8 *)D_00160F00[0] + rows * 0x10 + 0x50);
    D_00160F00[0] = p;
    p->unk0 = 0x10000000;
    D_00160F00[0]->unk4 = 0;
    D_00160F00[0]->unk8 = 0x13000000;
    D_00160F00[0]->unkC = 0;
    D_00160F00[0] = (struct Tag *)((u8 *)D_00160F00[0] + 0x10);
}
#endif /* NON_MATCHING */
