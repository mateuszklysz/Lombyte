/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00226e08
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 82.9000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00226e08/FUN_00226e08.s", FUN_00226e08);
#else
#include "types.h"
extern s32 D_0015ED80;
extern s32 D_0015EE24;
extern s32 D_0015F5EC;
void FUN_00226e08(void) {
    s32 temp_2_10;
    s32 temp_5_8;

    temp_5_8 = D_0015EE24;
    if (D_0015F5EC == 0) {
        temp_2_10 = temp_5_8 + 1;
        D_0015EE24 = temp_2_10;
        if (((temp_2_10 % 50) == 0) && (D_0015ED80 != 0)) {
            D_0015EE24 = temp_5_8 + 0xB;
        }
    }
}
#endif /* NON_MATCHING */
