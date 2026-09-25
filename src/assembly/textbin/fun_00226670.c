#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00226670/FUN_00226670.s", FUN_00226670);
#else
#include "types.h"
struct Request { s32 state; s32 args[13]; };
extern struct Request D_001D5E88[];
extern s32 D_00160350;
s32 FUN_00226670(void) {
    struct Request *r;

    for (r = &D_001D5E88[1]; r < &D_001D5E88[8]; r++) {
        r[0] = r[1];
    }
    D_00160350--;
    return 0;
}
#endif /* NON_MATCHING */
