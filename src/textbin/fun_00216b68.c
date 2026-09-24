#include "types.h"
struct Handle { u32 id; u8 pad4[6]; s16 state; };
extern char D_00160068[];
extern void DebugPrint(char *, ...);
void FUN_00216b68(u32 id, s64 arg) {
    struct Handle *h = (struct Handle *)(s32)arg;

    if (h != 0) {
        if (h->id != 0xFFFFFFFF) {
            DebugPrint(D_00160068);
        } else {
            h->id = id;
            if (id == 0) {
                h->state = 7;
            }
        }
    }
}

extern __typeof__(FUN_00216b68) func_00216B68 __attribute__((alias("FUN_00216b68")));
