#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00204e30/FUN_00204e30.s", FUN_00204e30);
#else
#include "types.h"
struct TexEntry { s32 data; s16 flags; s16 cbp; s32 clut; u8 tw; u8 th; s16 tbp; };
extern s32 D_0015F458;
extern struct TexEntry D_0018D040[];

u64 FUN_00204e30(s32 tw, s32 th, s32 data, s32 clut, s32 cbp, s32 tbp) {
    s32 shift;
    u64 tex0;
    s32 n;

    cbp >>= 8;
    tbp >>= 8;
    shift = tw - 6;
    if (shift < 0) {
        shift = 0;
    }
    tex0 = tbp | ((u64)(1 << shift) << 14) | ((u64)tw << 26 | 0x1300000) | ((u64)th << 30)
         | ((u64)cbp << 37 | (u64)1 << 34) | (u64)1 << 63;
    n = D_0015F458;
    if (n < 0x40) {
        D_0018D040[n].data = data;
        D_0018D040[n].cbp = cbp;
        D_0018D040[n].flags = 0;
        D_0018D040[n].clut = clut;
        D_0018D040[n].tbp = tbp;
        D_0018D040[n].tw = tw;
        D_0018D040[n].th = th;
        D_0015F458 = n + 1;
    }
    return tex0;
}
#endif /* NON_MATCHING */
