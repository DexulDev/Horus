##MEMFORGE

>This is experimental, only for learning purposes

A toy memory management system written in C++ to explore OOP design and memory allocator strategies


# MemForge

A process and resource management simulator written in C++.

MemForge provides a simplified representation of how an operating system manages processes and hardware resources. A Kernel manages processes, requests resources from simulated Hardware, and decides how to react when the system experiences resource pressure.

## Goal

Build a small simulator that allows users to observe:

* Process creation and termination.
* Resource allocation and release.
* Process prioritization.
* Process suspension under memory pressure.
* Process selection and scheduling.
* Event logging.
* Interaction through a simple CLI.

The project is intended to practice object-oriented design in C++ without introducing unnecessary abstractions.

---

# System Model

Main flow:

`Terminal → Input → Kernel → Hardware → Kernel → Output → Terminal`

The **Kernel** is the central authority of the system.

### Kernel

Responsibilities:

* Create processes.
* Terminate processes.
* Find processes by PID.
* Maintain the collection of active processes.
* Validate priorities.
* Order processes according to priority.
* Resolve priority ties using process creation time.
* Decide which processes should be suspended under resource pressure.
* Request resource allocation/release from Hardware.
* Record system events through the Logger.
* Determine which process is currently being attended.

### Process

Represents an active process.

Minimum information:

* Name.
* PID / unique identifier.
* Resource requirements/allocation.
* Priority from 0 to 100.
* State.

States:

* `running`
* `suspended`

Creation and termination are considered system events rather than persistent process states.

### Hardware

Represents the simulated physical resources.

Hardware is responsible for knowing:

* Total resource capacity.
* Available resources.
* Currently used resources.
* Resource allocation.
* Resource release.
* Whether a resource request can be satisfied.

Hardware does not know about system policies or process priorities.

The Kernel decides what to do when Hardware reports insufficient resources.

### Logger

Records relevant system events to a file.

Conceptual examples:

* Process Firefox created.
* Process Discord suspended.
* Process LibreOffice created.
* Process Discord terminated.

The log records events rather than attempting to maintain a complete historical representation of every process.

### Terminal / Input / Output

The Terminal provides the CLI interface.

Input interprets user commands and provides the necessary information to the Kernel.

Output displays system responses.

Commands may provide help through `-h`.

Example:

`create -h`

---

# Processes

A process can be created with:

`create <name>`

or with an explicitly specified priority:

`create <name> --priority <0-100>`

The default priority is:

`40`

If an invalid priority is provided, the Kernel reports the error and creates the process using the default priority.

Conceptual example:

`create firefox --priority 999`

→ Invalid value on priority 999

→ Successfully created process Firefox with default priority (40)

Each process receives a unique identifier.

---

# Priority and Scheduling

Processes are ordered according to:

1. Higher priority first.
2. If priorities are equal, the most recently created process comes first.

The first process in the collection represents the process currently being attended.

The interface may display:

`Attending Discord`

The simulator does not need to execute real process instructions or implement actual runtimes.

---

# Resources

Hardware resources will initially be limited and hardcoded within the simulator.

Resource consumption may change during the simulation.

Different processes may have different resource requirements and consumption limits.

Resource consumption may incorporate controlled randomness.

Priority represents the importance of a process when making Kernel decisions, **not necessarily a direct multiplier of resource consumption**.

---

# Memory Pressure

When a new process requires more memory than is currently available:

1. Kernel checks Hardware resource availability.
2. If enough memory is available, the process is created normally.
3. If there is not enough memory, Kernel searches for candidate processes.
4. Lower-priority processes may be suspended.
5. Suspending a process releases approximately 90% of its allocated memory.
6. The remaining 10% represents the minimum memory required to preserve the process state.
7. Kernel checks memory availability again.
8. If enough memory is now available, the new process can be created.
9. If there is still insufficient memory after suspending the necessary processes, creation fails.

A suspended process continues to exist.

A terminated process releases 100% of its resources and is removed from the active process collection.

---

# Process Collection

The number of processes is not limited by an arbitrary fixed capacity.

The collection should grow as new processes are created.

Required operations:

* Insert a process.
* Search by PID.
* Remove by PID.
* Iterate through processes.
* Reorder processes.

The underlying implementation is intentionally left open.

A standard C++ container may be used, or a custom dynamic data structure may be implemented as an additional learning exercise.

---

# Initial CLI

Planned commands:

* `create`
* `kill`
* `status`
* `help`
* `exit`

The command set may grow as real requirements emerge.

Commands and abstractions should not be added merely to increase the project's feature count.

---

# TODO

## Phase 1 — Foundation

* [x] Configure CMake.
* [x] Define initial project structure.
* [ ] Create basic CLI.
* [ ] Implement Input/Output.
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
* [ ] Write README.
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

## Project Principle

**Do not abstract for the sake of abstraction.**

A class should exist because it represents a real entity or responsibility within the system.

A feature should exist because it meaningfully changes or improves the simulation.

MemForge should grow from a small, understandable core into more complex systems rather than attempting to simulate an entire operating system from the first commit.

