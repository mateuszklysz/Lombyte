/*
STATE: C_EXACT
SYMBOL: cmd_sem_init
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2 -O2 -g2 -gstabs -fno-schedule-insns
DECISION: promoted
BLOCKER: none
*/

#include "types.h"
struct Sema {
    s32 count;
    s32 max_count;
    s32 init_count;
    s32 wait_threads;
    s32 attr;
    s32 option;
};
extern s32 D_001312E0[];
extern s32 D_001312E8[];
extern s32 D_001312EC[];
extern s32 D_001312F0[];
extern s32 CreateSema();
void cmd_sem_init(void) {
    struct Sema sema;
    s32 r1;

    if ((D_001312E8[0] != -1) && (D_001312EC[0] != -1)) {
        return;
    }
    sema.option = 0;
    sema.max_count = 1;
    sema.init_count = 1;
    r1 = CreateSema(&sema);
    __asm__("" : "+r"(r1));
    D_001312E8[0] = r1;
    D_001312EC[0] = CreateSema(&sema);
    sema.init_count = 0;
    D_001312E0[0] = CreateSema(&sema);
    D_001312F0[0] = 0;
}
