/*
STATE: C_NON_MATCHING
SYMBOL: FUN_00203640
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00203640/FUN_00203640.s", FUN_00203640);
#else
#include "rnc/assembly_textbin_fun_00203640_types.h"
#include "types.h"


extern s32 D_0015FF00;
extern u8 D_001B3200[];
extern u8 D_001B3900[];
extern u8 D_001B3AC0[];
extern u8 D_001B6180[];
extern s32 func_00203338();
extern s32 func_00212D68();
void FUN_00203640(struct M2c_arg0 *arg0, s32 arg1, s32 arg2, s16 arg3) {
    s16 *temp_8_26;
    s32 temp_10_11;
    void **temp_9_28;

    temp_10_11 = D_0015FF00 * 4;
    *(arg3 + D_001B3AC0) = (u8) D_0015FF00;
    temp_8_26 = (D_0015FF00 * 2) + D_001B3900;
    temp_9_28 = temp_10_11 + D_001B3200;
    *temp_8_26 = arg3;
    *temp_9_28 = arg0;
    if (arg0 == NULL) {
        func_00212D68(arg3, (u8) D_0015FF00, temp_8_26, temp_9_28, temp_10_11);
        D_0015FF00 += 1;
        return;
    }
    *(temp_10_11 + D_001B6180) = arg0->unk2C;
    func_00212D68(arg3, (u8) D_0015FF00, temp_8_26, temp_9_28, temp_10_11);
    D_0015FF00 += 1;
    func_00203338(arg0, arg1, arg2, arg3);
}
#endif /* NON_MATCHING */
