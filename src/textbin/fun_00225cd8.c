#include "types.h"
#include "rnc/assembly_textbin_fun_00225cd8_types.h"

extern struct M2c_D_001D5BF0 D_001D5BF0;
extern u8 D_001D60B8[];
extern void FUN_002166e8(s32);

s32 FUN_00225cd8(s32 arg0) {
    s32 i;
    u8 *base;
    struct M2c_var_16_10 *p;

    base = D_001D60B8;
    p = (struct M2c_var_16_10 *)(base + 4);
    i = 0;
    while (i < 5) {
        if (*(s32 *)((u8 *)p - 4) == arg0) {
            if ((p->unk0 & 2) != 0) {
                if ((p->unk0 & 4) != 0) {
                    p->unk0 ^= 4;
                    if (D_001D5BF0.unkCB != 0) {
                        FUN_002166e8(arg0);
                        D_001D5BF0.unkCB = 0;
                    }
                }
                p->unk0 &= -3;
                return 0;
            }
        }
        i++;
        p = (struct M2c_var_16_10 *)((u8 *)p + 8);
    }
    return 0;
}

extern __typeof__(FUN_00225cd8) func_00225CD8 __attribute__((alias("FUN_00225cd8")));
