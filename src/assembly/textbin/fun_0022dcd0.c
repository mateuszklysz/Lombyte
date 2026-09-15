/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 50.5000%
 * blocker: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022dcd0/FUN_0022dcd0.s", FUN_0022dcd0);
#else
#include "rnc/assembly_textbin_fun_0022dcd0_types.h"
#include "types.h"




extern struct M2c_D_0013E550 D_0013E550;
extern s32 func_0012DC80();
extern s32 func_0012E3B8();
extern s32 func_0012EB00();
void FUN_0022dcd0(void) {
    s64 *var_2_20;
    struct M2c_var_3_32 *var_3_32;
    s32 var_3_19;

    func_0012EB00();
    func_0012DC80();
    func_0012E3B8();
loop_1:
    if (func_0012DC80() != 0) {
        goto loop_1;
    }
    var_3_19 = 3;
    var_2_20 = &D_0013E550;
loop_3:
    *var_2_20 = 0;
    var_3_19 -= 1;
    var_2_20 += 2;
    if (var_3_19 >= 0) {
        goto loop_3;
    }
    var_3_32 = &D_0013E550;
    D_0013E550.unk40 = 0;
    D_0013E550.unk70 = 0;
loop_5:
    var_3_32->unk74 = 0;
    var_3_32 += 0x70;
    if ((s32) var_3_32 >= (s32) (((u8 *)&D_0013E550 + 0xD20))) {
        goto block_7;
    }
    var_3_32->unk70 = 0;
    goto loop_5;
block_7:
    return;
}
#endif /* NON_MATCHING */
