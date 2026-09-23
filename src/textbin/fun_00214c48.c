#include "types.h"

extern s32 FUN_001fa6d0(f32);

f32 FUN_00214c48(s32 arg0, f32 fparg0)
{
    s32 count;
    s32 value;
    f32 scale;
    f32 half;

    count = arg0;
    value = 1;
    if (count > 0)
    {
        do
        {
            count--;
            value *= 10;
        } while (count != 0);
    }
    scale = (f32)value;
    half = 1.0f / (2.0f * scale);
    fparg0 = fparg0 + half;
    fparg0 = fparg0 * scale;
    fparg0 = (f32)FUN_001fa6d0(fparg0);
    return fparg0 / scale;
}

extern __typeof__(FUN_00214c48) func_00214C48 __attribute__((alias("FUN_00214c48")));
