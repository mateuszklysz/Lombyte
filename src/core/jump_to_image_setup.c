/*
STATE: C_EXACT
SYMBOL: JumpToImageSetup
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"

extern const char ImageSetupMessage[] __asm__("D_00153AD8");
extern void scePrintf(const char *format, ...);

void JumpToImageSetup(void *image)
{
    scePrintf(ImageSetupMessage, image);
}
