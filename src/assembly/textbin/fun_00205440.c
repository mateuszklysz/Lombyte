#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00205440/FUN_00205440.s", FUN_00205440);
#else
#include "types.h"

struct M2c_D_0013C940 {
    u8 pad_0[0x104];
    f32 unk104;
    f32 unk108;
    f32 unk10C;
    u8 pad_110[0x94];
    s32 unk1A4;
};

struct M2c_D_001A00F0 {
    u8 pad_0[0x24];
    s32 unk24;
    u8 pad_28[0x8C];
    f32 level[0x14];
    s32 acc0[0x14];
    s32 acc1[0x35];
    s32 unk228;
};

extern struct M2c_D_0013C940 D_0013C940;
extern struct M2c_D_001A00F0 D_001A00F0;
extern void func_00208810(void);

s32 FUN_00205440(void) {
    s32 lo0;
    s32 lo1;
    s32 hi0;
    s32 hi1;
    f32 scale;

    func_00208810();
    if (D_0013C940.unk1A4 & 0x500) {
        return 1;
    }
    if (D_001A00F0.unk24 == 0) {
        return 0;
    }
    if (D_001A00F0.unk228 < 0) {
        return 0;
    }
    D_001A00F0.level[D_001A00F0.unk228] *= 1.0f - D_0013C940.unk104 * 0.02f;
    if (D_001A00F0.level[D_001A00F0.unk228] > 4.0f) {
        D_001A00F0.level[D_001A00F0.unk228] = 4.0f;
    }
    if (D_001A00F0.level[D_001A00F0.unk228] < 0.65f) {
        D_001A00F0.level[D_001A00F0.unk228] = 0.65f;
    }
    scale = 3000000.0f / D_001A00F0.level[D_001A00F0.unk228];
    D_001A00F0.acc0[D_001A00F0.unk228] += (s32) (D_0013C940.unk108 * scale);
    D_001A00F0.acc1[D_001A00F0.unk228] += (s32) (D_0013C940.unk10C * scale);
    lo0 = (s32) (0.0f / D_001A00F0.level[D_001A00F0.unk228]) << 15;
    lo1 = (s32) (1280.0f / D_001A00F0.level[D_001A00F0.unk228]) << 15;
    hi0 = 0x10000000;
    hi1 = 0x10000000 - lo1;
    if (D_001A00F0.acc0[D_001A00F0.unk228] < lo0) {
        D_001A00F0.acc0[D_001A00F0.unk228] = lo0;
        hi0 = 0x10000000 - lo0;
    }
    if (D_001A00F0.acc0[D_001A00F0.unk228] > hi0) {
        D_001A00F0.acc0[D_001A00F0.unk228] = hi0;
    }
    if (D_001A00F0.acc1[D_001A00F0.unk228] < lo1) {
        D_001A00F0.acc1[D_001A00F0.unk228] = lo1;
    }
    if (D_001A00F0.acc1[D_001A00F0.unk228] > hi1) {
        D_001A00F0.acc1[D_001A00F0.unk228] = hi1;
    }
    return 0;
}
#endif /* NON_MATCHING */
