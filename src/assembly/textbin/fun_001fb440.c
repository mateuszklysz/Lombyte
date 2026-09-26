#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fb440/FUN_001fb440.s", FUN_001fb440);
#else
#include "types.h"

struct D_00151780 {
    u8 pad_0[0x160];
    s16 unk160;
    s16 unk162;
    s16 unk164;
    s16 unk166;
    u8 pad_168[0x4];
    u16 unk16C;
    s16 unk16E;
    u8 pad_170[0x2];
};

struct QPayload {
    s64 unk0;
    s64 unk8;
    s64 unk10;
    s64 unk18;
    s64 unk20;
    s64 unk28;
    s64 unk30;
    s64 unk38;
    s64 unk40;
    s64 unk48;
};

extern struct D_00151780 D_00151780;
extern s64 D_0015EED0;
extern u8 *D_00160F00;
extern void func_001F9810(void *, s32);
extern void sceGsSetDefDrawEnv(void *, s32, s32, s32, s32);

void FUN_001fb440(s32 arg0, s32 arg1, s32 arg2) {
    s32 shift;
    s64 tag;
    u8 *p;
    u8 *q;
    u8 *r;
    u8 *t;
    struct QPayload *s;

    shift = (arg0 - 6 <= 0) ? 1 : (arg0 - 6);
    tag = ((u64)(1 << shift) << 0xE) | (arg2 >> 8) | ((u64)arg0 << 0x1A) | ((u64)arg1 << 0x1E) | ((u64)0x8000 << 0x13);
    D_00151780.unk160 = 1 << arg0;
    D_00151780.unk162 = 1 << arg1;
    D_00151780.unk166 = arg2 >> 13;
    D_0015EED0 = tag;
    func_001F9810(D_00160F00, 0xF0);

    *(u32 *)(D_00160F00 + 0x0) = 0x1000000E;
    *(u32 *)(D_00160F00 + 0x4) = 0;
    *(u32 *)(D_00160F00 + 0x8) = 0;
    *(u32 *)(D_00160F00 + 0xC) = 0x5000000E;

    p = D_00160F00;
    *(u64 *)(p + 0x10) = ((u64)0x8000 << 45) | 0x8;
    D_00160F00 = p + 0x10;
    *(u64 *)(D_00160F00 + 0x8) = 0xE;

    q = D_00160F00;
    r = q + 0x10;
    D_00160F00 = r;
    sceGsSetDefDrawEnv(r, D_00151780.unk164, D_00151780.unk160, D_00151780.unk162, 3);
    *(u64 *)(q + 0x10) = (*(u64 *)(q + 0x10) & ~0x1FF) | (D_00151780.unk166 & 0x1FF);
    *(u64 *)(r + 0x10) = D_00151780.unk16E | ((u64)(D_00151780.unk16C & 0xF) << 0x18);

    t = D_00160F00;
    *(u64 *)(t + 0x80) = ((u64)0x8000 << 45) | 0x1;
    s = (struct QPayload *)(t + 0x80);
    D_00160F00 = (u8 *)s;
    s->unk8 = 0xE;
    s->unk10 = 0x30003;
    s->unk18 = 0x47;
    s->unk20 = ((u64)0x8800 << 47) | 0x8001;
    s->unk28 = 0x4410;
    s->unk30 = 0x106;
    s->unk38 = 0;
    s->unk40 = ((u64)(0x8000 - (D_00151780.unk162 * 8)) << 0x10) | (0x8000 - (D_00151780.unk160 * 8));
    s->unk48 = ((u64)((D_00151780.unk162 * 8) + 0x7FF0) << 0x10) | ((D_00151780.unk160 * 8) + 0x8000);
    D_00160F00 += 0x50;
}
#endif /* NON_MATCHING */
