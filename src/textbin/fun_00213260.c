/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern s32 FUN_001160d8();
s32 FUN_00213260(s32 arg0) {
    return (s32) ((FUN_001160d8() >> 0x10) & 0x7FFF) % arg0;
}

extern s32 func_00213260(s32 arg0) __attribute__((alias("FUN_00213260")));
