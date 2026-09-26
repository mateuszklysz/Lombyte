#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/ui/text/font_print/FUN_001f62b0.s", FUN_001f62b0);
#else
#include "types.h"

struct FontEntry {
    u8 u;
    u8 v;
    s8 dy;
    s8 adv;
};

extern s32 D_0015F49C;
extern s32 D_0015F4A0;
extern s32 D_0018CAF8[];
extern void FUN_001f5450(s32, s32, s32, s32, s32, s32, s32, s32, s64, s64);

void font_print(s32 x, s32 y, s32 color, u8 *str, s32 count, s32 tex, u8 *font)
    __asm__("FUN_001f62b0");

void font_print(s32 x, s32 y, s32 color, u8 *str, s32 count, s32 tex, u8 *font) {
    struct FontEntry *f;
    u8 *p;
    s32 i;
    s32 c;
    s32 cc;
    s32 n;
    s32 q;
    s32 nc;
    s64 sum;

    if (D_0015F4A0 == 0) {
        D_0018CAF8[0] = color;
    }
    if (count == 0) {
        return;
    }
    if (str[0] == 0) {
        return;
    }
    f = (struct FontEntry *)font;
    n = 3;
    p = str;
    i = 0;
    c = p[0];
    do {
        if ((u32) (c - 8) < 8) {
            if (D_0015F49C != 0) {
                color = (color & 0xFF000000) | (s32) (s64) D_0018CAF8[c - 8];
            }
        } else {
            if (f[c].adv != 0) {
                if ((u8) (c + 0x80) < 0x28) {
                    cc = c + 0x40;
                    FUN_001f5450(x + f[cc].adv, y + f[cc].dy, 0x10, 0x10,
                        f[cc].u, f[cc].v, 0x10, 0x10, color, tex);
                } else if (c < 0x20) {
                    sum = ((s64) color & 0xFF) + (((s64) color >> 8) & 0xFF)
                        + (((s64) color >> 16) & 0xFF);
                    q = (s32) sum / n;
                    nc = (color & 0xFF000000) + (q << 16) + (q << 8) + q;
                    FUN_001f5450(x, y + f[c].dy, 0x18, 0x10, f[c].u, f[c].v,
                        0x18, 0x10, nc, tex);
                } else if (c != 0x20) {
                    FUN_001f5450(x, y + f[c].dy, 0x10, 0x10, f[c].u, f[c].v,
                        0x10, 0x10, color, tex);
                }
                x += f[c].adv;
            }
        }
        i++;
        if (i == count) {
            break;
        }
        p++;
        c = p[0];
    } while (c != 0);
}

extern __typeof__(font_print) func_001F62B0 __attribute__((alias("FUN_001f62b0")));
#endif /* NON_MATCHING */
