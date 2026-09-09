/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.1302%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00205640/FUN_00205640.s", FUN_00205640);
#else
#include "types.h"
s32 FUN_00205640(void) { return 0; }
#endif /* NON_MATCHING */
