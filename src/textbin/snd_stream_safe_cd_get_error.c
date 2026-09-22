#include "types.h"
extern u8 D_00137B00[];
extern s32 D_0015EC8C;
extern s32 sceCdGetError();
s32 FUN_0012eef0(s32 arg0) {
    u8 *p;
    if (D_0015EC8C != 0) {
        p = D_00137B00;
        __asm__ __volatile__("" : "+r"(p));
        return *(volatile s32 *)(p + 0x10);
    }
    return sceCdGetError();
}

extern __typeof__(FUN_0012eef0) func_0012EEF0 __attribute__((alias("FUN_0012eef0")));

/* Recovered original symbol name. */
extern __typeof__(FUN_0012eef0) snd_StreamSafeCdGetError __attribute__((alias("FUN_0012eef0")));
