/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 9.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00214db0/FUN_00214db0.s", FUN_00214db0);
#else
#include "rnc/assembly_textbin_fun_00214db0_types.h"
#include "types.h"


extern s32 func_001F9DC8();
extern s32 func_001F9DE0();
void FUN_00214db0(struct M2c_arg0 *arg0, f32 fparg0, f32 fparg1, f32 fparg2) {
    f32 temp_f20_20;
    f32 temp_f20_28;

    temp_f20_20 = func_001F9DC8(fparg1);
    arg0->unk0 = (f32) (temp_f20_20 * fparg0 * func_001F9DC8(fparg2));
    temp_f20_28 = func_001F9DE0(fparg1);
    arg0->unk4 = (f32) (temp_f20_28 * fparg0 * func_001F9DC8(fparg2));
    arg0->unk8 = (f32) (func_001F9DE0(fparg2) * fparg0);
}
#endif /* NON_MATCHING */
