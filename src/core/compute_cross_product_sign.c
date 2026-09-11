/*
STATE: C_EXACT
SYMBOL: ComputeCrossProductSign
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "rnc1_functions.h"

int Func00208818(int a0, int a1, int a2, int a3, int t0, int t1)
{
    int dx;
    int dy;
    int term1;
    int term2;
    register int base1 asm("v0");
    register int base2 asm("t1");
    int diff;

    dx = a0 - a2;
    asm volatile("" : "+r"(dx));
    dy = a1 - a3;
    asm volatile("" : "+r"(dy));
    base1 = t0 - a2;
    base2 = t1 - a3;
    term1 = base1 * dy;
    asm volatile("" ::: "memory");
    term2 = base2 * dx;
    diff = term1 - term2;

    if (diff < 0) {
        return 1;
    }
    return 0;
}
