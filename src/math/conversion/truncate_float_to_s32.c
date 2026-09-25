#include "types.h"

s32 truncate_float_to_s32(f32 fparg0) __asm__("FUN_001fa6d0");

s32 truncate_float_to_s32(f32 fparg0) {
    return (s32) fparg0;
}
