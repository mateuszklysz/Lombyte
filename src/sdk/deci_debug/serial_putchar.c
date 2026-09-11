/*
STATE: C_EXACT
SYMBOL: serialPutchar
SCORE: code=100 functions=100 data=100 complete_data=100
DECISION: promoted
*/

extern int kputchar(int character);

void serialPutchar(int character) {
    if (character == 10) {
        kputchar(13);
        kputchar(10);
    } else {
        kputchar(character);
    }
}
