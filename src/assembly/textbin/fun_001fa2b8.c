/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 42.5000%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001fa2b8/FUN_001fa2b8.s", FUN_001fa2b8);
#else
#include "rnc/assembly_textbin_fun_001fa2b8_types.h"
#include "types.h"




void FUN_001fa2b8(struct M2c_arg0 *arg0, struct M2c_arg1 *arg1) {
    arg0->unk0 = (s64) arg1->unk0;
    arg0->unk10 = (s64) arg1->unk10;
    arg0->unk20 = (s64) arg1->unk20;
}

extern void func_001FA2B8(struct M2c_arg0 *arg0, struct M2c_arg1 *arg1) __attribute__((alias("FUN_001fa2b8")));
#endif /* NON_MATCHING */
