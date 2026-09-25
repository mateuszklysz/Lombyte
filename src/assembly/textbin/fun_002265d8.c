#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_002265d8/FUN_002265d8.s", FUN_002265d8);
#else
#include "types.h"
struct Request { s32 state; s32 args[13]; };
extern s32 D_00160350;
extern struct Request D_001D5EC0[8];
s32 FUN_002265d8(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7,
                 s32 a8, s32 a9, s32 a10, s32 a11, s32 a12) {
    struct Request *r;
    s32 i;

    if (D_00160350 >= 8) {
        return -1;
    }
    i = D_00160350;
    D_00160350 = i + 1;
    r = &D_001D5EC0[i];
    r->args[0] = a0;
    r->args[1] = a1;
    r->args[2] = a2;
    r->args[3] = a3;
    r->args[4] = a4;
    r->args[5] = a5;
    r->args[6] = a6;
    r->args[7] = a7;
    r->args[12] = a12;
    r->args[8] = a8;
    r->args[9] = a9;
    r->args[10] = a10;
    r->args[11] = a11;
    r->state = 0;
    return 0;
}
#endif /* NON_MATCHING */
