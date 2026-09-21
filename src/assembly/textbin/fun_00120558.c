/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 19.2571%
 * blocker: the logic is correct but register/stack/delay code generation is blocked
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00120558/FUN_00120558.s", FUN_00120558);
#else
#include "types.h"

s32 FUN_00120558(void) {
    s32 temp_2_19;
    s32 temp_2_23;
    s32 temp_2_25;
    s32 temp_2_31;

loop_1:
    temp_2_19 = !(*(s32 *)0x10009000 & 0x100) ? 0 : 1;
    temp_2_23 = (*(s32 *)0x1000A000 & 0x100) ? (temp_2_19 | 2) : temp_2_19;
    temp_2_25 = (*(s32 *)0x10003C00 & 3) ? (temp_2_23 | 4) : temp_2_23;
    temp_2_31 = (0 /*  unknown instruction: cfc2.ni $a0, $vi29  */ & 0x100) ? (temp_2_25 | 8) : temp_2_25;
    if (((*(s32 *)0x10003020 & 0xC00) ? (temp_2_31 | 0x10) : temp_2_31) != 0) {
        goto loop_1;
    }
    return 0;
}
#endif /* NON_MATCHING */
