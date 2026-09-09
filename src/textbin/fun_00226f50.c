/* C_EXACT (byte-proven) under the per-unit SN ee-gcc profile (-O2).
 * Promoted from the assembly/textbin oracle; full-ELF SHA gate verified.
 */
#include "types.h"
extern u8 D_001D63D0[];
extern u8 D_001D64D0[];
extern u8 D_001D7130[];
extern s32 FUN_001f97e8();
void FUN_00226f50(void) {
    FUN_001f97e8(D_001D64D0, 0, 0xC60);
    FUN_001f97e8(D_001D7130, 0, 0xC60);
    FUN_001f97e8(D_001D63D0, 0, 0x100);
}

extern void func_00226F50(void) __attribute__((alias("FUN_00226f50")));
