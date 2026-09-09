/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 70.3684%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023b540/FUN_0023b540.s", FUN_0023b540);
#else
#include "types.h"
extern s32 D_001611E8;
extern s32 D_0016120C;
extern s32 func_0023D340();
s32 FUN_0023b540(void) {
    if (D_001611E8 != 0) {
        func_0023D340(D_0016120C + 0xD9168);
        D_001611E8 = 0;
    }
    M2C_SYNC();
    /* m2c-unknown:  unknown instruction: ei  */
    return 0;
}
#endif /* NON_MATCHING */
