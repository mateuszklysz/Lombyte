#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00221f58/FUN_00221f58.s", FUN_00221f58);
#else
#include "types.h"

struct M2c_arg0 {
    u8 pad_0[0x20];
    s32 unk20;
    s32 unk24;
    u8 pad_28[0x10];
    s32 unk38;
};

struct Col { s8 a; s8 b; };

extern struct Col D_001602F0;
extern struct Col D_001602F8;
extern void func_001F4280(s32);
extern void func_001F4398(void);
extern void func_001F6530(s32, s32, u64, s32, s32);
extern s32 func_001FF960();
extern s32 func_001FFA10(s32);
extern void func_00200600(s32, s32, s32, f32, f32, f32, f32, f32);

s32 FUN_00221f58(struct M2c_arg0 *arg0) {
    struct Col c;
    f32 scale;
    s32 t;
    s32 y;

    func_001F4280(0);
    if (arg0->unk38 != 0) {
        y = arg0->unk24 / 2 - 8;
        c = D_001602F0;
        func_001F6530(4, y, 0x80FFA888, &c, -1);
        t = arg0->unk24 * 8;
        scale = (f32)t;
        func_00200600(0x20, 0x10, func_001FFA10(func_001FF960(0xE99E, 6)), 640.0f, scale, 128.0f, 256.0f, 0.0f);
    } else {
        y = arg0->unk24 / 2 - 8;
        c = D_001602F8;
        func_001F6530(arg0->unk20 - 0x18, y, 0x80FFA888, &c, -1);
        t = arg0->unk24 * 8;
        scale = (f32)t;
        func_00200600(0x20, 0x10, func_001FFA10(func_001FF960(0xE99E, 6)), 192.0f, scale, 128.0f, 256.0f, 3.1415927f);
    }
    func_001F4398();
    return 2;
}
#endif /* NON_MATCHING */
