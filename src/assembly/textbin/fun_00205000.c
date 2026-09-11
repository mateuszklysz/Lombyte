/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00205000
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00205000/FUN_00205000.s", FUN_00205000);
#else
#include "types.h"
extern u8 D_001A00F0[];
extern s32 func_001F98D0();
void FUN_00205000(s32 arg0, s32 arg1) {
    s32 *temp_18_28;
    s32 *temp_20_17;
    s32 temp_17_19;
    s32 temp_18_12;
    s32 *temp_16_26;
    s32 *temp_19_14;
    s32 *temp_2_16;

    temp_18_12 = arg1 * 4;
    temp_19_14 = D_001A00F0 + 0x2A4;
    temp_2_16 = D_001A00F0 + 0x278;
    temp_20_17 = temp_18_12 + temp_19_14;
    temp_17_19 = arg0 * 4;
    func_001F98D0(*(temp_17_19 + temp_2_16), *(temp_18_12 + temp_2_16), *temp_20_17 * 0x10);
    temp_16_26 = D_001A00F0 + 0x28C;
    temp_18_28 = temp_18_12 + temp_16_26;
    *(temp_17_19 + temp_16_26) = *temp_18_28;
    *(temp_17_19 + temp_19_14) = *temp_20_17;
    *temp_18_28 = -1;
}
#endif /* NON_MATCHING */
