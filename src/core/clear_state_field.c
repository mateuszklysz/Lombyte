/* Clear the state field used by the small state helpers. */
void ClearStateField(int *state_fields) __asm__("func_0023CC30");

void ClearStateField(int *state_fields) {
    state_fields[42] = 0;
}
