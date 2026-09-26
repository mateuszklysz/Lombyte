#include "types.h"
struct MapEntry { s32 id; s32 value; s32 extra; };
struct Obj { u8 pad0[0x2C]; s32 extra; };
extern s32 D_0015FF00;
extern struct Obj *D_001B3200[];
extern s32 D_001B3580[];
extern struct MapEntry D_001E8B80[];

void FUN_00212d68(s32 id) {
    struct Obj *obj;
    s32 i;

    obj = D_001B3200[D_0015FF00];
    for (i = 0; D_001E8B80[i].id != -1 && D_001E8B80[i].id != id; i++) {
    }
    D_001B3580[D_0015FF00] = D_001E8B80[i].value;
    if (obj != 0) {
        D_001B3200[D_0015FF00]->extra = D_001E8B80[i].extra;
    }
}

extern __typeof__(FUN_00212d68) func_00212D68 __attribute__((alias("FUN_00212d68")));
