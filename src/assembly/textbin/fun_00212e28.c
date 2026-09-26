#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00212e28/FUN_00212e28.s", FUN_00212e28);
#else
#include "types.h"
struct Moby {
    u8 pad0[0x20]; s8 state; u8 pad21[7]; struct Moby *next; u8 pad2C[8]; u16 flags;
    u8 pad36[0x3E]; void (*update)(struct Moby *);
};
extern struct Moby *D_0015FF24;
extern struct Moby *func_0020D868(void);
extern void func_0020D580(struct Moby *);
extern void func_0020DEF8(struct Moby *);
void FUN_00212e28(void) {
    struct Moby *m;
    void (*update)(struct Moby *);

    D_0015FF24 = func_0020D868();
    m = D_0015FF24;
    while (m != 0) {
        if (m->state >= 0) {
            if (!(m->flags & 0x40)) {
                func_0020D580(m);
            }
            update = m->update;
            if (update != 0) {
                update(m);
            }
            if (!(m->flags & 0x4)) {
                func_0020DEF8(m);
            }
        }
        m = m->next;
    }
}
#endif /* NON_MATCHING */
