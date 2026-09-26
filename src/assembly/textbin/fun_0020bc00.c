#include "types.h"
#include "asm.h"

#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/assembly/textbin/fun_0020bc00/FUN_0020bc00.s", FUN_0020bc00);
#else
#include "types.h"

struct entry {
    s16 unk0;
    u8 pad_2[0xE];
    u16 unk10;
    s16 unk12;
    s16 unk14[8];
    s16 unk24;
    s16 unk26;
};

extern s32 D_001A2C20[];

s32 FUN_0020bc00(s32 *arg0, s32 *arg1, s32 *arg2, s32 arg3) {
    struct entry *p;
    s32 *out;
    s16 prev_type;
    s16 val;
    s32 count;
    s32 flag;
    u16 flags;

    p = (struct entry *)D_001A2C20[0];
    count = 0;
    flag = 1;
    *arg0 = 0;
    if (arg1 != 0) {
        *arg1 = 0;
    }
    if (arg2 != 0) {
        *arg2 = -1;
    }
    if (p == 0) {
        return 0;
    }
    while (p->unk0 != 0) {
        prev_type = p->unk24;
        flags = p->unk10;
        if (prev_type != 2) {
            flag = (flags & 2) ? flag : 0;
        }
        if (!(flags & 2) && prev_type != 0) {
            out = arg0;
            val = p->unk0;
            if ((flags & 1) != 0 && prev_type == 2) {
                p++;
                continue;
            }
            *arg0 = p->unk0;
            if (arg3 != 0) {
                val = (p->unk24 == 2) ? 0x523E : p->unk14[p->unk26];
                *out = val;
            }
            if (arg1 != 0 && p->unk24 == 2) {
                *arg1 |= 1 << count;
            }
            arg0++;
            if (arg2 != 0) {
                *arg2 = p->unk12 + p->unk26;
                arg2++;
            }
            count++;
        }
        p++;
    }
    if (arg1 != 0) {
        if (flag != 0) {
            *arg1 |= 0x80000000;
        }
    }
    return count;
}
#endif /* NON_MATCHING */
