#include "types.h"
extern void func_00227D80();
extern void func_00227ED0();

u8 *FUN_002270e8(s16 *arg0) {
    u8 *p;

    p = (u8 *)arg0;
    if (*arg0 == 0) {
        func_00227D80(arg0);
        p += 0x20;
    } else if (*arg0 == 1) {
        func_00227ED0(arg0);
        p += 0x30;
    }
    return p;
}

extern __typeof__(FUN_002270e8) func_002270E8 __attribute__((alias("FUN_002270e8")));
