/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 18.4857%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00214800/FUN_00214800.s", FUN_00214800);
#else
#include "rnc/assembly_textbin_fun_00214800_types.h"
#include "types.h"


extern s32 func_001F9A68();
extern s32 func_001FA3C0();
void FUN_00214800(s32 *arg0, s64 *arg1, struct M2c_arg2 *arg2) {
u8 sp_slot[0x80];    s64 sp10;
    s32 sp1C;
    s32 sp20;
    func_001F9A68(sp_slot, arg2, 0xBF800000);
    sp10 = *arg1;
    sp1C = 0;
    func_001FA3C0(&sp20, arg2, &sp10, arg2->unkC);
    func_001FA3C0(arg0, &sp20, sp_slot);
}
#endif /* NON_MATCHING */
