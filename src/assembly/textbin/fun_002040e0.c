#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002040e0/FUN_002040e0.s", FUN_002040e0);
#else
#include "types.h"

struct Scale3 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
};

struct Hdr {
    s32 unk0;
    s32 unk4;
    f32 unk8;
};

struct Glyph {
    s64 out0;
    u8 pad8[8];
    s64 out10;
    s32 unk14;
    u8 pad18[8];
    s32 unk20;
    s32 unk24;
    u8 pad28[8];
    s64 out30;
    s64 out40;
};

struct Run {
    u8 pad0[0x10];
    s32 base10;
    u8 pad14[8];
    u16 off1C;
    u8 pad1E[0xA];
    u8 count28;
    u8 pad29[0x17];
};

extern struct Scale3 D_00160EA0;
extern s32 D_00160E8C[];
extern s32 D_00160E90[];
extern s32 D_0015EE8C[];
extern s32 func_001F97A0();
extern void func_00233068();
__asm__(".extern D_00160E8C, 4");

void FUN_002040e0(struct Hdr *arg0, s32 arg1) {
    struct Run *run;
    f32 scale;
    s32 n;
    s32 i;
    s32 base_i;

    scale = arg0->unk8;
    D_00160E90[0] = arg0->unk4;
    D_00160EA0.unk0 = scale * 6.0f;
    D_00160EA0.unk4 = scale * 4.0f;
    D_00160EA0.unk8 = scale + scale;
    func_00233068(&D_00160EA0);

    run = (struct Run *)((s32)arg0 + arg0->unk0);
    D_00160E8C[0] = (s32)run;
    n = D_00160E90[0];
    if (n > 0) {
        struct Run *p = run;
        do {
            p->base10 = p->base10 + (s32)run;
            p = (struct Run *)((u8 *)p + 0x40);
            n = n - 1;
        } while (n != 0);
    }

    i = 0;
    if (D_00160E90[0] > 0) {
        base_i = i << 6;
        do {
            struct Run *r;
            s32 count;
            s32 j;
            s32 next_i;

            next_i = i + 1;
            r = (struct Run *)(D_00160E8C[0] + base_i);
            count = r->count28;
            if (count != 0) {
                j = 0;
                do {
                    struct Glyph *g;
                    s32 m;
                    s32 t;
                    s32 a17;
                    s32 a19;
                    s32 rr;
                    s32 w;
                    s32 gs;

                    g = (struct Glyph *)(r->base10 + r->off1C + j * 0x50);
                    gs = D_0015EE8C[0] >> 8;
                    m = arg1 + *(s32 *)&g->out0 * 16;
                    t = (s32)*(u16 *)(m + 4) << 16;
                    a17 = t >> 22;
                    a19 = t >> 23;
                    if (!(0 < a19)) {
                        a19 = 1;
                    }
                    if (!(0 < a17)) {
                        a17 = 1;
                    }
                    rr = func_001F97A0(t >> 16, 1, g->out10, base_i, (s64)g->out10, (s64)base_i, (s64)(j + 1));
                    w = func_001F97A0(*(s16 *)(m + 6));
                    g->out0 = ((s64)a17 << 14) | ((s64)rr << 26) | 0x01300000 | ((s64)w << 30)
                            | ((s64)(*(s16 *)(m + 0xA) + gs) << 37) | ((s64)0x8000 << 19) | (-1 << 63);
                    g->out10 = ((s64)(*(s16 *)(m + 8) - 1) << 2) | ((s64)g->unk14 << 6) | 0x20
                             | ((s64)g->out10 << 32);
                    g->out30 = ((s64)a19 << 14) | ((s64)(*(s16 *)(m + 0xC) + gs) << 20)
                             | ((s64)(*(s16 *)(m + 0xE) + gs) << 40) | ((s64)0x8000 << 19) | ((s64)0x8000 << 39);
                    g->out40 = 0;
                    j = j + 1;
                } while (j < (s32)((u8 *)(D_00160E8C[0] + base_i + 0x28)));
            }
            i = next_i;
            base_i = i << 6;
        } while (i < D_00160E90[0]);
    }
}
#endif /* NON_MATCHING */
