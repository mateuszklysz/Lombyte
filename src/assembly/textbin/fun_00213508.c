/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 40.1034%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00213508/FUN_00213508.s", FUN_00213508);
#else
#include "rnc/assembly_textbin_fun_00213508_types.h"
#include "types.h"


extern struct M2c_D_00194120 D_00194120;
extern s32 func_001EFA68();
f32 FUN_00213508(s64 *arg0, s32 arg1, f32 fparg0) {
u8 sp_slot[0x30];    s64 sp10;
    f32 sp18;

    sp10 = *arg0;
    sp18 += fparg0;
    if (func_001EFA68(&sp10, sp_slot, arg1 | 2, 0, 0, *arg0, 0.01f) == 0) {
        return 0.0f;
    }
    return D_00194120.unk8;
}
#endif /* NON_MATCHING */
