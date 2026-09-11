/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f7a30
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 53.9524%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f7a30/FUN_001f7a30.s", FUN_001f7a30);
#else
#include "types.h"
extern u8 D_0018E740[];
void FUN_001f7a30(void) {
    s32 temp_2_10;
    s32 temp_2_14;
    s32 temp_2_18;
    s32 temp_4_17;
    s32 var_7_6;

    var_7_6 = 0;
    do {
        temp_2_10 = var_7_6 & 0xE7;
        temp_2_14 = (var_7_6 & 8) ? (temp_2_10 | 0x10) : temp_2_10;
        temp_4_17 = (var_7_6 >> 1) << 0x18;
        temp_2_18 = (var_7_6 & 0x10) ? (temp_2_14 | 8) : temp_2_14;
        var_7_6 += 1;
        *((temp_2_18 * 4) + D_0018E740) = temp_4_17;
    } while (var_7_6 < 0x100);
}
#endif /* NON_MATCHING */
