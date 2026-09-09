/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern s32 FUN_0012f0e0();
s32 FUN_0023ac90(s32 arg0) {
    FUN_0012f0e0();
    return 1;
}

extern s32 func_0023AC90(s32 arg0) __attribute__((alias("FUN_0023ac90")));
