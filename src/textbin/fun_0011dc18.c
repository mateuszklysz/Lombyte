#include "types.h"
typedef void (*func_ptr)(void);
extern func_ptr D_0015EC18[];
/* libgcc __do_global_ctors: the body is gbl-ctors.h DO_GLOBAL_CTORS_BODY. */
void FUN_0011dc18(void) {
    do {
        unsigned long nptrs = (unsigned long)D_0015EC18[0];
        unsigned i;

        if (nptrs == (unsigned long)-1) {
            for (nptrs = 0; D_0015EC18[nptrs + 1] != 0; nptrs++) {
            }
        }
        for (i = nptrs; i >= 1; i--) {
            D_0015EC18[i]();
        }
    } while (0);
}

extern __typeof__(FUN_0011dc18) func_0011DC18 __attribute__((alias("FUN_0011dc18")));
