# Horus

> **I will not build the biggest thing I can.**
> **I will build the smallest thing that forces me to understand something deeply.**

**HORUS** is a 24-month roadmap dedicated to the practical study of **low-level systems**.

The journey covers:

**C → C++ → Rust → Linux → memory → concurrency → networking → storage → runtimes → kernel**

It does not seek to accumulate technologies or produce artificially large projects. The goal is to understand how systems work by building, measuring, breaking, and debugging small implementations.

---

## Philosophy

> *Start small. Go deep.*

HORUS is not a bootcamp, a collection of tutorials, or a race to complete technologies.

It is a learning process based on:

* Technical questions
* Experimentation
* Code
* Debugging
* Benchmarks
* Reading real code
* Documentation
* Design and trade-off analysis
* Open source contributions

The scale of each project should be determined by **what it allows you to learn**, not by how impressive it looks.

A small implementation that forces you to understand memory, concurrency, or how the kernel works is worth more than a huge project built by following abstractions that aren't understood.

---

## Working Principle

**1 sustainable hour a day > 6 hours on a Sunday and then disappearing for two weeks.**

The recommended pace is:

* **Normal:** ~6 h/week
* **With energy:** 8–10 h/week
* **Hard week:** 20 minutes still count

HORUS must coexist with university, work, rest, and personal life.

There is no obligation to maintain a streak or to complete the entire roadmap. **Abandoning a project that stopped teaching you something is also progress.**

---

## Learning System

A normal 60-minute session:

```text
10 min — theory
40 min — code / experimentation
10 min — journal
```

The journal follows this format:

```text
## YYYY-MM-DD

Time: XX min

### Learned
-

### Built
-

### Didn't understand
-

### Bug / discovery
-

### Next step
-
```

Every week a 30–45 minute review is done to assess:

* What was actually learned.
* Which concepts are still not understood.
* Which errors were important.
* Whether the project is still useful.
* What should be studied next.

---

## Structure

```text
Horus/
├── README.md
├── roadmap.md
├── journal/
│   ├── 2026/
│   ├── 2027/
│   └── 2028/
├── notes/
│   ├── cpp/
│   ├── c/
│   ├── rust/
│   ├── linux/
│   ├── memory/
│   ├── concurrency/
│   ├── networking/
│   ├── storage/
│   └── compilers/
├── experiments/
├── projects/
└── resources/
```

### `README.md`

General description of the project, philosophy, and structure.

### `roadmap.md`

Complete study plan, projects, checkpoints, and technical questions.

### `journal/`

Chronological record of learning and experiments.

### `notes/`

Technical notes organized by area.

### `projects/`

Implementations developed throughout the journey.

### `resources/`

Books, documentation, and references used.

---

## Areas

### C / C++

Manual memory management, pointers, RAII, ABI, compilation, linking, data structures, and concurrency.

### Rust

Ownership, borrowing, lifetimes, `unsafe`, concurrency, FFI, and safe abstraction design.

### Linux

Processes, syscalls, virtual memory, ELF, I/O, file systems, `/proc`, kernel space, and debugging tools.

### Concurrency

Threads, atomics, memory ordering, mutexes, lock-free programming, cache locality, and false sharing.

### Networking

Sockets, TCP, UDP, DNS, HTTP, non-blocking I/O, `epoll`, and event loops.

### Storage

WAL, memtables, SSTables, indexing, compaction, and failure recovery.

### Runtimes and Compilers

Executors, async I/O, bytecode, virtual machines, parsing, ASTs, and compilation.

---

## Projects

The roadmap culminates in a series of progressively deeper projects:

| Project                | Technologies |
| ----------------------- | ------------ |
| Arena Allocator         | C++ / Rust   |
| Unix Utilities          | C / POSIX    |
| Data Structures         | C++ / Rust   |
| Concurrent Ring Buffer  | C++ / Rust   |
| Mini Shell              | C / Linux    |
| Async TCP Runtime       | Rust / Linux |
| Memory Profiler         | C++ / Linux  |
| Mini Database           | Rust         |
| Compiler / VM           | C++          |
| Rust/C FFI              | C / Rust     |
| Kernel Module           | C / Rust     |
| Reformulation           | Free-form    |

Each project should prioritize:

**README → design → implementation → tests → benchmarks → results → conclusions**

---

## Tools

Throughout the journey, the goal is to progressively master:

```text
gcc
clang
gdb
strace
perf
valgrind

objdump
readelf
nm
ld

cargo
rustfmt
clippy
```

The tool is not the goal. It is the means to observe what normally stays hidden behind abstractions.

---

## Checkpoints

### 3 months

Solid C and C++, deep understanding of memory and the compilation process.

### 6 months

Data structures, ownership, concurrency, and basic systems programming.

### 9 months

Processes, syscalls, virtual memory, and software that interacts directly with Linux.

### 12 months

Low-level networking and understanding of how an async runtime works.

### 18 months

Complete small systems: profiler, storage engine, VM, and FFI.

### 24 months

Ability to read real systems software, modify it, measure it, explain its decisions, and contribute to existing projects.

---

> I live for your memory, old friend.
