/*
STATE: C_EXACT
SYMBOL: InitializeRpcCommand
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

#include "types.h"

extern void ExitRpcCommand(void) __asm__("sceSifExitCmd");
extern s32 RpcCommandState __asm__("D_0012FC08")
    __attribute__((section(".data")));

void ResetRpcCommandState(void) __asm__("InitializeRpcCommand");

void ResetRpcCommandState(void)
{
    ExitRpcCommand();
    RpcCommandState = 0;
}
