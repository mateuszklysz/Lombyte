/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x48];
    s32 unk48;
};

extern s32 FUN_00225cd8();
s32 FUN_00222f58(struct M2c_arg0 *arg0) {
    arg0->unk48 = FUN_00225cd8(arg0->unk48);
    return 0;
}
