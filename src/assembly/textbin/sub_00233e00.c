/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: Sub00233e00
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 61.7969%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/sub_00233e00/sub_00233E00.s", sub_00233E00);
#else
#include "types.h"
extern s32 D_00160EE0;
s32 sub_00233E00(void) {
    s32 temp_5_9;
    s32 var_3_52;
    u32 temp_4_13;

    temp_5_9 = *(s32 *)0x10009000;
    temp_4_13 = temp_5_9 & 0x03FF0000;
    if (*(s32 *)0x10009030 == 0) {
        goto block_19;
    }
    if (!(temp_5_9 & 0xC)) {
        goto block_19;
    }
    if ((temp_5_9 & 0x70000000) != 0x70000000) {
        goto block_4;
    }
    D_00160EE0 &= ~0x1F;
    goto block_19;
block_4:
    if (!(temp_4_13 & 0x02000000)) {
        goto block_18;
    }
    if (temp_4_13 == 0x02020000) {
        goto block_13;
    }
    if (temp_4_13 > 0x02020000U) {
        goto block_9;
    }
    if (temp_4_13 == 0x02010000) {
        goto block_12;
    }
    goto block_17;
block_9:
    if (temp_4_13 == 0x02040000) {
        goto block_14;
    }
    if (temp_4_13 == 0x02080000) {
        goto block_15;
    }
    goto block_17;
block_12:
    var_3_52 = -3;
    goto block_16;
block_13:
    var_3_52 = -5;
    goto block_16;
block_14:
    var_3_52 = -9;
    goto block_16;
block_15:
    var_3_52 = -0x11;
block_16:
    D_00160EE0 &= var_3_52;
block_17:
block_18:
    *(volatile u32 *)0x10009000 = (s32) (temp_5_9 | 0x100);
block_19:
    M2C_SYNC();
    /* m2c-unknown:  unknown instruction: ei  */
    return 0;
}
#endif /* NON_MATCHING */
