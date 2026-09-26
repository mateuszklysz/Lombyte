#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/runtime/memory/mode_freeze_init/FUN_001fbab8.s", FUN_001fbab8);
#else
#include "types.h"

struct St {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
};

struct T16 {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

struct T3a {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct T3b {
    u8 pad0[4];
    s32 unk4;
    u8 pad8[0x14];
    s32 unk1C;
};

struct T16b {
    u8 pad0[4];
    s32 unk4;
    u8 pad8[0x18];
    s32 unk20;
    s32 unk24;
};

extern s32 D_0015F604;
extern struct St D_00193300;
extern s32 func_0012E3E8();
extern s32 InitializeRenderState();
extern s32 func_001F96F8();
extern s32 func_001FDD10();
extern s32 func_001FED30();

void mode_freeze_init(u32 arg0, s32 arg1) __asm__("FUN_001fbab8");

void mode_freeze_init(u32 arg0, s32 arg1) {
    struct T16 *t16;
    struct T3a *t3a;
    struct T3b *t3b;
    struct T16b *t16b;
    u8 *pbase;

    if (D_0015F604 != 3) {
        func_0012E3E8(0x1D);
        InitializeRenderState(0);
    }
    pbase = (u8 *)&D_00193300 - 0x3300;
    D_00193300.unk14 = (s32) D_0015F604;
    D_00193300.unk18 = arg1;
    D_0015F604 = 4;
    D_00193300.unk0 = arg0;
    switch (arg0) {
    case 0:
        D_00193300.unk8 = func_001FDD10(0x4F6E, &D_00193300);
        D_00193300.unkC = func_001FDD10(0x5248);
        D_00193300.unk10 = func_001FDD10(0x5249);
        D_00193300.unk28 = 0;
        D_00193300.unk4 = D_00193300.unk1C = D_00193300.unk20 = D_00193300.unk24 = 0;
        return;
    case 2:
        t3a = (void *) (pbase + 0x3300);
        t3a->unk8 = func_001FDD10(0x524A);
        t3a->unk4 = t3a->unkC = 0;
        return;
    case 1:
    case 4:
        t16 = (void *) (pbase + 0x3300);
        t16->unk8 = func_001FDD10(0x5229);
        t16->unkC = func_001FDD10(0x4EE0);
        t16->unk10 = func_001FDD10(0x524A);
        t16->unk4 = 0;
        return;
    case 5:
        t16b = (void *) (pbase + 0x3300);
        func_001FED30(0x4E2B);
        t16b->unk4 = func_001F96F8(0x1E);
        t16b->unk20 = 0;
        t16b->unk24 = func_001F96F8(0x1E);
        return;
    case 3:
        t16b = (void *) (pbase + 0x3300);
        t16b->unk4 = func_001F96F8(0x1E);
        t16b->unk20 = 0;
        t16b->unk24 = func_001F96F8(0x1E);
        return;
    case 6:
        t3b = (void *) (pbase + 0x3300);
        t3b->unk4 = func_001F96F8(0x1E);
        t3b->unk1C = 0;
        return;
    default:
        D_00193300.unk8 = 0;
        D_00193300.unk4 = 0x78;
        D_00193300.unkC = 0;
        D_00193300.unk10 = 0;
        return;
    }
}
#endif /* NON_MATCHING */
