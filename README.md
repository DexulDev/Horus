# HORUS

> **No construiré lo más grande que pueda.**
> **Construiré lo más pequeño que me obligue a entender algo profundamente.**

Roadmap personal de **24 meses** en sistemas de bajo nivel:
**C → C++ → Rust → Linux → memoria → concurrencia → networking → storage → runtimes → kernel**

Usa los checkboxes para marcar progreso directamente en GitHub (`- [x]`).

---

## 📚 Recursos y libros (por área)

> Nota: son los recursos estándar de la comunidad de sistemas/Rust/C++. No tengo acceso a búsqueda en vivo, verifica tú los enlaces por si alguno cambió.

### C++
- [ ] *A Tour of C++* — Bjarne Stroustrup
- [ ] [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines) (referencia, no lineal)
- [ ] [cppreference.com](https://en.cppreference.com/) (referencia diaria)

### C
- [ ] *The C Programming Language* — Kernighan & Ritchie (K&R)
- [ ] [Beej's Guide to C Programming](https://beej.us/guide/bgc/)
- [ ] [man7.org](https://man7.org/linux/man-pages/) (man pages de Linux)
- [ ] Documentación de GCC / binutils

### Rust
- [ ] [The Rust Programming Language](https://doc.rust-lang.org/book/) (libro oficial, gratis)
- [ ] [Rust by Example](https://doc.rust-lang.org/rust-by-example/)
- [ ] [Rustlings](https://github.com/rust-lang/rustlings) (ejercicios)
- [ ] [The Rust Reference](https://doc.rust-lang.org/reference/)
- [ ] [The Rustonomicon](https://doc.rust-lang.org/nomicon/) (unsafe Rust)
- [ ] [Rust Atomics and Locks](https://marabos.nl/atomics/) — Mara Bos (gratis online)

### Sistemas operativos / Linux
- [ ] [Operating Systems: Three Easy Pieces (OSTEP)](https://pages.cs.wisc.edu/~remzi/OSTEP/) (gratis, columna vertebral)
- [ ] *The Linux Programming Interface* — Michael Kerrisk
- [ ] *Linux Kernel Development* — Robert Love
- [ ] [The Linux Kernel documentation](https://www.kernel.org/doc/html/latest/)
- [ ] *Linux Device Drivers* (LDD3, gratis online)

### Concurrencia
- [ ] *C++ Concurrency in Action* — Anthony Williams
- [ ] [Rust Atomics and Locks](https://marabos.nl/atomics/) (aplica también aquí)

### Networking
- [ ] [Beej's Guide to Network Programming](https://beej.us/guide/bgnet/) (gratis)
- [ ] Documentación de `epoll(7)` en man7.org

### Storage / bases de datos
- [ ] *Designing Data-Intensive Applications* — Martin Kleppmann

### Compiladores / VM
- [ ] [Crafting Interpreters](https://craftinginterpreters.com/) — Robert Nystrom (gratis online)

### Herramientas a dominar
- [ ] gdb
- [ ] strace
- [ ] perf
- [ ] valgrind
- [ ] objdump / readelf / nm / ld
- [ ] gcc / clang
- [ ] cargo / rustfmt / clippy

---

## 0. Principios

**Regla principal:** 1 hora diaria sostenible > 6 horas un domingo y desaparecer dos semanas.

- Normal: ~6 h/semana
- Con energía: 8–10 h/semana
- Semana difícil: 20 min cuentan

Horus no compite con universidad, trabajo, descanso, pareja o vida — existe para construir la carrera que quiero sin destruir la vida que quiero tener.

**No es:** bootcamp, colección de tutoriales, carrera de velocidad, competencia de GitHub, un intento de reconstruir Linux, una demostración de inteligencia.

**Sí es:** preguntas técnicas, experimentación, código, debugging, benchmarks, lectura de código real, documentación, contribuciones, profundidad.

---

## 1. Sistema diario

**Sesión normal (60 min):** 10 min teoría → 40 min código → 10 min journal.

Formato de journal:

```text
## YYYY-MM-DD
Tiempo: XX min
### Aprendí
-
### Construí
-
### No entendí
-
### Bug / descubrimiento
-
### Próximo paso
-
```

- Día con energía → 90–120 min si quieres, sin obligación.
- Día horrible → 20 min mínimo (leer, un ejercicio, un bug, un test). Un día malo no rompe la cadena.

**Ritmo semanal:** L–V sesiones de 60 min. Fin de semana, sesión larga opcional. Una vez por semana, revisión de 30–45 min sin programar (¿qué aprendí? ¿qué sigo sin entender? ¿el proyecto sigue enseñándome algo?).

---

## 2. Estructura del repositorio

```text
Horus/
├── README.md
├── roadmap.md
├── journal/
│   ├── 2026/
│   ├── 2027/
│   └── 2028/
├── notes/
│   ├── cpp/ c/ rust/ linux/ memory/
│   ├── concurrency/ networking/ storage/ compilers/
├── projects/
└── resources/
```

---

## 3. ROADMAP — AÑO 1

### FASE 0 — Reset de C++ (semanas 1–3)

- [ ] Tipos, referencias, punteros, arrays
- [ ] Structs/classes, const
- [ ] Stack vs heap
- [ ] RAII, constructors/destructors
- [ ] Copy semantics vs move semantics
- [ ] `std::vector`, smart pointers
- [ ] Templates, iterators, lambdas
- [ ] Compilation → linking → translation units → object files
- [ ] ABI básica
- [ ] **Criterio de salida:** explicar `source → compiler → object file → linker → executable → loader → process → memory`

### PROYECTO 1 — Arena Allocator (C++, ~2 semanas)

- [ ] `allocate(size)`, `reset()`, `remaining()`, alignment configurable
- [ ] Asignación secuencial sin `new` por objeto
- [ ] Manejo de overflow
- [ ] Tests + benchmarks vs `malloc`
- [ ] Documentación de diseño
- [ ] Responder: ¿qué es alignment? ¿memoria física vs virtual? ¿coste de malloc? ¿qué hace RAII aquí?

### FASE 1 — C (semanas 4–8)

- [ ] Pointers y pointer arithmetic
- [ ] Arrays, structs, unions
- [ ] Function pointers
- [ ] Manual memory management
- [ ] Bitwise operations
- [ ] Files y file descriptors
- [ ] POSIX básico
- [ ] Processes: fork / exec / wait / signals

### PROYECTO 2 — Unix Utils (C)

- [ ] `cat`, `cp`, `wc`, `grep-lite`, `head`, `tail` en un solo repo
- [ ] File descriptors, syscalls, buffers, manejo de errores
- [ ] Argumentos CLI + tests + benchmarks
- [ ] Regla: no copiar implementaciones existentes

### FASE 2 — Rust Fundamentals (semanas 9–14)

- [ ] Ownership, borrowing, references, lifetimes
- [ ] Structs, enums, `Option`, `Result`
- [ ] Traits, generics, iterators, closures
- [ ] Smart pointers, modules
- [ ] Error handling, testing
- [ ] Concurrency básica
- [ ] Cargo, rustfmt, clippy, Rustlings, `cargo test`

### PROYECTO 3 — Arena Allocator en Rust

- [ ] Reimplementar el allocator (`arena-cpp/` vs `arena-rs/`)
- [ ] Ownership, lifetimes, `unsafe`, raw pointers, invariants
- [ ] Benchmarks comparativos
- [ ] Responder: ¿qué problemas resolvía manualmente en C++ que Rust hace explícitos?

### FASE 3 — Data Structures + Concurrency (semanas 15–20)

- [ ] Dynamic vector, linked list, hash map
- [ ] Binary heap, BST, B-tree simplificado, ring buffer
- [ ] Repo único: `systems-ds/{cpp,rust,benchmarks,docs}`

### PROYECTO 4 — Concurrent Ring Buffer (C++ + Rust)

- [ ] Single-threaded → producer/consumer → multi-producer/multi-consumer
- [ ] Benchmarks + stress tests
- [ ] Atomics, memory ordering, mutexes, condition variables
- [ ] Lock-free concepts, cache locality, false sharing, data races
- [ ] Responder: ¿qué garantiza realmente cada operación atómica?

### FASE 4 — Linux + Operating Systems (meses 6–9)

- [ ] Processes, system calls, virtual memory, address spaces
- [ ] Page tables, threads, locks, scheduling
- [ ] I/O y file systems
- [ ] Dominar pipeline: `source → compiler → object file → linker → ELF → loader → process → virtual memory → syscall → kernel → hardware`
- [ ] Dominar gdb, strace, perf, valgrind, objdump, readelf, nm, ld

### PROYECTO 5 — Mini Shell (C)

- [ ] Command parsing, fork/exec, pipes, redirection
- [ ] Environment variables, signals
- [ ] Background processes, job control básico
- [ ] Tests

### FASE 5 — Networking (meses 9–12)

- [ ] TCP, UDP, sockets, DNS, HTTP
- [ ] Blocking vs non-blocking I/O
- [ ] epoll, event loops, concurrency

### PROYECTO 6 — Async TCP Runtime (Rust, sin Tokio)

- [ ] TCP listener + non-blocking sockets
- [ ] Event loop con epoll
- [ ] Task abstraction + executor mínimo + channel básico
- [ ] Benchmarks + documentación
- [ ] Responder: ¿qué problema resuelve realmente un async runtime?
- [ ] Después: estudiar Tokio y comparar diseños

### ✅ CHECKPOINT — Fin del Año 1

- [ ] `arena-cpp`, `arena-rs`, `unix-utils`, `systems-ds`, `concurrent-ring-buffer`, `dxshell`, `rust-runtime` publicados
- [ ] Puedo explicar qué construí, por qué, cómo funciona, qué errores cometí, qué trade-offs existen, cómo medí el resultado

---

## 4. ROADMAP — AÑO 2

*(cambia la pregunta: de "¿cómo funciona X?" a "¿qué pasaría si X funcionara distinto?")*

### PROYECTO 7 — Memory Profiler (C++ + Linux)

- [ ] Registrar allocation/deallocation, size, timestamp, thread, stack trace
- [ ] Producir estadísticas (peak memory, leaks, top allocation sites)
- [ ] Estudiar `/proc`, stack traces, ELF, symbol resolution, dynamic linking

### PROYECTO 8 — Mini Database (Rust, LSM-tree)

- [ ] API `SET` / `GET` / `DELETE`
- [ ] WAL, memtable, SSTables, indexing, compaction, crash recovery
- [ ] Tests + benchmarks
- [ ] Responder: ¿cómo sobreviven los datos a que el proceso muera en el peor momento?

### PROYECTO 9 — Compiler / VM (C++)

- [ ] Lexer → parser → AST → semantic analysis → bytecode → VM
- [ ] Error reporting + tests
- [ ] No implementar LLVM primero — entender el pipeline propio, luego estudiar LLVM

### PROYECTO 10 — Rust/C FFI

- [ ] Biblioteca C (`liballocator.so`) + interfaz Rust
- [ ] ABI, `extern "C"`, ownership across FFI, error boundaries, `unsafe`
- [ ] Documentar explícitamente guarantees (SAFE) vs invariants (UNSAFE)
- [ ] Responder: ¿dónde termina el sistema de garantías de Rust y empieza mi responsabilidad?

### PROYECTO 11 — Linux Kernel Module (C / Rust)

- [ ] Construir un módulo, no un kernel (ej. herramienta en `/sys/kernel/debug/` o de observabilidad)
- [ ] Kernel/user boundary, module lifecycle, kernel memory, synchronization
- [ ] debugfs, sysfs, procfs, kernel build system

### PROYECTO 12 — Reformulación (el más importante)

- [ ] Elegir una herramienta pequeña existente y preguntar "¿qué podría hacer diferente?"
- [ ] README con: Why? → Hypothesis → Design → Trade-offs → Benchmarks → Results → What I learned
- [ ] No clonar, no reconstruir: reformular con tesis propia

### Contribuciones open source (desde ~mes 18)

- [ ] Nivel 1: documentación, tests, bug fixes, optimizaciones pequeñas
- [ ] Nivel 2: features, performance improvements, refactors, tooling
- [ ] Nivel 3: subsistemas, cambios arquitectónicos, proyectos grandes

### ✅ Portafolio final (GitHub)

- [ ] Arena allocator (C++ + Rust)
- [ ] Unix utilities / shell (C)
- [ ] Concurrent data structures (C++ + Rust)
- [ ] Async runtime (Rust)
- [ ] Memory profiler (C++ + Linux)
- [ ] KV database (Rust)
- [ ] VM / compiler (C++)
- [ ] Kernel module / systems tool (C / Rust)
- [ ] 3–8 contribuciones externas significativas
- [ ] Cada proyecto importante tiene: README, tests, benchmarks, CI, docs, examples, design notes, changelog

---

## 5. Checkpoints de progreso

- [ ] **3 meses** — cómodo en C/C++, entiendo memoria a fondo
- [ ] **6 meses** — implemento estructuras de datos, hablo con propiedad de ownership y concurrencia
- [ ] **9 meses** — entiendo procesos, memoria virtual, syscalls; construyo software que interactúa con Linux
- [ ] **12 meses** — construyo networking de bajo nivel, explico qué hace un runtime async
- [ ] **18 meses** — construyo sistemas completos pequeños: profiler, storage engine, VM, FFI
- [ ] **24 meses** — leo software de sistemas real, lo modifico, lo mido, explico mis decisiones y contribuyo a proyectos existentes

---

## 6. Preguntas que debo poder responder al final

<details>
<summary>Memoria</summary>

- ¿Qué ocurre cuando asigno memoria?
- ¿Stack vs heap?
- ¿Qué es alignment?
- ¿Qué hace un allocator?
- ¿Qué es virtual memory / page table?
</details>

<details>
<summary>C / C++</summary>

- ¿Compilation vs linking?
- ¿Qué es una ABI?
- ¿Qué significa RAII?
- ¿Copy vs move?
- ¿Qué produce un dangling pointer?
- ¿Qué ocurre realmente con un `shared_ptr`?
</details>

<details>
<summary>Rust</summary>

- ¿Qué garantiza ownership?
- ¿Qué significa borrowing?
- ¿Cuándo necesito un lifetime explícito?
- ¿Qué justifica un `unsafe`?
- ¿Cómo diseñar una frontera FFI segura?
- ¿Qué coste tiene una abstracción?
</details>

<details>
<summary>Linux</summary>

- ¿Qué es un process / syscall?
- ¿Cómo llega un programa a kernel space?
- ¿Qué ocurre durante fork / exec?
- ¿Cómo funciona virtual memory?
- ¿Qué es un ELF?
</details>

<details>
<summary>Concurrencia</summary>

- ¿Qué es una data race?
- ¿Qué garantiza un mutex?
- ¿Qué significa memory ordering?
- ¿Qué es false sharing?
- ¿Cuándo vale la pena lock-free?
</details>

<details>
<summary>Networking</summary>

- ¿Qué ocurre al conectar un socket?
- ¿Cómo funciona TCP?
- ¿Blocking vs non-blocking I/O?
- ¿Qué hace epoll?
- ¿Qué problema resuelve un executor?
</details>

<details>
<summary>Storage</summary>

- ¿Qué garantiza un WAL?
- ¿Qué es una SSTable?
- ¿Cómo funciona compaction?
- ¿Qué pasa si el proceso muere durante una escritura?
</details>

---

## 7. Reglas anti-monstruo

1. No construir por construir — si un proyecto deja de enseñar, se termina o se abandona.
2. Matar proyectos también es progreso.
3. No perseguir tecnologías por moda — la pregunta es primaria, la tecnología es secundaria.
4. No construir otro Linux — si cabe en un módulo o experimento pequeño, hacer eso.
5. No sacrificar sueño por una streak.
6. No convertir la vida personal en productividad forzada.
7. La universidad complementa a Horus, no compite con él.

---

## 8. Mantra

No construir lo más grande que pueda.
Construir lo más pequeño que me obligue a entender algo profundamente.

**HORUS** — *Start small. Go deep.*
