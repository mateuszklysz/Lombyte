# Commit message standard

Every commit subject in this repository uses one shape:

```
<type>: <summary>
```

The `<type>` is the change's primary area. The subject names the module or
symbol when useful, but never repeats an area prefix — `decomp: textbin/sdk:
promote …` is invalid; the correct form is `decomp: promote …`.

## Types

| Type | Use for |
| :--- | :--- |
| `decomp` | Exact-C promotions, source work, decompiled-source refactors, oracle/source plumbing |
| `docs` | README and documentation, public reference data, source headers, ROLE comments, treemap/display text |
| `chore` | Non-behavioral cleanup, generated artifacts, tooling, ownership/reference data refreshes |
| `fix` | A bug fix in tooling or the build |
| `config` | Ownership/config data proper (`rnc1.us.yaml`, `unit_categories.json`, linker bindings) |

A commit that promotes sources *and* refreshes the map is still `decomp:`;
the map is a derived artifact, not a second subject. Prefer `decomp:` whenever
the commit changes `src/` behavior.

## Rules

- Lowercase type, exactly one `: ` separator, imperative summary, no trailing
  period, subject length ≤ 120 characters.
- Do not repeat the type or add a scope token in the summary.
- One commit, one primary area. Split unrelated areas instead of stacking
  prefixes.
- Bodies are free-form and optional; put detail (metrics, notes) there.

## Examples

```
decomp: promote fun_002212b8 (424 B)
decomp: promote run-11 owners (20 units; C_EXACT 485 / 65,428 B)
docs: add recovered engine source layout reference
chore: refresh treemap (audit 465 units)
config: refresh recovered-name unit paths for promoted units
fix: make verify-baseline.sh executable
```

## Enforcement

The format is validated by `scripts/check-commit-messages.py` (maintainers)
and by the pipeline commit phase, which formats every automatic promotion
message through `scripts/commit_naming.py`. Run the validator before opening
a pull request that rewrites history:

```sh
python3 scripts/check-commit-messages.py --range HEAD~50..HEAD
```

The canonical writer/validator is `scripts/commit_naming.py`; a `commit-msg`
hook is versioned at `scripts/commit-msg` and linked into `.git/hooks/`
(idempotent):

```sh
ln -sf ../../scripts/commit-msg .git/hooks/commit-msg
python3 scripts/install-commit-hook.py --check   # from the tools repository
```
