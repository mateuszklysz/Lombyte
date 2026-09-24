#include "types.h"
extern u8 D_00151B60[];
extern u8 *D_00160F00;
void FUN_001fb6e0(void) {
    *(u32 *)(D_00160F00 + 0) = 0x30000029;
    *(u32 *)(D_00160F00 + 4) = (u32)D_00151B60;
    *(u32 *)(D_00160F00 + 8) = 0;
    *(u32 *)(D_00160F00 + 12) = 0x50000029;
    D_00160F00 += 0x10;
}

extern __typeof__(FUN_001fb6e0) func_001FB6E0 __attribute__((alias("FUN_001fb6e0")));
