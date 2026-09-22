#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00214db0/FUN_00214db0.s", FUN_00214db0);
#else
#include "rnc/assembly_textbin_fun_00214db0_types.h"
#include "types.h"


extern f32 func_001F9DC8(f32);
extern f32 func_001F9DE0(f32);
void FUN_00214db0(struct M2c_arg0 *arg0, f32 fparg0, f32 fparg1, f32 fparg2) {
    f32 temp_f20_18;
    f32 temp_f20_26;

    temp_f20_18 = func_001F9DC8(fparg1);
    arg0->unk0 = (f32) (temp_f20_18 * fparg0 * func_001F9DC8(fparg2));
    temp_f20_26 = func_001F9DE0(fparg1);
    arg0->unk4 = (f32) (temp_f20_26 * fparg0 * func_001F9DC8(fparg2));
    arg0->unk8 = (f32) (func_001F9DE0(fparg2) * fparg0);
}
#endif /* NON_MATCHING */
