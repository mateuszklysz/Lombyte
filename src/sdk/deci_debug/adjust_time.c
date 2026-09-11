/*
STATE: C_EXACT
SYMBOL: AdjustTime
SCORE: code=100 functions=100 data=100 complete_data=100
COMPILER: himuro-O2
DECISION: promoted via pipeline-2026-09-11-5 transactional staged + full-ELF gate
BLOCKER: none
*/

/* ROLE: deci debug clock adjust */

/* adjust_time: deci clock adjust; v0-pinned hour with void addhour(). */

#include "types.h"

struct AdjustTimeArg {
    u8 pad_0[2];
    u8 hour;
};

extern s32 func_0012D3C0();
extern s32 subhour();
extern void addhour();
extern s32 func_0012D428();

void AdjustTime(struct AdjustTimeArg *arg0, s32 arg1)
{
    s32 hour;
    register s32 input_hour __asm__("v0");

    func_0012D3C0();
    input_hour = arg0->hour;
    hour = input_hour + arg1;
    if (hour >= 0) {
        if (hour >= 0x3D) {
            do {
                addhour(arg0);
                hour -= 0x3C;
            } while (hour >= 0x3D);
        }
    } else {
        do {
            hour += 0x3C;
            subhour(arg0);
        } while (hour < 0);
    }
    arg0->hour = (u8)hour;
    func_0012D428(arg0);
}
