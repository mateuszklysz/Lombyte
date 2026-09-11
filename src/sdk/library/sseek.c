/*
STATE: C_EXACT
SYMBOL: __sseek
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/*
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * advertising materials, and other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of California, Berkeley.  The name of the
 * University may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

/* Source: newlib (UC Berkeley). */

#include "types.h"
struct M2c_arg0 {
    u8 pad_0[0xC];
    u16 unkC;
    s16 unkE;
    u8 pad_12[0x3E];
    s32 unk50;
    s32 unk54;
};

extern s32 func_00114518();
s64 __sseek(struct M2c_arg0 *arg0, s32 arg1, s32 arg2) {
    s64 temp_2_11;
    register u16 var_2_18 __asm__("v0");
    register s32 temp_2_19 __asm__("v1");

    temp_2_11 = func_00114518(arg0->unk54, arg0->unkE, arg1, arg2);
    if (temp_2_11 != -1)
        goto nonminus;
    var_2_18 = arg0->unkC;
    var_2_18 &= 0xEFFF;
    goto done;
nonminus:
        temp_2_19 = (s32) ((s64) (temp_2_11 << 0x20) >> 0x20);
        arg0->unk50 = temp_2_19;
        var_2_18 = arg0->unkC;
        var_2_18 |= 0x1000;
done:
    arg0->unkC = var_2_18;
    return temp_2_11;
}
