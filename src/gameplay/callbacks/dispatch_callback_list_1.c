#include "types.h"
extern s32 D_0015F464;
extern void (*D_0018DB40[])(s32);
extern s32 D_0018DC40[];
void dispatch_callback_list_1(void) __asm__("FUN_001f4650");

void dispatch_callback_list_1(void) {
    s32 i;

    for (i = 0; i < D_0015F464; i++) {
        D_0018DB40[i](D_0018DC40[i]);
    }
}

extern __typeof__(dispatch_callback_list_1) func_001F4650 __attribute__((alias("FUN_001f4650")));
