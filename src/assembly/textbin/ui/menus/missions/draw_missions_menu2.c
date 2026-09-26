#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/ui/menus/missions/draw_missions_menu2/FUN_0021f688.s", FUN_0021f688);
#else
#include "types.h"

struct M2c_D_001A00F0 {
    u8 pad_0[0x224];
    s32 unk224;
};

struct M2c_arg0 {
    u8 pad_0[0x20];
    s32 unk20;
    s32 unk24;
};

struct M2c_18 {
    u16 unk00;
    u16 unk02;
    u16 unk04;
    u16 unk06;
    s16 unk08;
    s16 unk0A;
    s16 unk0C;
    s16 unk0E;
    u16 unk10;
    u16 unk12;
    s16 unk14;
    s16 unk16;
};

extern struct M2c_D_001A00F0 D_001A00F0;
extern void func_001F4280(s32);
extern void func_001F4398();
extern void func_001F61E8();
extern void func_001F61F8();
extern void func_001F6530(s32, s32, u64, s32, s32);
extern s32 func_001F6FD0(s32, s32, s32, s32, s32, s32, s32);
extern void func_001F75F0(void *, u64, void *, s32);
extern u32 func_001FDD10();
extern s32 func_0020BC00();
extern void func_0021F8E8(s32, s32, s32);
extern void func_00233980(s32, s32);

s32 FUN_0021f688(struct M2c_arg0 *arg0) {
    struct M2c_18 dst;
    struct M2c_18 src;
    s32 sp40;
    s32 sp44;
    u8 *sp48;
    s32 i;
    s32 off;
    s32 flag;
    s32 col;
    s32 tmp;
    s32 step;
    s32 bit;
    s32 y;
    u32 *p;

    off = 0x18;
    i = 0;
    sp40 = 0;
    func_001F4280(0);
    sp44 = func_0020BC00(0x70000000, &sp40, 0, 0);
    func_00233980(0x42, 0x44);
    func_00233980(0x47, 0x10B);
    func_001F6530(4, 4, 0x80FFA888, func_001FDD10(0x4F59), -1);
    if (sp44 > 0) {
        p = (u32 *)0x70000000;
        sp48 = (u8 *)arg0 + 0x30;
        do {
            y = off + 0xA;
            tmp = ((s32 *)sp48)[D_001A00F0.unk224] ^ i;
            flag = (tmp == 0);
            col = (flag != 0) ? 0x8020FFFF : 0x80FFA888;
            if (flag != 0) {
                func_001F61F8();
            }
            step = func_001F6FD0(0x10, off, arg0->unk20 - 0x11, 0x3E8, col, func_001FDD10(*p), -1);
            if (flag != 0) {
                func_001F61E8();
            }
            step = (step >= 0x11) ? 1 : 2;
            bit = (sp40 >> i) & 1;
            y = (step ^ 2) ? y : (off + 0x10);
            i++;
            func_0021F8E8(9, y, bit);
            p++;
            off += step * 16;
        } while (i < sp44);
    }
    if (sp40 < 0) {
        memset(&src, 0, 0x18);
        src.unk02 = arg0->unk24;
        src.unk06 = arg0->unk20;
        src.unk08 = arg0->unk24 >> 1;
        src.unk0A = off + 8;
        src.unk10 = 0x10;
        src.unk12 = 1;
        dst = src;
        func_001F75F0(&dst, 0x8020FFFF, func_001FDD10(0x523D, 1, 0x10, off + 8), -1);
    }
    func_001F4398();
    return 2;
}
#endif /* NON_MATCHING */
