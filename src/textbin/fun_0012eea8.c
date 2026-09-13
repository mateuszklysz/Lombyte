#include "types.h"
extern s32 D_0015EC8C;
extern s32 sceCdBreak(void);
extern s32 func_0012E6E0();
s32 FUN_0012eea8(void) {
    if (D_0015EC8C == 0) {
        return sceCdBreak();
    }
    func_0012E6E0(0x37, 0, 0, 0, 0);
    return 1;
}

extern __typeof__(FUN_0012eea8) func_0012EEA8 __attribute__((alias("FUN_0012eea8")));
