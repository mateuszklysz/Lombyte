/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 50.5417%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0020db40/FUN_0020db40.s", FUN_0020db40);
#else
#include "types.h"
extern u8 D_001C76E0[];
void FUN_0020db40(u32 arg0, s32 arg1) {
    s32 temp_6_15;
    s32 var_5_0;
    u32 var_4_0;
    u8 *temp_7_12;
    u8 temp_6_18;
    u8 temp_8_14;

    var_4_0 = arg0;
    var_5_0 = arg1;
loop_1:
    temp_7_12 = (var_4_0 >> 3) + D_001C76E0;
    temp_8_14 = *temp_7_12;
    temp_6_15 = (1 << (var_4_0 & 7)) ^ -1;
    var_4_0 += 1;
    var_5_0 -= 1;
    temp_6_18 = temp_8_14 & temp_6_15;
    if (temp_6_18 != temp_8_14) {
        *temp_7_12 = temp_6_18;
        if (var_5_0 <= 0) {
            return;
        }
        goto loop_1;
    }
    M2C_TRAP_IF(0 == 0);
}
#endif /* NON_MATCHING */
