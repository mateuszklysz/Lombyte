#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/unclassified/init_mem_slots/FUN_002015d8.s", FUN_002015d8);
#else
#include "types.h"
#include "rnc/assembly_textbin_fun_002015d8_types.h"

extern s32 D_00160F0C;
extern struct M2c_D_001940C0 D_001940C0;
extern u8 D_24135F[];

void init_mem_slots(void) __asm__("FUN_002015d8");

void init_mem_slots(void) {
    struct M2c_D_001940C0 *s;
    s32 base;
    s32 step;
    s32 a;
    s32 b;
    s32 c;
    s32 d;

    s = &D_001940C0;
    base = (s32)&D_24135F[0] & 0xFFFFC000;
    step = D_00160F0C;
    a = base + step;
    b = a + step;
    c = b + 0x64000;
    d = c + 0x30000;
    s->unk0 = base;
    s->unk4 = base;
    s->unk8 = a;
    s->unkC = b;
    s->unk10 = c;
    s->unk14 = d;
    s->unk18 = d;
    s->unk20 = 0x07000000;
    s->unk24 = 0x07100000;
    s->unk28 = 0x07200000;
}
#endif /* NON_MATCHING */
