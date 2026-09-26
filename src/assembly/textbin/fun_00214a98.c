#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_00214a98/FUN_00214a98.s", FUN_00214a98);
#else
#include "types.h"

struct Vec3 {
	f32 x;
	f32 y;
	f32 z;
};

struct Pack {
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};

extern f32 func_001F99C0(f32);
extern s32 func_001FA6D0(f32);
extern s32 func_001F9D68(struct Pack *, s32);

void FUN_00214a98(struct Vec3 *arg0, s32 *arg1)
{
	struct Pack pack;
	f32 f21;
	f32 f20;
	f32 f1;
	f32 f6;
	f32 f0;
	s32 v2;
	s32 v3;

	f21 = func_001F99C0(arg0->x);
	f20 = func_001F99C0(arg0->y);
	f0 = func_001F99C0(arg0->z);
	if (f20 < f21) {
		f20 = f21;
	}
	if (f0 < f20) {
		f1 = f20;
	} else {
		f1 = f0;
	}
	v2 = func_001FA6D0(f1 * 10000.0f / 63.0f);
	v3 = (v2 < 0x100) ? v2 : 0xFF;
	v3 = (v3 <= 0) ? 1 : v3;
	f6 = (f32)v3;
	f0 = 1.0f / (f6 * 0.0001f);
	pack.x = arg0->x * f0 + 127.0f;
	pack.y = arg0->y * f0 + 127.0f;
	pack.z = arg0->z * f0 + 127.0f;
	pack.w = f6;
	*arg1 = func_001F9D68(&pack, 1);
}
#endif /* NON_MATCHING */
