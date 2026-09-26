#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002240c8/FUN_002240c8.s", FUN_002240c8);
#else
#include "types.h"

struct D_001D5BF0 {
    u8 pad_00[0x1C];
    s32 unk1C;
    u8 pad_20[0x80];
    s32 unkA0;
    s32 unkA4;
    u8 pad_A8[0x8];
    s32 unkB0[4];
    s32 unkC0;
    u8 pad_C4[4];
    u8 unkC8;
    u8 unkC9;
    u8 unkCA;
    u8 pad_CB[0x51];
    s32 unk11C;
    s32 unk120;
};

struct flag01 {
    u8 pad_0[1];
    u8 unk1;
};

struct cfg_00186F40 {
    u8 pad_0[0x140];
    f32 unk140;
    f32 unk144;
    f32 unk148;
};

struct arg0 {
    u8 pad_00[0x44];
    s32 unk44;
    s32 unk48;
    u8 pad_4C[0x58];
    s8 unkA4[0x18];
};

struct t3 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

struct t16 {
    u8 pad_00[0x10];
    f32 unk10;
    f32 unk14;
    f32 unk18;
    u8 pad_1C[0x18];
    s16 unk34;
    u8 pad_36[0x12];
    f32 unk48;
    u8 pad_4C[0x28];
    void *unk74;
    struct t3 *unk78;
};

struct t2 {
    u8 pad_00[0x34];
    s16 unk34;
    u8 pad_36[0x3E];
    void *unk74;
    s32 *unk78;
};

extern u8 D_00186310[];
extern struct D_001D5BF0 D_001D5BF0;
extern u8 D_001D5DD0[];
extern u8 D_001D5E10[];
extern u8 D_001D5E50[];
extern struct cfg_00186F40 D_00186F40;
extern u32 D_00224B60[];
extern void func_001F97E8();
extern void func_001E9410();
extern struct t16 *func_00225490();
extern void func_00224FC0();
extern void func_00225AC0();
extern s32 func_00225C18();
extern s32 func_00226718();

s32 FUN_002240c8(struct arg0 *arg0) {
    struct t16 *t16;
    struct t2 *t2;
    s32 *cursor;
    s8 *tail;
    s32 count;
    s32 i;

    func_00225AC0(1);
    func_00226718();
    *(s32 *)0x15FF4C = -1;
    D_001D5BF0.unk120 = -1;
    cursor = &D_001D5BF0.unkB0[0];
    D_001D5BF0.unk11C = -1;
    D_001D5BF0.unkA0 = func_00225C18(1);
    D_001D5BF0.unkA4 = func_00225C18(1);
    D_001D5BF0.unkC8 = 0xFF;
    D_001D5BF0.unkCA = 0;
    D_001D5BF0.unkC9 = 0xFF;
    i = 2;
    do {
        i--;
        *cursor = func_00225C18(0);
        cursor++;
    } while (i >= 0);
    D_001D5DD0[1] = 0;
    D_001D5BF0.unk1C = -1;
    D_001D5E10[1] = 0;
    D_001D5E50[1] = 0;
    t16 = func_00225490(0);
    count = 0x17;
    tail = (s8 *)((u8 *)arg0 + 0xBB);
    do {
        *tail = 0;
        count--;
        tail--;
    } while (count >= 0);
    if (t16 != 0) {
        struct t3 *t3;

        arg0->unk44 = t16;
        t16->unk34 = 0;
        t3 = t16->unk78;
        t16->unk10 = D_00186F40.unk140 + 4.0f;
        t16->unk14 = D_00186F40.unk144;
        t16->unk74 = D_00224B60;
        t16->unk18 = D_00186F40.unk148 - 0.6f;
        t16->unk48 = 3.1415927f;
        t3->unk0 = arg0;
        t3->unk4 = 0;
        t3->unk8 = 0;
        D_001D5BF0.unkC0 = -1;
        func_001F97E8(D_00186310, 0, 0x40, D_00224B60, -1, &D_001D5BF0);
        func_001E9410(t16);
    }
    t2 = (struct t2 *)func_00225490(0x259);
    if (t2 != 0) {
        *t2->unk78 = arg0;
        t2->unk74 = (void *)func_00224FC0;
        t2->unk34 = 4;
    }
    arg0->unk48 = t2;
    return 0;
}
#endif /* NON_MATCHING */
