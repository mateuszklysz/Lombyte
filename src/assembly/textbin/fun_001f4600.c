/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f4600
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 83.2000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f4600/FUN_001f4600.s", FUN_001f4600);
#else
#include "types.h"
extern s32 D_0015F464;
extern u8 D_0018DB40[];
extern u8 D_0018DC40[];
void FUN_001f4600(s32 arg0, s32 arg1) {
    s32 temp_2_12;

    if (D_0015F464 < 0x40) {
        temp_2_12 = D_0015F464 * 4;
        *(temp_2_12 + D_0018DB40) = arg0;
        *(temp_2_12 + D_0018DC40) = arg1;
        D_0015F464 += 1;
    }
}
#endif /* NON_MATCHING */
