# Contributing

Thanks for helping decompile *Ratchet & Clank*! The goal is simple: turn the
assembly-backed units under [`src/assembly/`](src/assembly/) into readable C
that compiles to the exact retail bytes. Every function counts, and every kind
of help is welcome — writing matching C, recovering names, improving types, or
fixing documentation.

The build is the safety net: it verifies the reconstructed executable against
retail byte-for-byte, so a contribution that would change the game fails the
build instead of slipping through.

## The contribution loop

### 1. Build the baseline once

Follow [Building](README.md#building) to install the required toolchain and
provide your own copy of the game, then run:

```sh
make elf
```

The optional patched EE-GCC profile is not needed to build: without it a small
set of units is rebuilt from the retail oracle. Build it separately (see
[docs/patched-toolchain.md](docs/patched-toolchain.md)) if you want to work on
those units' C.

The run ends with `PASS: reconstructed boot ELF matches retail`. It also leaves
a workspace at `build/baseline` inside the checkout (override with
`BASELINE_ROOT`) that holds the retail assembly and the per-unit comparison
targets used below.

### 2. Pick a function

```sh
python3 scripts/list-functions.py --score
```

This lists the units whose C is still pending. With `--score` each candidate's
current C body is measured against retail (about a minute for the full list)
and the highest match is listed first: those are usually the closest to a
promotion and the best first targets. Without `--score` the list is offline and
sorted by size instead. Use `--limit` and `--filter` to narrow the list.

Grab a unit name, for example `assembly/math/sign_extend_packed_value`.

If you want to claim a function so nobody duplicates the work, open an issue or
comment on an existing one with the unit name.

### 3. Read the source and the retail assembly

Open the unit's source, e.g. `src/assembly/math/subtract_integer_with_clamp.c`.
While a unit is pending, it keeps the retail assembly as an *oracle* and the
readable C body as a fallback:

```c
#ifndef NON_MATCHING
INCLUDE_ASM("config/us/expected/asm/...", SubtractIntegerWithClamp);
#else
/* readable C body -- this is what you edit */
#endif /* NON_MATCHING */
```

The oracle is generated locally from your own game executable and is what keeps
the build byte-exact until the C replaces it. **Do not remove it while you
work** — the default build keeps using the oracle, and only `check-unit`
compiles your C body.

The retail disassembly for the unit is in the workspace; `check-unit` prints the
path under `retail asm`. Read it next to the C and the surrounding units.

### 4. Write the C

- Rewrite or extend the C body under `#else`. Seeded bodies are starting
  points; some are from older campaigns and are wrong or incomplete.
- Remove `__attribute__((section(".text.*")))` seed attributes. The retail unit
  object uses plain `.text`; promoted units never use custom text sections.
- Keep the unit's canonical symbol name (the `SYMBOL:` field of the header).
  A friendly name is welcome when you alias the canonical one, e.g.
  `int MyName(int a0) __asm__("func_00123456");`.
- Declare variables at the start of blocks and use the project typedefs
  (`u32`, `s32`, `f32`, …) — this is the GCC 2.9 era, not modern C.
- Keep it descriptive C. Do not substitute inline assembly or copied
  disassembly for the function body.

### 5. Check your work

```sh
python3 scripts/check-unit.py assembly/math/subtract_integer_with_clamp
```

This compiles just that unit's C body and compares it with the retail object.
It prints the `.text` score, per-function scores, and the first differing
instructions. Iterate until it reports `Object matches.` If you pulled changes
since your last baseline build, re-run `make elf` first so the workspace
matches your checkout.

A 100% object score means the unit's C is byte-equivalent; the authoritative
check is still the full image:

```sh
make elf
```

### 6. Promote an exact unit

Once the unit matches, remove the oracle and make the C the only compiled code:

1. Delete the `#ifndef NON_MATCHING` oracle block and the `#else` /
   `#endif` lines, leaving the C body.
2. Move the file out of the assembly tree:
   `git mv src/assembly/<path>.c src/<path>.c`.
3. In [`config/us/rnc1.us.yaml`](config/us/rnc1.us.yaml), change that unit's
   owner from `assembly/<path>` to `<path>`.
4. Update the file's state header:

   ```sh
   python3 scripts/stamp_source_header.py src/<path>.c \
       --state C_EXACT --symbol <Symbol> \
       --score "code=100 functions=100 data=100 complete_data=100" \
       --decision promoted --apply
   ```

5. Run `make elf` again; it must end with `PASS`.

### 7. Open a pull request

Commit with the project's message standard (see
[`docs/commit-messages.md`](docs/commit-messages.md)), for example
`decomp: promote SubtractIntegerWithClamp (24 B)`, and open a pull request
using the template. Include the unit name, its size, and the `PASS` line from
`make elf`. A maintainer will review and merge.

## Not exact yet? That is still useful

You do not have to reach 100% to contribute. Keep the oracle in place (restore
it with `git checkout -- <file>` if you removed it while experimenting), leave
your improved C body under `#else`, make sure `make elf` still passes, and open
a work-in-progress pull request. Describe what you tried and where the first
mismatch is — the next contributor can pick it up from there.

If you are stuck, open an issue with the unit name, the `check-unit` output,
and the mismatch you cannot classify. See
[`docs/decompilation-tips.md`](docs/decompilation-tips.md) for the full
acceptance discipline and the recovery ladder.

## House rules

- Keep changes focused; one unit per pull request is perfect for a first
  contribution.
- The check tools only read the checkout and write inside the baseline
  workspace (`build/baseline`, or `$BASELINE_ROOT` when you set one); they
  never touch other locations.
- Never commit game data, disc images, or compiler binaries. `dumps/`,
  `build/`, and `tools/` stay out of Git.
- Do not edit `tools/`; it is local toolchain setup.
- Do not refactor matching code for style: the generated bytes are the
  deliverable.
- Run `python3 scripts/test_public_tools.py` before changing anything under
  `scripts/`.
- Enable the commit-message hook once per checkout (optional but handy):

  ```sh
  ln -sf ../scripts/commit-msg.py .git/hooks/commit-msg
  ```
