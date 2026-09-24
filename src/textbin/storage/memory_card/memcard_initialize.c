#include "types.h"
extern s32 sceMcInit();
extern u8 D_001E8360[];
extern s32 DebugPrint();
void memcard_initialize(void) __asm__("FUN_0020ac58");

void memcard_initialize(void) {
    if (sceMcInit() != 0) {
        DebugPrint(D_001E8360);
    }
}

extern void func_0020AC58(void) __attribute__((alias("FUN_0020ac58")));
extern void memcard_Init(void) __attribute__((alias("FUN_0020ac58")));
