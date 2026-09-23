#include "types.h"
struct M2c_temp_4_15 {
    u8 pad_0[0x74];
    u8 unk74;
    u8 pad_75[0x9];
    s16 unk7E;
};

extern u8 D_0013E550[];
extern s32 D_0015F5B4;

s32 FUN_001eb740(s32 arg0, s32 arg1) {
    struct M2c_temp_4_15 *e;

    if (arg0 >= 0) {
        e = (struct M2c_temp_4_15 *)(arg0 * 0x70 + D_0013E550);
        if (e->unk7E == arg1 + D_0015F5B4) {
            if ((u32)(e->unk74 - 1) < 2) {
                return 1;
            }
        }
    }
    return 0;
}

extern __typeof__(FUN_001eb740) func_001EB740 __attribute__((alias("FUN_001eb740")));
