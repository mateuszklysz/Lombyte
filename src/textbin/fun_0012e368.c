#include "types.h"
extern s32 func_0012E6E0();
void FUN_0012e368(s32 arg0) {
    s32 buf[4];

    buf[0] = arg0;
    func_0012E6E0(0x15, 4, buf, 0, 0);
}

extern __typeof__(FUN_0012e368) func_0012E368 __attribute__((alias("FUN_0012e368")));
