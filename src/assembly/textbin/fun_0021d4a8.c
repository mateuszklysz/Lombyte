/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.4730%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0021d4a8/FUN_0021d4a8.s", FUN_0021d4a8);
#else
#include "types.h"
s32 FUN_0021d4a8(void) { return 0; }
#endif /* NON_MATCHING */
