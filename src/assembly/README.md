# Assembly-backed units

This tree contains C translation units whose bodies preserve target assembly,
including temporary exact oracles and intentional kernel/ISA-low-level code.
It is kept separate from descriptive C to make recovery scope obvious.

The source-quality audit under `the private evidence archive/` is authoritative for whether
an individual unit is temporary, intentional low-level assembly, or C-exact.
No unit should be promoted to descriptive C without the normal exact-match and
full-baseline gates.
