/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 78.0000%
 * blocker: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0022db10/FUN_0022db10.s", FUN_0022db10);
#else
#include "rnc/assembly_textbin_fun_0022db10_types.h"
#include "types.h"


extern u8 D_0013E550[];
extern s32 D_0015F5B4;
extern s32 D_0015F634;
extern s32 func_0022D7F0();
s32 FUN_0022db10(s32 arg1, s32 arg0, s32 arg2) {
    s32 temp_2_22;
    struct M2c_temp_3_30 *temp_3_30;

    if (arg1 >= D_0015F5B4) {
        return -1;
    }
    temp_2_22 = func_0022D7F0(D_0015F634 + (arg1 << 5), arg0, arg2, 0, 0x400);
    if (temp_2_22 >= 0) {
        temp_3_30 = (struct M2c_temp_3_30 *) ((temp_2_22 * 0x70) + D_0013E550);
        temp_3_30->unk7E = arg1;
        temp_3_30->unk88 = arg2;
    }
    return temp_2_22;
}
#endif /* NON_MATCHING */
