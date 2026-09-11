/*
STATE: C_EXACT
SYMBOL: InvokeStateInitializer
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

/* Invoke the state initializer and preserve its result. */

extern int StateInitializer(void) __asm__("func_0011C938");

int InvokeStateInitializer(void) __asm__("InvokeStateInitializer");

int InvokeStateInitializer(void) {
    return StateInitializer();
}
