/*
STATE: C_EXACT
SYMBOL: ReadQueueStatus
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"

extern s32 D_0012FC9C __attribute__((section(".data")));
extern void SignalSema(s32 semaphore_id);

void ReadQueueStatus(void)
{
    SignalSema(D_0012FC9C);
}
