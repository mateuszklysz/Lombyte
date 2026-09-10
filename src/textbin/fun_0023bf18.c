/* ROLE: recovered function `viBufEndPut__FP5ViBufi` starts here; this unit covers only its beginning. */
/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0x14];
    s32 unk14;
    u8 pad_18[0x28];
    s32 unk40;
    u8 pad_44[0x4];
    s64 unk48;
};

extern s32 FUN_00118990();
extern s32 FUN_001189b0();
void FUN_0023bf18(struct M2c_arg0 *arg0, s32 arg1) {
    FUN_001189b0(arg0->unk40);
    arg0->unk14 = (s32) (arg0->unk14 + arg1);
    arg0->unk48 = (s64) (arg1 + arg0->unk48);
    FUN_00118990(arg0->unk40);
}

extern void func_0023BF18(struct M2c_arg0 *arg0, s32 arg1) __attribute__((alias("FUN_0023bf18")));
