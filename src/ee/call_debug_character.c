/*
STATE: C_EXACT
SYMBOL: CallDebugCharacter
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

typedef signed char s8;

int Deci2Call(int function, void *args) __asm__("Deci2Call");

int CallDebugCharacter(int value, int character) __asm__("CallDebugCharacter");

int CallDebugCharacter(int value, int character) {
    int args[2] = {value, (s8)character};
    return Deci2Call(3, args);
}
