#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00204ef8/FUN_00204ef8.s", FUN_00204ef8);
#else
#include "types.h"
struct Slots { s32 used[5]; s32 owner[5]; };
extern struct Slots D_001A0368;
s32 FUN_00204ef8(s32 reverse) {
    struct Slots *s = &D_001A0368;
    s32 i;
    s32 j;

    for (i = 0; i < 5; i++) {
        j = reverse ? 4 - i : i;
        if (s->used[j] != 0 && s->owner[j] == -1) {
            return j;
        }
    }
    return -1;
}
#endif /* NON_MATCHING */
