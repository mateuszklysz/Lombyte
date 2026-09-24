#include "types.h"

extern u32 D_001611E0[];

void ClearStageStateFlag(void) {
    D_001611E0[0] = 0;
}
