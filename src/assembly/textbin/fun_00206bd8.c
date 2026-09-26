#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00206bd8/FUN_00206bd8.s", FUN_00206bd8);
#else
#include "types.h"
#include "eetypes.h"

struct GameState {
    u8 pad0[0x12E4];
    u8 unk12E4;
    u8 pad12E5[0x208C - 0x12E5];
    s32 unk208C;
};

extern struct GameState D_0013F350;
extern s32 D_001A03B0[];

union Vec {
    u128 q;
    f32 f[4];
};
extern s32 func_00208818(s32, s32, s32, s32, s32, s32);
extern f32 func_001F9B80(union Vec *, union Vec *);

s32 FUN_00206bd8(s32 a0, s32 a1, f32 x, f32 y, f32 z) {
    s32 ok;

    if (func_00208818(a0, a1, 0x189, 0x16F, 0x87, 0xED)) {
        if (func_00208818(a0, a1, 0x75, 0x146, 0x18B, 0x1CC) &&
            func_00208818(a0, a1, 0x141, 0x130, 0xB0, 0x130)) {
            if (43.9f <= z) {
                return 1;
            }
            return 0;
        }
    } else if (func_00208818(a0, a1, 0x191, 0xCD, 0xD2, 0x13B)) {
        union Vec p;
        union Vec q;

        p.q = 0;
        q.q = 0;
        p.f[0] = x;
        p.f[1] = y;
        q.f[0] = 337.5f;
        q.f[1] = 250.0f;
        if (func_001F9B80(&p, &q) <= 7.0f) {
            return 1;
        }
        if (func_00208818(a0, a1, 0x142, 0x12A, 0x173, 0xFC) && D_001A03B0[0]) {
            return 1;
        }
    } else {
        ok = 0;
        if ((u32)(D_0013F350.unk208C - 0x11) < 2 || D_0013F350.unk12E4 == 1) {
            ok = 1;
        }
        if (ok && func_00208818(a0, a1, 0x12B, 0xB8, 0x13A, 0xF2) &&
            func_00208818(a0, a1, 0x130, 0xED, 0x165, 0xCB) &&
            func_00208818(a0, a1, 0x161, 0xDC, 0x13B, 0xB0) &&
            func_00208818(a0, a1, 0x156, 0xA8, 0x119, 0xD1)) {
            return 1;
        }
    }
    return 0;
}
#endif /* NON_MATCHING */
