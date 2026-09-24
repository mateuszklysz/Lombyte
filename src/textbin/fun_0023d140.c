#include "types.h"
extern s32 D_0016120C;
extern void func_0023C920(s32, u64 *);
struct Out { u8 pad[8]; u64 a; u64 b; };
s32 FUN_0023d140(s32 arg0, struct Out *arg1) {
    u64 tmp[3];

    func_0023C920(D_0016120C + 0xD9090, tmp);
    arg1->a = tmp[0];
    arg1->b = tmp[1];
    return 1;
}

extern __typeof__(FUN_0023d140) func_0023D140 __attribute__((alias("FUN_0023d140")));
extern __typeof__(FUN_0023d140) D_0023D140 __attribute__((alias("FUN_0023d140")));
