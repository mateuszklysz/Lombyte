#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00221f58/FUN_00221f58.s", FUN_00221f58);
#else
#include "types.h"
struct M2c_D_001602F0 {
    u8 unk0;
    s32 unk1;
};

struct M2c_D_001602F8 {
    u8 unk0;
    s32 unk1;
};

struct M2c_arg0 {
    u8 pad_0[0x20];
    s32 unk20;
    s32 unk24;
    u8 pad_28[0x10];
    s32 unk38;
};

extern struct M2c_D_001602F0 D_001602F0;
extern struct M2c_D_001602F8 D_001602F8;
extern void func_001F4280();
extern void func_001F4398();
extern void func_001F6530();
extern s32 func_001FF960();
extern s32 func_001FFA10();
extern void func_00200600();
s32 FUN_00221f58(struct M2c_arg0 *arg0) {
u8 sp_slot[0x40];    f32 temp_f20_35;
    f32 temp_f20_79;
    u32 temp_5_13;
    u32 temp_5_55;

    func_001F4280(0);
    if (arg0->unk38 != 0) {
        temp_5_13 = arg0->unk24;
        func_001F6530(4, ((s32) (temp_5_13 + (temp_5_13 >> 0x1F)) >> 1) - 8, (0x80FF << 0x10) | 0xA888, sp_slot, -1, D_001602F0.unk1, D_001602F0.unk0, D_001602F0.unk1);
        temp_f20_35 = (f32) (arg0->unk24 * 8);
        func_00200600(0x20, 0x10, func_001FFA10(func_001FF960(0xE99E, 6)), 0x44200000, temp_f20_35, 0x43000000, 0x43800000, 0);
    } else {
        temp_5_55 = arg0->unk24;
        func_001F6530(arg0->unk20 - 0x18, ((s32) (temp_5_55 + (temp_5_55 >> 0x1F)) >> 1) - 8, (0x80FF << 0x10) | 0xA888, sp_slot, -1, D_001602F8.unk1, D_001602F8.unk0, D_001602F8.unk1);
        temp_f20_79 = (f32) (arg0->unk24 * 8);
        func_00200600(0x20, 0x10, func_001FFA10(func_001FF960(0xE99E, 6)), 0x43400000, temp_f20_79, 0x43000000, 0x43800000, 0x40490FDB);
    }
    func_001F4398();
    return 2;
}
#endif /* NON_MATCHING */
