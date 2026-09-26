> Moved verbatim from README.md when the front page was simplified.
> Paths, commands and links below are relative to the repository root, as they
> were in README.md; read them from the checkout root.

## Repository layout

| Path                             | Contents                                                              |
| :------------------------------- | :-------------------------------------------------------------------- |
| [`src/`](../src/)                   | Reconstructed C, including matching and work-in-progress units        |
| [`src/assembly/`](../src/assembly/) | Assembly-backed units that preserve the original code                 |
| [`include/`](../include/)           | Shared types, structures, and declarations                            |
| [`config/`](../config/)             | Executable layout, symbol maps, and analysis exports                  |
| [`scripts/`](../scripts/)           | Build and contribution helpers                                        |
| [`patches/`](../patches/)           | Source patch for the optional patched EE-GCC profile                  |
| [`docs/`](../docs/)                 | Workflow and reference documentation                                  |
| [`assets/`](../assets/)             | Lombyte emblem and generated progress map                             |
| [`tools/`](../tools/)               | Locally installed compilers and comparison tools (not tracked by Git) |
| [`dumps/`](../dumps/)               | Local input disc images, ignored by Git                               |
| [`build/`](../build/)               | Local ISO output and the baseline workspace, ignored by Git           |
