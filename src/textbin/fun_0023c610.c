/* ROLE: recovered function `viBufCount__FP5ViBuf` starts here; this unit covers only its beginning. */
/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x10];
    s32 unk10;
    s32 unk14;
    u8 pad_18[0x28];
    s32 unk40;
};

extern s32 FUN_00118990();
extern s32 FUN_001189b0();
s32 FUN_0023c610(struct M2c_arg0 *arg0) {
    s32 temp_17_17;

    FUN_001189b0(arg0->unk40);
    temp_17_17 = (arg0->unk10 << 0xB) + arg0->unk14;
    FUN_00118990(arg0->unk40);
    return temp_17_17;
}

extern s32 func_0023C610(struct M2c_arg0 *arg0) __attribute__((alias("FUN_0023c610")));
