#include "types.h"

s32 EnableInterrupts(void) {
    u32 status;

    __asm__ __volatile__("mfc0 %0, $12" : "=r"(status));
    status &= 0x10000;
    __asm__ __volatile__("ei");
    return status != 0;
}
