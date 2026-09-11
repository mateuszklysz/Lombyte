# Per-file state headers

Every configured `src/**/*.c` file starts with a short provenance block:

```c
/*
STATE: C_NON_MATCHING
SYMBOL: FUN_XXXXXXXX
SCORE: code=95 functions=100 data=100 complete_data=100
COMPILER: himuro-O2 -O2 -g2 -gstabs
DECISION: retained
BLOCKER: none
*/
```

| Field | Meaning |
| :--- | :--- |
| `STATE` | `C_EXACT` (byte-exact C), `C_NON_MATCHING` (readable C, not exact yet), or `INTENTIONAL_LOW_LEVEL_ASM` (kept as assembly on purpose) |
| `SYMBOL` | The objdiff/audit identity of the unit (`FUN_XXXXXXXX`, its `func_` alias, or a recovered name) |
| `SCORE` | Measured match percentages: `code`, `functions`, `data`, `complete_data` |
| `COMPILER` | Compiler profile and flags that produced the measurement |
| `DECISION` | `promoted`, `retained`, `rejected`, or `stuck` |
| `BLOCKER` | One short reason, or `none` |

`COMPILER` and `BLOCKER` may be omitted when no measurement exists, such as
headers backfilled from an audit snapshot.

## Rules

- Keep the block at the very top of the file. Do **not** add `EVIDENCE:` lines
  or paths to private workspaces (`analysis/`, `build/workspace/`, campaign
  IDs): those artifacts live with the maintainers, not in this repository.
- Update the block with the stamper whenever the file changes:

  ```sh
  python3 scripts/stamp_source_header.py src/ee/example.c \
      --state C_EXACT --symbol ExampleFunction \
      --score "code=100 functions=100 data=100 complete_data=100" \
      --compiler "himuro-O2 -O2 -g2 -gstabs" --decision promoted --apply
  ```

- Validate before opening a pull request:

  ```sh
  python3 scripts/stamp_source_header.py --check src/ee/example.c
  ```

  `--check` fails on a missing block, a missing
  `STATE`/`SYMBOL`/`SCORE`/`DECISION` field, or a forbidden `EVIDENCE` field.
  Pass the same field options to also check values.

The stamper (`scripts/stamp_source_header.py`) is the single writer for the
block format; maintainers use it to backfill headers from the byte-level audit.
