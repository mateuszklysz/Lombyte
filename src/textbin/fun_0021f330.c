/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern s32 FUN_00205640();
extern s32 FUN_00233980();
s32 FUN_0021f330(void) {
    FUN_00233980(0x42, 0x44);
    FUN_00233980(0x47, 0xB);
    FUN_00205640();
    return 8;
}
