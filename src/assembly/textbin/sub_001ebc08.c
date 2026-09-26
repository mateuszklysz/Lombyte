#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/sub_001ebc08/sub_001ebc08.s", sub_001ebc08);
#else
#include "types.h"

__asm__(".extern D_0015ED80, 4");

extern volatile s32 D_0015ED80;
extern void func_001EB9D0();

extern volatile s32 D_0015F438;
extern volatile s32 D_0015F5B0;
extern volatile s32 D_0015EE8C;
extern volatile s32 D_0015EE74;
extern volatile s32 D_0015EE78;

s32 sub_001ebc08(void) {
    s32 v;

    v = D_0015F438 + 1;
    D_0015F438 = v;
    if (D_0015F5B0 == 0) {
        func_001EB9D0();
    }
    if (D_0015ED80 == 0) {
        D_0015EE8C = 0x280000;
    }
    v = D_0015EE8C;
    D_0015EE74 = v;
    D_0015EE78 = v;
    return v;
}
#endif /* NON_MATCHING */
