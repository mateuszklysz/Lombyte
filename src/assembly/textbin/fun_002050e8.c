#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002050e8/FUN_002050e8.s", FUN_002050e8);
#else
#include "types.h"

struct M2c_D_001A00F0 {
    u8 pad_0[0x224];
    s32 unk224;
};

extern u8 D_0013D4E1[];
extern s32 *D_001601E0;
extern struct M2c_D_001A00F0 D_001A00F0;
extern s32 func_002050A0();
s32 FUN_002050e8(void) {
    s32 ofs;
    s32 id;
    s32 n;
    s32 i;
    s32 idx;
    s32 *p;

    ofs = (D_0013D4E1[0] == 0) ? 0 : 0x100;
    id = D_001A00F0.unk224 + ofs;
    if (func_002050A0(id) >= 0) {
        n = 0;
        if (D_001A00F0.unk224 < 0x14) {
            p = D_001601E0;
            n = 0;
            while (p[n] != D_001A00F0.unk224) {
                n++;
            }
            i = 1;
        } else {
            i = 1;
        }
        for (;;) {
            idx = n + i;
            if (idx >= 0) {
                s32 e;

                if (idx < 0x14) {
                    e = D_001601E0[idx];
                    if (e != 0) {
                        id = e + ofs;
                        if (func_002050A0(id) == -1) {
                            return id;
                        }
                    }
                }
            }
            i = (i > 0) ? (0 - i) : (1 - i);
            idx = n + i;
            if (i == 4) {
                return -1;
            }
        }
    }
    return id;
}
#endif /* NON_MATCHING */
