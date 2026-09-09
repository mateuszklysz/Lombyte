#include "types.h"
struct M2c_D_001516D0 {
    u8 pad_0[0x50];
    s32 unk50;
    u8 pad_54[0x6];
    s16 unk5A;
};

extern struct M2c_D_001516D0 D_001516D0 __attribute__((section(".data")));
extern s32 func_0012ECA0();
s32 FUN_00215b10(void) {
    if (D_001516D0.unk50 != 0) {
        if (D_001516D0.unk5A == 3) {
            func_0012ECA0(D_001516D0.unk50);
            D_001516D0.unk5A = 4;
            return 1;
        }
        return 0;
    }
    return 0;
}
