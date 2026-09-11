/*
STATE: C_EXACT
SYMBOL: Kputs
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

typedef int s32;

extern s32 Deci2Call(s32 command, void *request);

s32 Kputs(const char *message)
{
    const char *request_message = message;

    return Deci2Call(0x10, (void *)&request_message);
}
