#include "types.h"
extern s32 D_001B2BC0[16];
s32 find_or_allocate_id_slot(s32 id) __asm__("FUN_0020cc18");

s32 find_or_allocate_id_slot(s32 id) {
    s32 i;

    for (i = 0; i < 16; i++) {
        if (D_001B2BC0[i] == 0 || D_001B2BC0[i] == id) {
            D_001B2BC0[i] = id;
            return i;
        }
    }
    return -1;
}

extern __typeof__(find_or_allocate_id_slot) func_0020CC18 __attribute__((alias("FUN_0020cc18")));
