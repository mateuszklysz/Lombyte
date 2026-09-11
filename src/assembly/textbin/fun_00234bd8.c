/*
STATE: C_NON_MATCHING
SYMBOL: ComputeTfragTextureUsage
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: retained (pending)
*/

/* ROLE: recovered function `ComputeTfragTextureUsage` starts here; this unit covers only its beginning. */
/* NON_MATCHING FALLBACK (descriptive C retained for coverage)
 * direct code match: 0.0000%
 * blocker: Breadth textbin export: C branch is the measured target-symbol fallback; remaining differences are structural and register/stack scheduling blockers while the raw textbin oracle remains authoritative.
 * The default matching build keeps the expected assembly oracle.
 */
#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00234bd8/FUN_00234bd8.s", FUN_00234bd8);
#else
#include "rnc/assembly_textbin_fun_00234bd8_types.h"
#include "types.h"
/* sn-2.95.3-136 matched TU. */

extern char D_0076A880[];

__attribute__((section(".text.func_003A95A8")))
char *func_003A95A8(char *s) {
    int i;
    int j;
    char c;

    for (j = 0; s[j] != '\0'; j++) {
        ;
    }
    j--;
    i = 0;
    while (i < j) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
        i++;
        j--;
    }
    return s;
}

__attribute__((section(".text.func_00375860")))
void FUN_00234bd8(void) {
    char *base;
    int status;
    int done;
    int i;

    base = D_0076A880;
    do {
        status = func_003B2F48(base + 0xDC, 0x19720317, 0);
        if (status < 0) {
            for (;;) {
                ;
            }
        }
        done = *(int *)(base + 0x100);

        i = 10000;
        while (i--) {
            ;
        }
    } while (done == 0);
}



__attribute__((section(".text.cCoreSave_clearGodItem")))
void cCoreSave_clearGodItem(cCoreSave *this) {
    int i;

    for (i = 0; i < 6; i++) {
        *(this->mData + i + 0xA8) = 0;
    }
}





__attribute__((section(".text.func_00290988")))
int func_00290988(Mgr *this, int id) {
    Ent *p;
    int n = 0;

    for (p = this->head; p != 0; p = p->next) {
        if (p->id == id) {
            n++;
        }
    }
    return n;
}

__attribute__((section(".text.func_003A62D8")))
void func_003A62D8(unsigned char *dst, unsigned char *src, unsigned int n) {
    while (n--) {
        *dst++ = *src++;
    }
}





__attribute__((section(".text.func_002B5E58")))
int func_002B5E58(Owner *this) {
    Node *p;
    int n;

    n = 0;
    p = this->head;
    if (p != 0) {
        n = 1;
        for (p = p->next; p != 0; p = p->next) {
            n++;
        }
    }
    return n;
}
#endif /* NON_MATCHING */
