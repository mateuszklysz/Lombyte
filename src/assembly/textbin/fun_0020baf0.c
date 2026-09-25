#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0020baf0/FUN_0020baf0.s", FUN_0020baf0);
#else
#include "types.h"
extern u8 D_0013D388[];
extern u8 D_0013D4C0[];
extern u8 D_0013D4E8[];
extern u8 D_0013D5B0[];
extern u8 D_0013DD40[];
extern u8 D_0014BEC0[];
extern void jtbl_001E8390();
s32 FUN_0020baf0(s16 arg0, s32 arg1) {
    u8 *var_3_23;

    switch (arg0) {
    case 0:
        return 1;
    case 1:
        var_3_23 = arg1 + D_0013DD40;
block_13:
        return *var_3_23 != 0;
    case 2:
        var_3_23 = arg1 + D_0013D4C0;
        goto block_13;
    case 3:
        var_3_23 = arg1 + D_0013D4E8;
        goto block_13;
    case 4:
        if (arg1 < 0x79) {
            return *(s32 *)((u8 *)(D_0013D5B0 + (arg1 * 0x10)) + 0xC) != 0;
        }
    default:
block_14:
        return 0;
    case 5:
        if (arg1 < 0x79) {
            return *(s32 *)((u8 *)(D_0013D5B0 + (arg1 * 0x10)) + 0xC) >= 2;
        }
        goto block_14;
    case 6:
        var_3_23 = arg1 + D_0013D388;
        goto block_13;
    case 7:
        return ((s32 (*)(s32)) arg1)(*((arg0 * 4) + &jtbl_001E8390)) != 0;
    case 8:
        var_3_23 = (arg1 & 0xFFFF) + ((arg1 >> 0x10) * 4) + D_0014BEC0;
        goto block_13;
    }
}
#endif /* NON_MATCHING */
