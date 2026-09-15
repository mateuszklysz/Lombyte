## What changed

<!-- What changed and why; list the affected units or files. -->

## Type

- [ ] Exact C promotion (unit matches; oracle removed)
- [ ] Work-in-progress C (oracle kept; `make elf` passes)
- [ ] Build / config
- [ ] Docs / tooling

## Verification

- Unit(s) / files:
- `make elf` result: PASS / FAIL
  <!-- Paste the final lines (`PASS: reconstructed boot ELF matches retail`). -->
- `check-unit` object score (C changes): **_%**
- `python3 scripts/stamp_source_header.py --check --normalize <files>`: PASS / N/A

## Promotion details (exact C only)

- Symbol:
- Bytes:
- Measures: code **_ · functions _** · data **_ · complete-data _**
- Compiler and flags:

## Checklist

- [ ] `make elf` passes
- [ ] State headers updated for changed `src/` files
- [ ] No game data, disc images, or compiler binaries
