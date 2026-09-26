#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/world/data/select_world_object_resource_tables/FUN_00204a40.s", FUN_00204a40);
#else
#include "types.h"

/* Moby record the world-object pool stores; promoted sibling
   src/textbin/fun_00203640.c only needs fields 0x2C, this unit also
   reads 0x00, 0x06, 0x07 and 0x28. */
struct Moby {
    s32 unk0;
    u8 pad4[2];
    u8 unk6;
    u8 unk7;
    u8 pad8[0x20];
    s32 unk28;
    s32 unk2C;
};

/* include/rnc/*_types.h copies of M2c_D_001940C0 stop at unk14; this
   unit reads the s32 at +0x10. */
struct M2c_D_001940C0 {
    u8 pad_0[0x10];
    s32 unk10;
};

/* D_001863D0 record, stride 0x4C, id field first (+0x10 folds into
   the walking pointer). */
struct M2c_D_001863D0 {
    s32 unk0;
    u8 pad_4[0x48];
};

struct Rec16 {
    s32 unk0;
    s32 unk4;
};

extern s32 D_0015FF44;
extern s32 D_0015FF48;
extern s32 D_0015FF4C;
extern s32 D_0015FF50;
extern u8 D_0013E520[];
extern u8 D_001863D0[];
extern struct M2c_D_001940C0 D_001940C0;
extern s32 D_001CBAC0[];
extern s32 D_001CBB20[];
extern u8 D_001CBD60[];
extern u8 D_001CBBE0[];
extern u8 D_001B3AC0[];
extern struct Moby *D_001B3200[];
extern s32 D_001B6180[];
extern u8 D_001CAAC0[];
extern u64 D_0019E6F0[];
extern s32 FlushCache();
extern s32 func_0020B618(s32, s32);
extern void FUN_00203338(struct Moby *, s32, s32, s32);

void select_world_object_resource_tables(s32 oclass, s32 slot) __asm__("FUN_00204a40");

void select_world_object_resource_tables(s32 oclass, s32 slot) {
    s32 i;
    s32 n;
    s32 j;
    s32 k;
    s32 flag;
    s16 val;
    s16 *sp;
    u8 *dst;
    struct Moby *moby;
    struct Moby *pm;
    struct Rec16 *r;
    struct M2c_D_001863D0 *rec;

    if (D_0015FF4C >= 0) {
        if (D_001CBAC0[D_0015FF4C] == oclass) {
            return;
        }
    }
    D_0015FF4C = 0;
    if (D_0015FF48 > 0 && D_001CBAC0[0] != oclass) {
        i = 0;
        do {
            i++;
        } while (i < D_0015FF48 && D_001CBAC0[i] != oclass);
        D_0015FF4C = i;
    }
    if (slot == -1) {
        slot = (D_0015FF50 == 0);
    }
    moby = (struct Moby *)(D_001940C0.unk10 + slot * 0x18000);
    D_0015FF50 = slot;
    FlushCache(0);
    func_0020B618(D_001CBB20[D_0015FF4C], moby);
    FlushCache(0);
    n = D_001B3AC0[oclass];
    D_001B3200[n] = moby;
    D_001B6180[n] = moby->unk2C;
    FUN_00203338(moby, (s32)D_001CAAC0, (s32)(D_001CBBE0 + D_0015FF4C * 0x10), oclass);
    sp = (s16 *)(D_001CBD60 + D_0015FF4C * 0x20);
    flag = D_0015FF44;
    for (j = 0; j < 16; j++) {
        val = *sp;
        if (val >= 0) {
            *(s16 *)((u8 *)D_001B3200[n]->unk28 + j * 0x20 + 0x1A) = val;
            *(s32 *)((u8 *)D_001B3200[n]->unk28 + j * 0x20 + 0x1C) = flag;
        }
        sp++;
    }
    rec = (struct M2c_D_001863D0 *)((u8 *)D_001863D0 + 0x10);
    for (k = 0; k < 0x25; k++) {
        if (rec->unk0 == oclass) {
            if (D_0013E520[k] == 0) {
                return;
            }
            pm = D_001B3200[n];
            if (pm->unk6 != 0) {
                r = (struct Rec16 *)(pm->unk0 + pm->unk7 * 0x10);
                dst = (u8 *)r->unk0 + (r->unk4 - 4) * 0x10;
                *(s64 *)(dst + 0x20) = D_0019E6F0[0];
                *(s64 *)(dst + 0x30) = D_0019E6F0[2];
            }
            return;
        }
        rec = (struct M2c_D_001863D0 *)((u8 *)rec + 0x4C);
    }
}
#endif /* NON_MATCHING */
