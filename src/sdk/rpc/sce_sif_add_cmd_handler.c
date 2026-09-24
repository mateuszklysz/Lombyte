#include "types.h"

extern u32 D_00154E64[];
extern u32 D_00154E6C[];

void sceSifAddCmdHandler(s32 idx, s32 arg1, s32 arg2) {
    register u32 off __asm__("v1") = idx << 3;
    register u32 base __asm__("a0") = (idx < 0) ? D_00154E64[0] : D_00154E6C[0];
    u32 *slot = (u32 *)(off + base);

    slot[0] = arg1;
    slot[1] = arg2;
}
