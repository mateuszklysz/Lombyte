<p align="center">
  <img src="assets/lombyte-logo.png" alt="Lombyte" width="440">
</p>

<p align="center">
  <a href="https://decomp.dev/mateuszklysz/Lombyte"><img src="https://img.shields.io/badge/decomp.dev-progress-dd8b30?style=flat-square&labelColor=0d1117" alt="decomp.dev progress"></a>
  <a href="CONTRIBUTING.md"><img src="https://img.shields.io/badge/contributing-guide-c3cbd8?style=flat-square&labelColor=0d1117" alt="Contributing guide"></a>
</p>

---

<p align="center">
  A work-in-progress, byte-matching decompilation of Ratchet &amp; Clank (2002) for PlayStation 2.<br>
  Reconstructing the original executable in readable C, with a native PC port as the long-term goal.
</p>

> [!WARNING]
> Lombyte does not include game data, executables, disc images, or proprietary toolchains. A legitimately obtained copy of the **USA / NTSC-U** release (`SCUS_971.99`) is required.

---

<p align="center">
  <a href="https://decomp.dev/mateuszklysz/Lombyte">
    <img src="assets/decomp_map.svg" alt="Lombyte decompilation progress" width="100%">
  </a>
</p>

## Supported version

| Game                   | Platform      | Region       | Boot executable |
| ---------------------- | ------------- | ------------ | --------------- |
| Ratchet & Clank (2002) | PlayStation 2 | USA / NTSC-U | `SCUS_971.99`   |

Expected SHA-256 of the boot executable:

```text
e050581032e4bb3f20341307da5b69b76f1574910519155380ea771e55c3c0c9
```

Only this release is currently targeted. PAL, NTSC-J, and the PlayStation 3 remaster are not supported.

## Contributing

Contributions to matching C, recovered names, types, and documentation are welcome. See [CONTRIBUTING.md](CONTRIBUTING.md) for the workflow and verification requirements.

Work-in-progress C is also welcome when it preserves the matching baseline. Do not submit game images, extracted game data, or proprietary compiler binaries.

## Documentation

| Document                                             | Contents                                                                 |
| :--------------------------------------------------- | :----------------------------------------------------------------------- |
| [docs/building.md](docs/building.md)                 | Toolchain, game files, `make elf`, the gate, `make iso`, build overrides |
| [docs/progress-metrics.md](docs/progress-metrics.md) | What C_EXACT and C_FUZZY mean, and why 100 % is not exact                |
| [CONTRIBUTING.md](CONTRIBUTING.md)                   | Per-unit workflow, from picking a target to a pull request               |

## Credits

- [Himuro](https://github.com/Mikompilation/Himuro) — PS2 decompilation research and reference EE-GCC toolchain work used by Lombyte's matching compiler profiles.
- [bordplate/RC1](https://codeberg.org/bordplate/RC1) — an earlier matching-decompilation skeleton for the same game; recovered symbol names and structure were used as reference with attribution.
- [splat](https://github.com/ethteck/splat) and [spimdisasm](https://github.com/Decompollaborate/spimdisasm) — executable splitting and disassembly.
- [objdiff](https://github.com/encounter/objdiff) — object-level comparison.
- The PS2 reverse-engineering and decompilation communities for the tools and research that make matching projects possible.

## License

Repository code is distributed under the [MIT License](LICENSE). Code reconstructed from third-party binaries remains the intellectual property of the respective copyright holders; see [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md).

The Lombyte emblem in [`assets/`](assets/) is the project's original artwork.
