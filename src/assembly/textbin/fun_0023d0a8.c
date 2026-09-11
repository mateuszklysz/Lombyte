/*
STATE: C_NON_MATCHING
SYMBOL: mpegNodata__FP7sceMpegP13sceMpegCbDataPv
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `mpegNodata__FP7sceMpegP13sceMpegCbDataPv` starts here. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 82.4286%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0023d0a8/FUN_0023d0a8.s", FUN_0023d0a8);
#else
#include "types.h"
extern s32 D_0016120C;
extern s32 func_0023A770();
extern s32 func_0023BF70();
s32 FUN_0023d0a8(void) {
    func_0023A770();
    func_0023BF70(D_0016120C + 0xD9090);
    return 1;
}
#endif /* NON_MATCHING */
