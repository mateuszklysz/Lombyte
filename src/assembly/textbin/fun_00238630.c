/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00238630
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 63.7727%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00238630/FUN_00238630.s", FUN_00238630);
#else
#include "types.h"
extern s32 D_001610A8;
extern s32 D_001E63E4;
extern s32 func_001FB8F0();
extern s32 func_0020D330();
void FUN_00238630(void) {
    func_001FB8F0(0, 0, 0x200, 0x80, 0x200, 0x80, 0);
    if (D_001610A8 == 1) {
        func_0020D330(D_001E63E4, 1);
    }
}
#endif /* NON_MATCHING */
