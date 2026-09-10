# Matching workflow and acceptance discipline

Procedure and acceptance bar used for Ratchet & Clank (PS2, `SCUS_971.99`).

## 1. Ground truth

- The retail boot executable and its configured boundaries are the only
  authority. Every claim binds to an address, a byte range, and hashes.
- Reconstruction (image bytes) and decompilation (readable C) are separate
  metrics. Keep them separate.

## 2. Ownership and oracles

- Every configured range has exactly one owner. Unfinished owners stay
  assembly-backed so the image is always reconstructible.
- An owner becomes C only when its entire compiled range is byte-exact.
  Retagging ownership records progress.
- The oracle is removed only after the replacement passes every gate.

## 3. Compiler model

- Profiles are per owner and chosen from observed codegen: save style,
  scheduling, addressing. Directory names and single samples are not
  evidence.
- Per-owner flags require a stated hypothesis and a passing gate. Freeze
  profile and flags while a candidate is refined.
- Record which build produced an accepted result.

## 4. The unit loop

1. Read the complete target and its callers and callees. Recover types,
   layouts, signatures, and one or two exact siblings.
2. Write descriptive C for one owned range.
3. Compile fresh and compare at object level.
4. Classify the earliest mismatch: CFG, ABI, field width or signedness,
   addressing, lifetime, ordering, scheduling.
5. Change one hypothesis. Recompile. Keep only a strict improvement and
   revert to the prior best on regression.
6. If the same classification survives three attempts, change the approach:
   recover missing context, try another source family, or escalate to a
   recovery route.

## 5. Shape families and batching

- Batch independent variants of one hypothesis (arm mirroring, hoisting,
  width, temporaries) and score them together. Serial probing is slower and
  destabilizes register allocation.
- Inspect complete aligned instruction streams before proposing order or
  addressing changes. Filtered mismatch rows are not aligned pairs.

## 6. Exactness and the gate

- Exact means 100% code, functions, data, and complete-data for the owner,
  plus a byte-identical reconstructed image.
- A high score is not exactness. Relocation-blind comparisons are not proof.
  Verify linked bytes at the retail address, then the whole image.
- Run the aggregate image gate once per promotion batch. On failure, bisect
  the batch.

## 7. Promotion transaction

- Normalize the owner's path, keep the canonical symbol and required aliases,
  resolve relocations and data ownership, and re-verify all four measures
  from a fresh compile.
- Remove the oracle only after the transaction succeeds, and update the
  record.
- Refresh the audit from fresh evidence; counters are derived, never edited.
- Recovered names (see `docs/recovered-names.md`) are context: keep the
  canonical symbol, record the recovered name as a `ROLE:` comment, and declare
  it as an alias only when the unit is the whole recovered function and the
  name is not already used elsewhere.

## 8. Evidence discipline

- Every attempt keeps a unique set of artifacts: source hash, compiler
  invocation, object, raw comparison report, measures, decision, next action.
- Worked files carry a short state header: state, symbol, measures, compiler,
  decision, blocker, evidence path.
- Raw reports are preserved; summaries do not replace them.
- Parked work records the tested hypotheses, the blocker class, and a
  concrete revisit trigger.

## 9. Recovery ladder

Escalate in order when the unit loop stalls:

1. Context recovery: field widths, pointer chains, ABI, layouts, siblings.
2. Source shapes: evaluation order, temporaries, branch polarity, loop form,
   declaration size.
3. Compiler and flag probes tied to a codegen hypothesis.
4. Guided C mutation search for allocation, store order, or delay-slot ties.
5. Alternate compiler builds when the required codegen is absent.
6. Park with a recorded blocker and a concrete revisit trigger.

A failed search is not proof of impossibility, and a higher score does not
justify a change in behavior.

## 10. Progress accounting

- Report exact functions and exact bytes separately. A partial score is not
  throughput until it is promoted.
- Exclude terminal categories such as hand-written low-level assembly from
  the recoverable-C denominator, and state the denominator.
- Keep the image hash gate status with the numbers.

## 11. Hygiene

- Do not refactor for style when it changes generated code. Matching,
  descriptive C is the deliverable.
- Keep game data, disc images, and proprietary compiler binaries out of the
  repository.
