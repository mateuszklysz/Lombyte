/*
STATE: C_EXACT
SYMBOL: dpcmp
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"

typedef struct DoubleParts {
    u32 words[8];
} DoubleParts;

extern void UnpackDouble(double *value, DoubleParts *parts) __asm__("__unpack_d");
extern s32 CompareDoubleParts(DoubleParts *left, DoubleParts *right)
    __asm__("__fpcmp_parts_d");

s32 CompareDoubles(double left, double right) __asm__("dpcmp");

s32 CompareDoubles(double left, double right)
{
    DoubleParts left_parts;
    DoubleParts right_parts;

    UnpackDouble(&left, &left_parts);
    UnpackDouble(&right, &right_parts);
    return CompareDoubleParts(&left_parts, &right_parts);
}
