/*
STATE: C_EXACT
SYMBOL: DIntr
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2 -Os -fno-cse-follow-jumps
DECISION: promoted
BLOCKER: none
*/

#include "types.h"

s32 DIntr(void) {
    register u32 eie __asm__("v1");
    register u32 next __asm__("v0");
    register s32 res __asm__("a0");

    __asm__ __volatile__("mfc0 %0, $12" : "=r"(eie));
    eie &= 0x10000;
    res = eie != 0;
    if (eie) {
        __asm__(".p2align 3");
        do {
            __asm__ __volatile__("di");
            __asm__ __volatile__("sync.p");
            __asm__ __volatile__("mfc0 %0, $12" : "=r"(next));
            next &= 0x10000;
        } while (next);
    } else {
        res = 0;
        __asm__ __volatile__("" : "+r"(res));
        return res;
    }
    return res;
}
