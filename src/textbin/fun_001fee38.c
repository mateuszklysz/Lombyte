#include "types.h"
struct Entry { u16 id; u8 pad2[6]; };
extern struct Entry *D_0019A404[];
s32 FUN_001fee38(s32 id) {
    s32 i;

    for (i = 0; D_0019A404[0][i].id != 0xFFFF; i++) {
        if (D_0019A404[0][i].id == id) {
            break;
        }
    }
    return i;
}

extern __typeof__(FUN_001fee38) func_001FEE38 __attribute__((alias("FUN_001fee38")));
