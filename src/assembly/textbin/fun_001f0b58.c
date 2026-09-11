/*
STATE: INTENTIONAL_LOW_LEVEL_ASM
SYMBOL: FUN_001f0b58
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (intentional asm)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f0b58/FUN_001f0b58.s", FUN_001f0b58);
#else
#include "rnc/assembly_textbin_fun_001f0b58_types.h"
#include "types.h"


extern struct M2c_D_00194100 D_00194100;
s32 FUN_001f0b58(void) {
    s32 temp_2_10;

    temp_2_10 = D_00194100.unk1C & 0x1F;
    if ((D_00194100.unk1C >= 0) && (temp_2_10 != 0x1F)) {
        return temp_2_10;
    }
    return -1;
}
#endif /* NON_MATCHING */
