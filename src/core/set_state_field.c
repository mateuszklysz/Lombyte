/* ROLE: recovered function `videoDecAbort__FP8VideoDec` starts here; this unit covers only its beginning. */
/* Set the state field to one and report success. */
int SetStateField(int *state_fields) __asm__("func_0023CC70");

int SetStateField(int *state_fields) {
    register int field_value asm("$2") = 1;
    state_fields[42] = field_value;
    return field_value;
}
