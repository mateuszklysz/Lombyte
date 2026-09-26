> Moved verbatim from README.md when the front page was simplified.
> The front page keeps a one-line version of each; everything it left out is here.

## Contributing

The walkthrough and the reporting guidance the front page no longer carries:

Contributions are welcome: matching C, recovered names, types, and documentation. [CONTRIBUTING.md](../CONTRIBUTING.md) has the full walkthrough; in short: build the baseline with `make elf`, pick a unit with `python3 scripts/list-functions.py --score`, refine it with `python3 scripts/check-unit.py <unit>`, then promote it and open a pull request with the `PASS` output.

Work-in-progress C is welcome too: keep the oracle, make sure `make elf` still passes, and describe the remaining mismatch in the pull request. For build issues, include your operating system, tool versions, command, and relevant error output. Supply hashes and logs rather than game images or proprietary compiler binaries.

## Credits

Recovered symbol evidence and the address-bound semantic naming catalog are consolidated in [`config/us/recovered_names.json`](../config/us/recovered_names.json); [`docs/recovered-names.md`](recovered-names.md) describes the catalog and naming rules.

## License

The [MIT License](../LICENSE) covers the project's own tooling and documentation. Code reconstructed from third-party binaries remains the sole intellectual property of the respective copyright holders - see [THIRD_PARTY_NOTICES.md](../THIRD_PARTY_NOTICES.md).

## Also dropped from the front page

Verbatim lines whose wording the simplified front page replaced rather than kept.

### Legal notice (front page keeps a shorter WARNING)

> Do not use this decompilation project without your own legally purchased copy of the game. Lombyte includes no game data, executables, or proprietary toolchains, so you must provide your own legitimately obtained PS2 copy. Only the **USA / NTSC-U** release (`SCUS_971.99`) is supported — PAL, NTSC-J, and the later PS3 remaster are not.

### Hash line

Expected **SHA-256 of the boot executable** (not the ISO):

### Credits, full wording

- **[Himuro](https://github.com/Mikompilation/Himuro)** — for insight into the PS2 decompilation process and the reference EE-GCC toolchain work this project's matching compiler profiles build on.
- **[bordplate/RC1](https://codeberg.org/bordplate/RC1)** — a dormant matching-decompilation skeleton for the same game; its recovered symbol names and structure were used as reference, with attribution. Recovered symbol evidence and the address-bound semantic naming catalog are consolidated in [`config/us/recovered_names.json`](../config/us/recovered_names.json); [`docs/recovered-names.md`](recovered-names.md) describes the catalog and naming rules.
- **[splat](https://github.com/ethteck/splat)** and **[spimdisasm](https://github.com/Decompollaborate/spimdisasm)** — executable splitting and disassembly.
- **[objdiff](https://github.com/encounter/objdiff)** — object-level comparison.

### License, full wording

Repository code is distributed under the [MIT License](../LICENSE); the license covers the project's own tooling and documentation. Code reconstructed from third-party binaries remains the sole intellectual property of the respective copyright holders — see [THIRD_PARTY_NOTICES.md](../THIRD_PARTY_NOTICES.md).
