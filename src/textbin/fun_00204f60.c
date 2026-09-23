#include "types.h"
struct M2c_D_001A00F0 {
    u8 pad_0[0x278];
    s32 unk278[5];
    s32 unk28C[5];
};
extern struct M2c_D_001A00F0 D_001A00F0;
extern s32 func_00204EF8();
extern s32 func_00205000();

s32 FUN_00204f60(void) {
    s32 i;

    i = func_00204EF8(1);
    if (i != 0) {
        return i;
    }
    for (i = 1; i < 5; i++) {
        if (!(D_001A00F0.unk28C[i] & 0x1000) && D_001A00F0.unk278[i] != 0) {
            break;
        }
    }
    func_00205000(0, i);
    return i;
}

extern __typeof__(FUN_00204f60) func_00204F60 __attribute__((alias("FUN_00204f60")));
