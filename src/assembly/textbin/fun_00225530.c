/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 79.3529%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00225530/FUN_00225530.s", FUN_00225530);
#else
#include "rnc/assembly_textbin_fun_00225530_types.h"
#include "types.h"


extern s32 D_0015F60C;
extern s32 func_0020C828();
s32 FUN_00225530(struct M2c_arg0 *arg0) {
    if (arg0 != NULL) {
        func_0020C828();
        arg0->unk38 = (s64) D_0015F60C;
        return 0;
    }
    return 0;
}
#endif /* NON_MATCHING */
