#include "types.h"
struct Code4 { u8 b[4]; };
struct VideoDec { u8 pad0[0x48]; u8 stream[0x60]; s32 state; };
extern struct Code4 D_00161218[];
extern s32 D_0016120C;
extern void func_0023CBF0(struct VideoDec *, u32 *, s32 *, u32 *, s32 *);
extern s32 func_0023B810(u32, s32, u32, s32, void *, s32, s32, s32);
extern void func_0023CC10(s32, s32);
extern void func_0023C660(void *);
s32 FUN_0023cd08(struct VideoDec *vd) {
    struct Code4 code = D_00161218[0];
    u32 p0;
    s32 n0;
    u32 p1;
    s32 n1;
    s32 r;

    func_0023CBF0(vd, &p0, &n0, &p1, &n1);
    if (n0 + n1 < 4) {
        return 0;
    }
    r = func_0023B810((p0 & 0x0FFFFFFF) | 0x20000000, n0, (p1 & 0x0FFFFFFF) | 0x20000000, n1, &code, 4, 0, 0);
    func_0023CC10(D_0016120C + 0xD9048, r);
    func_0023C660(vd->stream);
    if (vd->state == 0) {
        vd->state = 2;
    }
    return 1;
}

extern __typeof__(FUN_0023cd08) func_0023CD08 __attribute__((alias("FUN_0023cd08")));
