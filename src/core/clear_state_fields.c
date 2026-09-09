/* Clear the two state fields used by the utility object. */
void ClearStateFields(volatile int *state_fields) __asm__("func_0023D1E8");

void ClearStateFields(volatile int *state_fields) {
    state_fields[3] = 0;
    state_fields[2] = 0;
}
