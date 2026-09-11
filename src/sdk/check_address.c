/*
STATE: C_EXACT
SYMBOL: CheckAddress
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"

u32 CheckAddress(u32 address) __asm__("CheckAddress");

u32 CheckAddress(u32 address)
{
    if ((address >> 28) == 7u) {
        address = address & 0x0FFFFFFFu;
        address = address | 0x80000000u;
    }
    return address;
}
