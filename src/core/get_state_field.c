/* Return the state field at byte offset 0xA8. */
int GetStateField(int *state_fields) __asm__("func_0023CC80");

int GetStateField(int *state_fields) {
    return state_fields[42];
}
