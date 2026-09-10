/* ROLE: recovered whole function `videoDecIsFlushed__FP8VideoDec` (movie/videodec.cpp). */
#include "types.h"
extern s32 func_0012BA58();
extern s32 func_0023CCE0(s32 arg0);
s32 FUN_0023cde0(s32 arg0) {
    s32 var_2_13;

    var_2_13 = 0;
    if (func_0023CCE0(arg0) == 0) {
        var_2_13 = func_0012BA58(arg0) != 0;
    }
    return var_2_13;
}

/* Recovered original symbol name. */
extern __typeof__(FUN_0023cde0) videoDecIsFlushed__FP8VideoDec __attribute__((alias("FUN_0023cde0")));
