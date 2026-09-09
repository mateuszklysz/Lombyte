/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern u8 D_001DF3F0[];
extern s32 FUN_001f44b8();
extern s32 FUN_001f6270();
extern s32 FUN_001f62b0();
void FUN_001f69d0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_16_18;

    temp_16_18 = arg0 - FUN_001f6270(arg3, arg4);
    FUN_001f62b0(temp_16_18, arg1, arg2, arg3, arg4, FUN_001f44b8(2), D_001DF3F0);
}

extern void func_001F69D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) __attribute__((alias("FUN_001f69d0")));
