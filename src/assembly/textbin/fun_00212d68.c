#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00212d68/FUN_00212d68.s", FUN_00212d68);
#else
#include "types.h"
struct Entry { s32 id; s32 a; s32 b; };
struct Obj { u8 pad0[0x2C]; s32 b; };
extern s32 D_0015FF00;
extern struct Obj *D_001B3200[];
extern s32 D_001B3580[];
extern struct Entry D_001E8B80[];
void FUN_00212d68(s32 id) {
    s32 slot = D_0015FF00;
    struct Obj *obj = D_001B3200[slot];
    s32 i = 0;

    while (D_001E8B80[i].id != -1 && D_001E8B80[i].id != id) {
        i++;
    }
    D_001B3580[slot] = D_001E8B80[i].a;
    if (obj != 0) {
        D_001B3200[slot]->b = D_001E8B80[i].b;
    }
}
#endif /* NON_MATCHING */
