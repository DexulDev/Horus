# MemForge — TODO

## Phase 1 — Foundation

* [x] Configure CMake.
* [x] Define initial project structure.
* [x] Create basic CLI.
  * [x] Prompt
  * [x] Command loop
  * [x] help
  * [x] exit
  * [x] Unknown command
* [ ] Implement Input/Output.
  * [x] Input reads commands
  * [ ] Output displays responses
* [ ] Create Kernel.
* [ ] Create Process.
* [ ] Create Hardware.
* [ ] Create Logger.

## Phase 2 — Processes

* [ ] Generate unique PIDs.
* [ ] Create processes.
* [ ] Validate process names.
* [ ] Implement priority range 0–100.
* [ ] Implement default priority 40.
* [ ] Implement `kill`.
* [ ] Implement PID lookup.
* [ ] Implement `running` / `suspended` states.

## Phase 3 — Resources

* [ ] Define simulated hardware.
* [ ] Define limited RAM.
* [ ] Define CPU.
* [ ] Define disk if necessary.
* [ ] Implement resource allocation.
* [ ] Implement resource release.
* [ ] Generate variable resource consumption.
* [ ] Detect resource pressure.

## Phase 4 — Scheduling

* [ ] Order processes by priority.
* [ ] Resolve priority ties using creation time.
* [ ] Implement process selection.
* [ ] Display the currently attended process.
* [ ] Periodically update the simulation state.

## Phase 5 — Suspension

* [ ] Detect insufficient memory during process creation.
* [ ] Find lower-priority processes.
* [ ] Suspend processes when necessary.
* [ ] Release 90% of memory when suspending.
* [ ] Preserve 10% of memory for process state.
* [ ] Retry resource allocation.
* [ ] Report failure when suspension is insufficient.

## Phase 6 — Observability

* [ ] Implement `status`.
* [ ] Display active processes.
* [ ] Display priorities.
* [ ] Display process states.
* [ ] Display resource consumption.
* [ ] Display available resources.
* [ ] Implement logging.
* [ ] Add timestamps to events.

## Phase 7 — Quality

* [ ] Handle invalid arguments.
* [ ] Standardize error messages.
* [ ] Implement `create -h`.
* [ ] Implement `kill -h`.
* [ ] Implement `status -h`.
* [ ] Add tests.
* [ ] Document the project.
* [ ] Add execution examples.
* [ ] Review object ownership and lifetimes.
* [ ] Check for memory leaks.
* [ ] Review class responsibilities.

## Possible Future Extensions

Do not implement these until the core system is working.

* [ ] Additional resource types.
* [ ] Different process profiles.
* [ ] Alternative scheduling algorithms.
* [ ] Performance metrics.
* [ ] Advanced visualization.
* [ ] I/O simulation.
* [ ] State persistence.
* [ ] Custom dynamic data structures.
* [ ] Real concurrency.
* [ ] Memory-management experiments.

---

## Reference

The full system design (Kernel, Process, Hardware, Logger, scheduling and memory-pressure rules, CLI commands) lives in `DESIGN.md` once written — keep this file to progress tracking only.
