#include "types.h"

extern u32 D_0015EC80;
extern u32 D_0015EC84;

void StoreObjectIndex(u32 *obj, s32 idx) {
    D_0015EC84 = idx;
    D_0015EC80 = (u32)obj;
    obj[idx + 1] = 0;
    obj[0] = 0;
}
