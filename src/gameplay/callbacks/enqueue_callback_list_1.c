#include "types.h"
extern s32 D_0015F464;
extern u8 D_0018DB40[];
extern u8 D_0018DC40[];
void enqueue_callback_list_1(s32 arg0, s32 arg1) __asm__("FUN_001f4600");

void enqueue_callback_list_1(s32 arg0, s32 arg1) {
    s32 off;

    if (D_0015F464 < 0x40) {
        off = D_0015F464 * 4;
        *(s32 *)(off + D_0018DB40) = arg0;
        *(s32 *)(off + D_0018DC40) = arg1;
        D_0015F464 += 1;
    }
}
