#include "types.h"
extern s32 FUN_0023afc0();
void FUN_0023aef0(s32 *arg0) {
    if (*arg0 != 0) {
        FUN_0023afc0();
    }
}

extern void func_0023AEF0(s32 *arg0) __attribute__((alias("FUN_0023aef0")));
