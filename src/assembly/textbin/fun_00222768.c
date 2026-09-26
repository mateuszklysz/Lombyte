#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00222768/FUN_00222768.s", FUN_00222768);
#else
#include "types.h"

struct Desc {
    u16 f00;
    u16 f02;
    u16 f04;
    u16 f06;
    u16 f08;
    u16 f0A;
    u16 f0C;
    u16 f0E;
    u16 f10;
    u16 f12;
    u16 f14;
    u16 f16;
};

struct Item {
    u8 pad00[0x18];
    s32 f18;
    s32 f1C;
    s32 f20;
    s32 f24;
    u8 pad28[0xC];
    s32 *f34;
    u8 pad38[4];
    s32 f3C;
    u8 pad40[0x10];
    s32 f50;
    s32 f54;
};

extern void func_00233980(s32, u64);
extern void func_001F4280(s32);
extern void PackImageDescriptor(struct Desc *, struct Item *);
extern void func_001F7580(struct Desc *, u64, s32, s32);
extern u8 *func_001FDD10(s32);
extern void func_001F4398();

s32 FUN_00222768(struct Item *item) {
    struct Desc desc;
    s32 pos;
    s32 i;
    s32 t;

    func_00233980(0x47, 0x30000);
    func_00233980(0x42, 0x80000044);
    func_001F4280(0);
    PackImageDescriptor(&desc, item);
    desc.f00 = (u16)item->f1C + 4;
    desc.f02 = (u16)item->f1C + (u16)item->f24 - 4;
    desc.f04 = (u16)item->f18;
    desc.f06 = (u16)item->f18 + (u16)item->f20;
    desc.f08 = (u16)item->f18 + (item->f20 >> 1);
    desc.f12 = 9;
    desc.f14 = 0;
    desc.f16 = 0;
    switch (item->f50) {
    case 0:
        break;
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 12:
    case 13:
    case 14:
    case 16:
    case 17:
    case 18:
        t = item->f3C >> 4;
        pos = item->f1C - (t - 4);
        i = 0;
        if (*item->f34 != -1) {
            do {
                desc.f0A = pos;
                desc.f16 = ((u64)(u8)item->f3C) >> 4;
                func_001F7580(&desc, ((u64)0x80FF << 16) | 0xA888, func_001FDD10(item->f34[i]), -1);
                i++;
                pos = pos + (s16)desc.f0E + 0xA;
            } while (item->f34[i] != -1);
        }
        if (pos + 0x18 < item->f1C + item->f24) {
            item->f54 = 1;
        }
        break;
    case 4:
    case 11:
    case 15:
    case 19:
        desc.f0A = desc.f0E + 0x20;
        func_001F7580(&desc, ((u64)0x80FF << 16) | 0xA888, func_001FDD10(item->f34), -1);
        break;
    }
    func_001F4398();
    return 2;
}
#endif /* NON_MATCHING */
