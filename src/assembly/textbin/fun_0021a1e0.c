#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021a1e0/FUN_0021a1e0.s", FUN_0021a1e0);
#else
#include "types.h"

struct Loc0 {
    u8 b[0x20];
};

struct Loc1 {
    u8 b[0x18];
    s32 t;
};

struct Out {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

extern struct Loc0 D_001E8728;
extern struct Loc1 D_001E8748;
extern u8 D_0015EDB0[];
extern u8 D_0015EDC0[];
extern u8 D_001D3B10[];

s32 FUN_0021a1e0(void) {
    struct Loc0 loc0 = D_001E8728;
    struct Loc1 loc1 = D_001E8748;
    s32 count = 0;
    struct Out *out = (struct Out *)D_001D3B10;
    s32 *src = (s32 *)&loc0;
    s32 i;
    s32 v;

    for (i = 0xB; i >= 0; i--) {
        v = src[0];
        if ((v != -1) && (*(v + D_0015EDC0) != 0)) {
            out->unk4 = v + D_0015EDB0;
            count += 1;
            out->unk0 = src[8];
            out->unk8 = 0x4F5A;
            out->unkC = 0x4F5B;
            out->unk10 = 0;
            out++;
        }
        src++;
    }
    *(s32 *)(D_001D3B10 + count * 0x14) = 0;
    return 0;
}
#endif /* NON_MATCHING */
