/*
STATE: C_NON_MATCHING
SYMBOL: viBufPutTs__FP5ViBufP9TimeStamp
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered whole function `viBufPutTs__FP5ViBufP9TimeStamp`. */

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/vi_buf_put_ts/FUN_0023c810.s", FUN_0023c810);
#else
#include "types.h"
/* ee-2.9-991111 matched TU. */

extern void func_003B0A40(int a);

/* compiler: ee-2.9-991111 ; extra keys: none */


__attribute__((section(".text._request_call")))
void FUN_0023c810(char *p) {
    char *r;
    char *q;
    int t0;
    int t1;
    r = *(char **)(p + 0x34);
    q = *(char **)(r + 0x40);
    if (*(int *)(q + 0xC) == 0) {
        *(int *)(q + 0xC) = (int)r;
    } else {
        *(int *)(*(int *)(q + 0x10) + 0x3C) = (int)r;
    }
    *(int *)(q + 0x10) = (int)r;
    t0 = *(int *)(p + 0x14);
    t1 = *(int *)(p + 0x1C);
    *(int *)(r + 0x20) = t0;
    *(int *)(r + 0x1C) = t1;
    *(int *)(r + 0x24) = *(int *)(p + 0x20);
    *(int *)(r + 0xC) = *(int *)(p + 0x24);
    *(int *)(r + 0x28) = *(int *)(p + 0x28);
    *(int *)(r + 0x2C) = *(int *)(p + 0x2C);
    *(int *)(r + 0x30) = *(int *)(p + 0x30);
    *(int *)(r + 0x34) = *(int *)(p + 0x10);
    if (*(int *)(q + 0x0) >= 0) {
        if (*(int *)(q + 0x4) == 0) {
            func_003B0A40(*(int *)(q + 0x0));
        }
    }
}
#endif /* NON_MATCHING */
