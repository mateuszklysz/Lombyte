/*
STATE: C_NON_MATCHING
SYMBOL: FUN_001f9838
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_001f9838/FUN_001f9838.s", FUN_001f9838);
#else
#include "rnc/assembly_textbin_fun_001f9838_types.h"
#include "types.h"
/* sn-2.95.3-136 matched TU. */

__attribute__((section(".text.func_00155D60")))
unsigned char *FUN_001f9838(unsigned char *base, long val, int idx) {
    unsigned char *p;
    int i;

    for (i = base[0x385] - 1; i != 0; i--) {
        ;
    }
    p = base + idx * 0xB0;
    *(long *)(p + 0x30) = val;
    return p;
}

__attribute__((section(".text.func_002C3000")))
void func_002C3000(void *unused, int *arr, int count) {
    int i;

    arr[0] = 0xFFFFFFFF;
    for (i = 0; i < count - 1; i++) {
        arr[i + 1] = ((unsigned int)&arr[i]) & 0x7FFFFFFF;
    }
}









__attribute__((section(".text.func_001FD988")))
void func_001FD988(Owner *o, unsigned char f) {
    Node *p;
    int r;

    o->flag = f;
    r = func_001FD908(o);
    for (p = o->head; p != 0; p = p->next) {
        p->sub->f10 = r;
    }
}
#endif /* NON_MATCHING */
