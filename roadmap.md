# HORUS — Roadmap

**24-month** roadmap for the practical study of low-level systems.

**C → C++ → Rust → Linux → memory → concurrency → networking → storage → runtimes → kernel**

The checkboxes represent progress and can be checked directly from GitHub.

---

# Year 1 — Foundations and Systems

## PHASE 0 — C++ Reset · Weeks 1–3

* [x] Types, references, pointers, and arrays
* [x] Structs, classes, and `const`
* [ ] Stack vs heap
* [ ] RAII
* [ ] Constructors / destructors
* [ ] Copy semantics vs move semantics
* [ ] `std::vector`
* [ ] Smart pointers
* [ ] Templates
* [ ] Iterators
* [ ] Lambdas
* [ ] Compilation
* [ ] Linking
* [ ] Translation units
* [ ] Object files
* [ ] Basic ABI

### Exit criterion

Precisely explain:

```text
source
  ↓
compiler
  ↓
object file
  ↓
linker
  ↓
executable
  ↓
loader
  ↓
process
  ↓
memory
```

---

# PROJECT 1 — Arena Allocator

**C++ · ~2 weeks**

* [ ] `allocate(size)`
* [ ] `reset()`
* [ ] `remaining()`
* [ ] Configurable alignment
* [ ] Sequential allocation without `new` per object
* [ ] Overflow handling
* [ ] Tests
* [ ] Benchmarks against `malloc`
* [ ] Design documentation

### Questions

* [ ] What is alignment?
* [ ] Physical vs virtual memory?
* [ ] What is the cost of `malloc`?
* [ ] What role does RAII play?

---

# PHASE 1 — C · Weeks 4–8

* [ ] Pointers
* [ ] Pointer arithmetic
* [ ] Arrays
* [ ] Structs
* [ ] Unions
* [ ] Function pointers
* [ ] Manual memory management
* [ ] Bitwise operations
* [ ] Files
* [ ] File descriptors
* [ ] Basic POSIX
* [ ] `fork`
* [ ] `exec`
* [ ] `wait`
* [ ] Signals

---

# PROJECT 2 — Unix Utilities

**C · POSIX**

Implement:

* [ ] `cat`
* [ ] `cp`
* [ ] `wc`
* [ ] `grep-lite`
* [ ] `head`
* [ ] `tail`

### Requirements

* [ ] File descriptors
* [ ] Syscalls
* [ ] Buffers
* [ ] Error handling
* [ ] CLI arguments
* [ ] Tests
* [ ] Benchmarks
* [ ] Don't copy existing implementations

---

# PHASE 2 — Rust Fundamentals · Weeks 9–14

* [ ] Ownership
* [ ] Borrowing
* [ ] References
* [ ] Lifetimes
* [ ] Structs
* [ ] Enums
* [ ] `Option`
* [ ] `Result`
* [ ] Traits
* [ ] Generics
* [ ] Iterators
* [ ] Closures
* [ ] Smart pointers
* [ ] Modules
* [ ] Error handling
* [ ] Testing
* [ ] Basic concurrency
* [ ] Cargo
* [ ] `rustfmt`
* [ ] Clippy
* [ ] Rustlings
* [ ] `cargo test`

---

# PROJECT 3 — Arena Allocator in Rust

* [ ] Reimplement the allocator
* [ ] Compare `arena-cpp` vs `arena-rs`
* [ ] Ownership
* [ ] Lifetimes
* [ ] `unsafe`
* [ ] Raw pointers
* [ ] Invariants
* [ ] Comparative benchmarks
* [ ] Documentation

### Central question

> What problems must be solved manually in C++ that Rust makes explicit through its ownership model?

---

# PHASE 3 — Data Structures + Concurrency · Weeks 15–20

Implement:

* [ ] Dynamic vector
* [ ] Linked list
* [ ] Hash map
* [ ] Binary heap
* [ ] BST
* [ ] Simplified B-tree
* [ ] Ring buffer

Structure:

```text
systems-ds/
├── cpp/
├── rust/
├── benchmarks/
└── docs/
```

---

# PROJECT 4 — Concurrent Ring Buffer

**C++ + Rust**

Evolution:

* [ ] Single-threaded
* [ ] Producer / consumer
* [ ] Multi-producer / multi-consumer
* [ ] Mutexes
* [ ] Condition variables
* [ ] Atomics
* [ ] Memory ordering
* [ ] Stress tests
* [ ] Benchmarks
* [ ] Lock-free concepts
* [ ] Cache locality
* [ ] False sharing
* [ ] Data races

### Central question

> What does each atomic operation actually guarantee?

---

# PHASE 4 — Linux + Operating Systems · Months 6–9

* [ ] Processes
* [ ] System calls
* [ ] Virtual memory
* [ ] Address spaces
* [ ] Page tables
* [ ] Threads
* [ ] Locks
* [ ] Scheduling
* [ ] I/O
* [ ] File systems

Master the pipeline:

```text
source
  ↓
compiler
  ↓
object file
  ↓
linker
  ↓
ELF
  ↓
loader
  ↓
process
  ↓
virtual memory
  ↓
syscall
  ↓
kernel
  ↓
hardware
```

### Tools

* [ ] `gdb`
* [ ] `strace`
* [ ] `perf`
* [ ] `valgrind`
* [ ] `objdump`
* [ ] `readelf`
* [ ] `nm`
* [ ] `ld`

---

# PROJECT 5 — Mini Shell

**C + Linux**

* [ ] Command parsing
* [ ] `fork`
* [ ] `exec`
* [ ] Pipes
* [ ] Redirection
* [ ] Environment variables
* [ ] Signals
* [ ] Background processes
* [ ] Basic job control
* [ ] Tests

---

# PHASE 5 — Networking · Months 9–12

* [ ] TCP
* [ ] UDP
* [ ] Sockets
* [ ] DNS
* [ ] HTTP
* [ ] Blocking I/O
* [ ] Non-blocking I/O
* [ ] `epoll`
* [ ] Event loops
* [ ] Concurrency

---

# PROJECT 6 — Async TCP Runtime

**Rust · Linux · without Tokio**

* [ ] TCP listener
* [ ] Non-blocking sockets
* [ ] Event loop with `epoll`
* [ ] Task abstraction
* [ ] Minimal executor
* [ ] Basic channel
* [ ] Benchmarks
* [ ] Documentation

### Central question

> What problem does an async runtime actually solve?

Afterward:

* [ ] Study Tokio
* [ ] Compare both designs

---

# CHECKPOINT — End of Year 1

* [ ] `arena-cpp`
* [ ] `arena-rs`
* [ ] `unix-utils`
* [ ] `systems-ds`
* [ ] `concurrent-ring-buffer`
* [ ] `dxshell`
* [ ] `rust-runtime`

All published with documentation sufficient to explain:

* [ ] What was built
* [ ] Why it was built
* [ ] How it works
* [ ] What errors came up
* [ ] What trade-offs exist
* [ ] How the result was measured

---

# Year 2 — Complete Systems

> The question shifts from **"how does X work?"** to **"what would happen if X worked differently?"**

---

# PROJECT 7 — Memory Profiler

**C++ + Linux**

* [ ] Record allocation / deallocation
* [ ] Record size
* [ ] Record timestamp
* [ ] Record thread
* [ ] Record stack trace
* [ ] Peak memory
* [ ] Leaks
* [ ] Top allocation sites
* [ ] Study `/proc`
* [ ] Stack traces
* [ ] ELF
* [ ] Symbol resolution
* [ ] Dynamic linking

---

# PROJECT 8 — Mini Database

**Rust · LSM-tree**

* [ ] `SET`
* [ ] `GET`
* [ ] `DELETE`
* [ ] WAL
* [ ] Memtable
* [ ] SSTables
* [ ] Indexing
* [ ] Compaction
* [ ] Crash recovery
* [ ] Tests
* [ ] Benchmarks

### Central question

> How does data survive the process dying at the worst possible moment?

---

# PROJECT 9 — Compiler / VM

**C++**

Pipeline:

```text
Lexer
  ↓
Parser
  ↓
AST
  ↓
Semantic Analysis
  ↓
Bytecode
  ↓
VM
```

* [ ] Lexer
* [ ] Parser
* [ ] AST
* [ ] Semantic analysis
* [ ] Bytecode
* [ ] Virtual machine
* [ ] Error reporting
* [ ] Tests

Don't implement LLVM first.

First understand the pipeline through your own implementation; study LLVM afterward.

---

# PROJECT 10 — Rust / C FFI

* [ ] C library
* [ ] `liballocator.so`
* [ ] Rust interface
* [ ] ABI
* [ ] `extern "C"`
* [ ] Ownership across FFI
* [ ] Error boundaries
* [ ] `unsafe`
* [ ] Document safety guarantees
* [ ] Document invariants

### Central question

> Where does Rust's guarantee system end and the programmer's responsibility begin?

---

# PROJECT 11 — Linux Kernel Module

**C / Rust**

Build a small module, not a kernel.

Possible goals:

* [ ] Observability tool
* [ ] Interface at `/sys/kernel/debug/`
* [ ] Interface via `sysfs`
* [ ] Interface via `procfs`

Study:

* [ ] Kernel / user boundary
* [ ] Module lifecycle
* [ ] Kernel memory
* [ ] Synchronization
* [ ] `debugfs`
* [ ] `sysfs`
* [ ] `procfs`
* [ ] Kernel build system

---

# PROJECT 12 — Reformulation

**The most important project in the roadmap.**

Choose a small existing tool and ask:

> **What could I do differently?**

Document:

```text
Why?
  ↓
Hypothesis
  ↓
Design
  ↓
Trade-offs
  ↓
Benchmarks
  ↓
Results
  ↓
What I learned
```

* [ ] Choose a tool
* [ ] Formulate a hypothesis
* [ ] Design an alternative
* [ ] Implement
* [ ] Measure
* [ ] Compare
* [ ] Document results

Don't clone.

Don't rebuild for the sake of rebuilding.

**Reformulate with your own thesis.**

---

# Open Source · From ~month 18

### Level 1

* [ ] Documentation
* [ ] Tests
* [ ] Bug fixes
* [ ] Small optimizations

### Level 2

* [ ] Features
* [ ] Performance improvements
* [ ] Refactors
* [ ] Tooling

### Level 3

* [ ] Subsystems
* [ ] Architectural changes
* [ ] Large projects

---

# General Checkpoints

### 3 months

* [ ] Comfortable with C and C++
* [ ] Deep understanding of memory
* [ ] Understanding of the compilation process

### 6 months

* [ ] Data structures implemented
* [ ] Ownership understood
* [ ] Concurrency understood

### 9 months

* [ ] Processes
* [ ] Virtual memory
* [ ] Syscalls
* [ ] Software that interacts with Linux

### 12 months

* [ ] Low-level networking
* [ ] Async I/O
* [ ] Understanding of async runtimes

### 18 months

* [ ] Memory profiler
* [ ] Storage engine
* [ ] VM / compiler
* [ ] FFI

### 24 months

* [ ] Read real systems software
* [ ] Modify it
* [ ] Measure it
* [ ] Explain design decisions
* [ ] Contribute to existing projects

---

# Final Questions

<details>
<summary>Memory</summary>

* [ ] What happens when memory is allocated?
* [ ] Stack vs heap?
* [ ] What is alignment?
* [ ] What does an allocator do?
* [ ] What is virtual memory?
* [ ] What is a page table?

</details>

<details>
<summary>C / C++</summary>

* [ ] Compilation vs linking?
* [ ] What is an ABI?
* [ ] What does RAII mean?
* [ ] Copy vs move?
* [ ] What produces a dangling pointer?
* [ ] What actually happens with a `shared_ptr`?

</details>

<details>
<summary>Rust</summary>

* [ ] What does ownership guarantee?
* [ ] What does borrowing mean?
* [ ] When is an explicit lifetime necessary?
* [ ] What justifies an `unsafe`?
* [ ] How do you design a safe FFI boundary?
* [ ] What does an abstraction cost?

</details>

<details>
<summary>Linux</summary>

* [ ] What is a process?
* [ ] What is a syscall?
* [ ] How does a program reach kernel space?
* [ ] What happens during `fork` / `exec`?
* [ ] How does virtual memory work?
* [ ] What is an ELF?

</details>

<details>
<summary>Concurrency</summary>

* [ ] What is a data race?
* [ ] What does a mutex guarantee?
* [ ] What does memory ordering mean?
* [ ] What is false sharing?
* [ ] When is lock-free worth it?

</details>

<details>
<summary>Networking</summary>

* [ ] What happens when a socket connects?
* [ ] How does TCP work?
* [ ] Blocking vs non-blocking I/O?
* [ ] What does `epoll` do?
* [ ] What problem does an executor solve?

</details>

<details>
<summary>Storage</summary>

* [ ] What does a WAL guarantee?
* [ ] What is an SSTable?
* [ ] How does compaction work?
* [ ] What happens if the process dies during a write?

</details>

---

# Resources

## C++

* [ ] *A Tour of C++* — Bjarne Stroustrup
* [ ] C++ Core Guidelines
* [ ] cppreference

## C

* [ ] *The C Programming Language* — Kernighan & Ritchie
* [ ] Beej's Guide to C Programming
* [ ] man7.org
* [ ] GCC / binutils documentation

## Rust

* [ ] The Rust Programming Language
* [ ] Rust by Example
* [ ] Rustlings
* [ ] The Rust Reference
* [ ] The Rustonomicon
* [ ] *Rust Atomics and Locks* — Mara Bos

## Operating Systems / Linux

* [ ] Operating Systems: Three Easy Pieces
* [ ] *The Linux Programming Interface* — Michael Kerrisk
* [ ] *Linux Kernel Development* — Robert Love
* [ ] Linux Kernel Documentation
* [ ] *Linux Device Drivers*

## Concurrency

* [ ] *C++ Concurrency in Action* — Anthony Williams
* [ ] *Rust Atomics and Locks* — Mara Bos

## Networking

* [ ] Beej's Guide to Network Programming
* [ ] `epoll(7)` / man7.org

## Storage

* [ ] *Designing Data-Intensive Applications* — Martin Kleppmann

## Compilers / VM

* [ ] *Crafting Interpreters* — Robert Nystrom

---

# Final Portfolio

* [ ] Arena allocator — C++ + Rust
* [ ] Unix utilities / shell — C
* [ ] Concurrent data structures — C++ + Rust
* [ ] Async runtime — Rust
* [ ] Memory profiler — C++ + Linux
* [ ] KV database — Rust
* [ ] VM / compiler — C++
* [ ] Kernel module / systems tool — C / Rust
* [ ] 3–8 significant external contributions

Every major project should include:

```text
README
tests
benchmarks
CI
docs
examples
design notes
changelog
```

---

# Anti-Monster Rules

1. Don't build for the sake of building.
2. If a project stops teaching you something, finish it or abandon it.
3. Killing projects is also progress.
4. Don't chase technologies out of trend.
5. The question comes first; the technology is secondary.
6. Don't build another Linux.
7. Don't sacrifice sleep for a streak.
8. Don't turn personal life into forced productivity.
9. University complements the project; it doesn't compete with it.
10. Understanding something matters more than finishing something.

---

# Mantra

> **I will not build the biggest thing I can.**
> **I will build the smallest thing that forces me to understand something deeply.**

**HORUS — Start small. Go deep.**
