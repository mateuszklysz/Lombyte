/*
STATE: C_EXACT
SYMBOL: FUN_001eda60
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: SN ee-gcc2.95.2-v2.73a cc1 + Sony Ps2EeAs (padless, ASTRA 2026-09-12)
DECISION: promoted
BLOCKER: none
*/

#include "types.h"

extern float D_00186F40[];
extern float D_0015F43C;

void FUN_001eda60(void) {
    float cur = D_00186F40[150];
    float next;

    if (cur != 0.0f) {
        next = D_0015F43C - cur;
        D_0015F43C = next;
        if (next <= 0.0f) {
            D_00186F40[150] = 0.0f;
            *(volatile float *)&D_0015F43C = 0.0f;
        }
    }
}
