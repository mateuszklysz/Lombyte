/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 66.6000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00221a48/FUN_00221a48.s", FUN_00221a48);
#else
#include "rnc/assembly_textbin_fun_00221a48_types.h"
#include "types.h"




extern struct M2c_D_001D5BF4 *D_001D5BF4;
extern s32 func_00225C18();
s32 FUN_00221a48(struct M2c_arg0 *arg0) {
    D_001D5BF4->unk84 = 0;
    arg0->unk54 = func_00225C18(0);
    return 0;
}
#endif /* NON_MATCHING */
