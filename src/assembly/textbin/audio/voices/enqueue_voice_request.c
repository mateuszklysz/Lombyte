#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/audio/voices/enqueue_voice_request/FUN_0022dc50.s", FUN_0022dc50);
#else
#include "types.h"
struct Handler;
struct Handler { s32 id; void (*fn)(struct Handler *); u8 pad8[0x88]; };
struct Table { u8 pad0[0xD90]; s32 count; struct Handler *handlers; };
extern struct Table D_0013E550;
void enqueue_voice_request(void) __asm__("FUN_0022dc50");

void enqueue_voice_request(void) {
    s32 i;

    for (i = 0; i < D_0013E550.count; i++) {
        struct Handler *h = &D_0013E550.handlers[i];

        if (h->fn != 0) {
            h->fn(h);
        }
    }
}
#endif /* NON_MATCHING */
