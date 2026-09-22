#include "types.h"
extern u8 D_001B2E80[];
extern s32 FUN_001f98d0();
void FUN_0020d248(void) {
    FUN_001f98d0(0x70003A00, D_001B2E80, 0x380);
}

extern void func_0020D248(void) __attribute__((alias("FUN_0020d248")));
