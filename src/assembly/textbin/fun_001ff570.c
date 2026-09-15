/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 64.9655%
 * blocker: descriptive coverage from the run-14 campaign banks; exact code generation remains unproven (register allocation and scheduling residuals)
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001ff570/FUN_001ff570.s", FUN_001ff570);
#else
#include "rnc/assembly_textbin_fun_001ff570_types.h"
#include "types.h"




extern struct M2c_D_00199B60 D_00199B60;
void FUN_001ff570(s32 arg0, s32 arg1) {
    s32 *var_3_9;
    s32 var_6_8;
    struct M2c_temp_3_25 *temp_3_25;

    var_6_8 = 0;
    if (D_00199B60.unk64 != arg0) {
        var_3_9 = ((u8 *)&D_00199B60 + 0x64);
loop_2:
        var_6_8 += 1;
        var_3_9 += 0x24;
        if (var_6_8 < 0xD) {
            if (*var_3_9 == arg0) {
                goto block_4;
            }
            goto loop_2;
        }
    } else {
block_4:
        if (var_6_8 < 0xD) {
            temp_3_25 = ((u8 *)&D_00199B60 + (var_6_8 * 0x90));
            temp_3_25->unk24 = arg1;
            if (temp_3_25->unk68 == 0) {
                temp_3_25->unk4 = arg1;
            }
        }
    }
}
#endif /* NON_MATCHING */
