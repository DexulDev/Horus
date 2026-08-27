# HORUS — Roadmap

Roadmap de **24 meses** para el estudio práctico de sistemas de bajo nivel.

**C → C++ → Rust → Linux → memoria → concurrencia → networking → storage → runtimes → kernel**

Los checkboxes representan progreso y pueden marcarse directamente desde GitHub.

---

# Año 1 — Fundamentos y sistemas

## FASE 0 — Reset de C++ · Semanas 1–3

* [ ] Tipos, referencias, punteros y arrays
* [ ] Structs, classes y `const`
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
* [ ] ABI básica

### Criterio de salida

Explicar de forma precisa:

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

# PROYECTO 1 — Arena Allocator

**C++ · ~2 semanas**

* [ ] `allocate(size)`
* [ ] `reset()`
* [ ] `remaining()`
* [ ] Alignment configurable
* [ ] Asignación secuencial sin `new` por objeto
* [ ] Manejo de overflow
* [ ] Tests
* [ ] Benchmarks contra `malloc`
* [ ] Documentación del diseño

### Preguntas

* [ ] ¿Qué es alignment?
* [ ] ¿Memoria física vs virtual?
* [ ] ¿Cuál es el coste de `malloc`?
* [ ] ¿Qué papel tiene RAII?

---

# FASE 1 — C · Semanas 4–8

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
* [ ] POSIX básico
* [ ] `fork`
* [ ] `exec`
* [ ] `wait`
* [ ] Signals

---

# PROYECTO 2 — Unix Utilities

**C · POSIX**

Implementar:

* [ ] `cat`
* [ ] `cp`
* [ ] `wc`
* [ ] `grep-lite`
* [ ] `head`
* [ ] `tail`

### Requisitos

* [ ] File descriptors
* [ ] Syscalls
* [ ] Buffers
* [ ] Manejo de errores
* [ ] Argumentos CLI
* [ ] Tests
* [ ] Benchmarks
* [ ] No copiar implementaciones existentes

---

# FASE 2 — Rust Fundamentals · Semanas 9–14

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
* [ ] Concurrency básica
* [ ] Cargo
* [ ] `rustfmt`
* [ ] Clippy
* [ ] Rustlings
* [ ] `cargo test`

---

# PROYECTO 3 — Arena Allocator en Rust

* [ ] Reimplementar el allocator
* [ ] Comparar `arena-cpp` vs `arena-rs`
* [ ] Ownership
* [ ] Lifetimes
* [ ] `unsafe`
* [ ] Raw pointers
* [ ] Invariants
* [ ] Benchmarks comparativos
* [ ] Documentación

### Pregunta central

> ¿Qué problemas deben resolverse manualmente en C++ que Rust hace explícitos mediante su modelo de ownership?

---

# FASE 3 — Data Structures + Concurrency · Semanas 15–20

Implementar:

* [ ] Dynamic vector
* [ ] Linked list
* [ ] Hash map
* [ ] Binary heap
* [ ] BST
* [ ] B-tree simplificado
* [ ] Ring buffer

Estructura:

```text
systems-ds/
├── cpp/
├── rust/
├── benchmarks/
└── docs/
```

---

# PROYECTO 4 — Concurrent Ring Buffer

**C++ + Rust**

Evolución:

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

### Pregunta central

> ¿Qué garantiza realmente cada operación atómica?

---

# FASE 4 — Linux + Operating Systems · Meses 6–9

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

Dominar el pipeline:

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

### Herramientas

* [ ] `gdb`
* [ ] `strace`
* [ ] `perf`
* [ ] `valgrind`
* [ ] `objdump`
* [ ] `readelf`
* [ ] `nm`
* [ ] `ld`

---

# PROYECTO 5 — Mini Shell

**C + Linux**

* [ ] Command parsing
* [ ] `fork`
* [ ] `exec`
* [ ] Pipes
* [ ] Redirection
* [ ] Environment variables
* [ ] Signals
* [ ] Background processes
* [ ] Job control básico
* [ ] Tests

---

# FASE 5 — Networking · Meses 9–12

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

# PROYECTO 6 — Async TCP Runtime

**Rust · Linux · sin Tokio**

* [ ] TCP listener
* [ ] Non-blocking sockets
* [ ] Event loop con `epoll`
* [ ] Task abstraction
* [ ] Executor mínimo
* [ ] Channel básico
* [ ] Benchmarks
* [ ] Documentación

### Pregunta central

> ¿Qué problema resuelve realmente un async runtime?

Después:

* [ ] Estudiar Tokio
* [ ] Comparar ambos diseños

---

# CHECKPOINT — Fin del Año 1

* [ ] `arena-cpp`
* [ ] `arena-rs`
* [ ] `unix-utils`
* [ ] `systems-ds`
* [ ] `concurrent-ring-buffer`
* [ ] `dxshell`
* [ ] `rust-runtime`

Todos publicados con documentación suficiente para explicar:

* [ ] Qué se construyó
* [ ] Por qué se construyó
* [ ] Cómo funciona
* [ ] Qué errores aparecieron
* [ ] Qué trade-offs existen
* [ ] Cómo se midió el resultado

---

# Año 2 — Sistemas completos

> La pregunta cambia de **«¿cómo funciona X?»** a **«¿qué pasaría si X funcionara de otra manera?»**

---

# PROYECTO 7 — Memory Profiler

**C++ + Linux**

* [ ] Registrar allocation / deallocation
* [ ] Registrar tamaño
* [ ] Registrar timestamp
* [ ] Registrar thread
* [ ] Registrar stack trace
* [ ] Peak memory
* [ ] Leaks
* [ ] Top allocation sites
* [ ] Estudiar `/proc`
* [ ] Stack traces
* [ ] ELF
* [ ] Symbol resolution
* [ ] Dynamic linking

---

# PROYECTO 8 — Mini Database

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

### Pregunta central

> ¿Cómo sobreviven los datos a que el proceso muera en el peor momento?

---

# PROYECTO 9 — Compiler / VM

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

No implementar LLVM primero.

Primero comprender el pipeline mediante una implementación propia; después estudiar LLVM.

---

# PROYECTO 10 — Rust / C FFI

* [ ] Biblioteca C
* [ ] `liballocator.so`
* [ ] Interfaz Rust
* [ ] ABI
* [ ] `extern "C"`
* [ ] Ownership a través de FFI
* [ ] Error boundaries
* [ ] `unsafe`
* [ ] Documentar garantías de seguridad
* [ ] Documentar invariants

### Pregunta central

> ¿Dónde termina el sistema de garantías de Rust y comienza la responsabilidad del programador?

---

# PROYECTO 11 — Linux Kernel Module

**C / Rust**

Construir un módulo pequeño, no un kernel.

Posibles objetivos:

* [ ] Herramienta de observabilidad
* [ ] Interfaz en `/sys/kernel/debug/`
* [ ] Interfaz mediante `sysfs`
* [ ] Interfaz mediante `procfs`

Estudiar:

* [ ] Kernel / user boundary
* [ ] Module lifecycle
* [ ] Kernel memory
* [ ] Synchronization
* [ ] `debugfs`
* [ ] `sysfs`
* [ ] `procfs`
* [ ] Kernel build system

---

# PROYECTO 12 — Reformulación

**El proyecto más importante del roadmap.**

Elegir una herramienta pequeña existente y formular:

> **¿Qué podría hacer diferente?**

Documentar:

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

* [ ] Elegir herramienta
* [ ] Formular hipótesis
* [ ] Diseñar alternativa
* [ ] Implementar
* [ ] Medir
* [ ] Comparar
* [ ] Documentar resultados

No clonar.

No reconstruir por reconstruir.

**Reformular con una tesis propia.**

---

# Open Source · Desde ~mes 18

### Nivel 1

* [ ] Documentación
* [ ] Tests
* [ ] Bug fixes
* [ ] Optimizaciones pequeñas

### Nivel 2

* [ ] Features
* [ ] Performance improvements
* [ ] Refactors
* [ ] Tooling

### Nivel 3

* [ ] Subsistemas
* [ ] Cambios arquitectónicos
* [ ] Proyectos grandes

---

# Checkpoints generales

### 3 meses

* [ ] C y C++ cómodos
* [ ] Comprensión profunda de memoria
* [ ] Comprensión del proceso de compilación

### 6 meses

* [ ] Estructuras de datos implementadas
* [ ] Ownership comprendido
* [ ] Concurrencia comprendida

### 9 meses

* [ ] Procesos
* [ ] Memoria virtual
* [ ] Syscalls
* [ ] Software que interactúa con Linux

### 12 meses

* [ ] Networking de bajo nivel
* [ ] Async I/O
* [ ] Comprensión de runtimes async

### 18 meses

* [ ] Memory profiler
* [ ] Storage engine
* [ ] VM / compiler
* [ ] FFI

### 24 meses

* [ ] Leer software de sistemas real
* [ ] Modificarlo
* [ ] Medirlo
* [ ] Explicar decisiones de diseño
* [ ] Contribuir a proyectos existentes

---

# Preguntas finales

<details>
<summary>Memoria</summary>

* [ ] ¿Qué ocurre cuando se asigna memoria?
* [ ] ¿Stack vs heap?
* [ ] ¿Qué es alignment?
* [ ] ¿Qué hace un allocator?
* [ ] ¿Qué es virtual memory?
* [ ] ¿Qué es una page table?

</details>

<details>
<summary>C / C++</summary>

* [ ] ¿Compilation vs linking?
* [ ] ¿Qué es una ABI?
* [ ] ¿Qué significa RAII?
* [ ] ¿Copy vs move?
* [ ] ¿Qué produce un dangling pointer?
* [ ] ¿Qué ocurre realmente con un `shared_ptr`?

</details>

<details>
<summary>Rust</summary>

* [ ] ¿Qué garantiza ownership?
* [ ] ¿Qué significa borrowing?
* [ ] ¿Cuándo es necesario un lifetime explícito?
* [ ] ¿Qué justifica un `unsafe`?
* [ ] ¿Cómo diseñar una frontera FFI segura?
* [ ] ¿Qué coste tiene una abstracción?

</details>

<details>
<summary>Linux</summary>

* [ ] ¿Qué es un process?
* [ ] ¿Qué es una syscall?
* [ ] ¿Cómo llega un programa a kernel space?
* [ ] ¿Qué ocurre durante `fork` / `exec`?
* [ ] ¿Cómo funciona virtual memory?
* [ ] ¿Qué es un ELF?

</details>

<details>
<summary>Concurrencia</summary>

* [ ] ¿Qué es una data race?
* [ ] ¿Qué garantiza un mutex?
* [ ] ¿Qué significa memory ordering?
* [ ] ¿Qué es false sharing?
* [ ] ¿Cuándo vale la pena lock-free?

</details>

<details>
<summary>Networking</summary>

* [ ] ¿Qué ocurre al conectar un socket?
* [ ] ¿Cómo funciona TCP?
* [ ] ¿Blocking vs non-blocking I/O?
* [ ] ¿Qué hace `epoll`?
* [ ] ¿Qué problema resuelve un executor?

</details>

<details>
<summary>Storage</summary>

* [ ] ¿Qué garantiza un WAL?
* [ ] ¿Qué es una SSTable?
* [ ] ¿Cómo funciona compaction?
* [ ] ¿Qué ocurre si el proceso muere durante una escritura?

</details>

---

# Recursos

## C++

* [ ] *A Tour of C++* — Bjarne Stroustrup
* [ ] C++ Core Guidelines
* [ ] cppreference

## C

* [ ] *The C Programming Language* — Kernighan & Ritchie
* [ ] Beej's Guide to C Programming
* [ ] man7.org
* [ ] Documentación de GCC / binutils

## Rust

* [ ] The Rust Programming Language
* [ ] Rust by Example
* [ ] Rustlings
* [ ] The Rust Reference
* [ ] The Rustonomicon
* [ ] *Rust Atomics and Locks* — Mara Bos

## Sistemas operativos / Linux

* [ ] Operating Systems: Three Easy Pieces
* [ ] *The Linux Programming Interface* — Michael Kerrisk
* [ ] *Linux Kernel Development* — Robert Love
* [ ] Linux Kernel Documentation
* [ ] *Linux Device Drivers*

## Concurrencia

* [ ] *C++ Concurrency in Action* — Anthony Williams
* [ ] *Rust Atomics and Locks* — Mara Bos

## Networking

* [ ] Beej's Guide to Network Programming
* [ ] `epoll(7)` / man7.org

## Storage

* [ ] *Designing Data-Intensive Applications* — Martin Kleppmann

## Compiladores / VM

* [ ] *Crafting Interpreters* — Robert Nystrom

---

# Portafolio final

* [ ] Arena allocator — C++ + Rust
* [ ] Unix utilities / shell — C
* [ ] Concurrent data structures — C++ + Rust
* [ ] Async runtime — Rust
* [ ] Memory profiler — C++ + Linux
* [ ] KV database — Rust
* [ ] VM / compiler — C++
* [ ] Kernel module / systems tool — C / Rust
* [ ] 3–8 contribuciones externas significativas

Cada proyecto importante debería incluir:

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

# Reglas anti-monstruo

1. No construir por construir.
2. Si un proyecto deja de enseñar, se termina o se abandona.
3. Matar proyectos también es progreso.
4. No perseguir tecnologías por moda.
5. La pregunta es primaria; la tecnología es secundaria.
6. No construir otro Linux.
7. No sacrificar sueño por una streak.
8. No convertir la vida personal en productividad forzada.
9. La universidad complementa el proyecto; no compite con él.
10. Comprender algo importa más que terminar algo.

---

# Mantra

> **No construiré lo más grande que pueda.**
> **Construiré lo más pequeño que me obligue a entender algo profundamente.**

**HORUS — Start small. Go deep.**

