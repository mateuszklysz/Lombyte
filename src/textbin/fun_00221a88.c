/*
STATE: C_EXACT
SYMBOL: FUN_00221a88
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x54];
    s32 unk54;
};

extern s32 FUN_00225cd8();
s32 FUN_00221a88(struct M2c_arg0 *arg0) {
    arg0->unk54 = FUN_00225cd8(arg0->unk54);
    return 0;
}
