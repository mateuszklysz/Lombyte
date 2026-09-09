/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 58.4000%
 * blocker: Breadth textbin export: descriptive logic retained; remaining differences are structural, register allocation, stack alignment, or delay-slot scheduling while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00214530/FUN_00214530.s", FUN_00214530);
#else
#include "rnc/assembly_textbin_fun_00214530_types.h"
#include "types.h"


extern s32 func_001F9A68();
extern s32 func_001F9DC8();
extern s32 func_001F9DE0();
void FUN_00214530(struct M2c_arg0 *arg0, s32 arg1, f32 fparg0) {
    f32 temp_f20_9;

    temp_f20_9 = fparg0 * 0.5f;
    func_001F9A68(arg0, arg1, func_001F9DE0(temp_f20_9));
    arg0->unkC = func_001F9DC8(temp_f20_9);
}
#endif /* NON_MATCHING */
