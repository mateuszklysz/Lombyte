#include "types.h"
struct M2c_temp_3_32 {
    u8 pad_0[0x7E];
    s16 unk7E;
    u8 pad_80[0x8];
    s32 unk88;
};
extern u8 D_0013E550[];
extern s32 D_0015F5B4;
extern s32 D_0015F630;
extern u8 *D_0015F634;
extern s32 func_0022D7F0(u8 *, s32, s32, s32, s32);

s32 FUN_0022dba0(s32 arg0, s32 arg1, s32 arg2) {
    s32 idx;
    s32 r;
    struct M2c_temp_3_32 *e;

    idx = arg0 + D_0015F5B4;
    if (idx >= D_0015F630) {
        return -1;
    }
    r = func_0022D7F0(D_0015F634 + (idx << 5), arg1, arg2, 0, 0x400);
    if (r >= 0) {
        e = (struct M2c_temp_3_32 *)(r * 0x70 + D_0013E550);
        e->unk88 = arg2;
        e->unk7E = idx;
    }
    return r;
}

extern __typeof__(FUN_0022dba0) func_0022DBA0 __attribute__((alias("FUN_0022dba0")));
