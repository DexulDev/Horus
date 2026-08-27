# Horus

> **No construiré lo más grande que pueda.**
> **Construiré lo más pequeño que me obligue a entender algo profundamente.**

**HORUS** es un roadmap de 24 meses dedicado al estudio práctico de **sistemas de bajo nivel**.

El recorrido abarca:

**C → C++ → Rust → Linux → memoria → concurrencia → networking → storage → runtimes → kernel**

No busca acumular tecnologías ni producir proyectos artificialmente grandes. El objetivo es comprender cómo funcionan los sistemas construyendo, midiendo, rompiendo y depurando implementaciones pequeñas.

---

## Filosofía

> *Start small. Go deep.*

HORUS no es un bootcamp, una colección de tutoriales ni una carrera por completar tecnologías.

Es un proceso de aprendizaje basado en:

* Preguntas técnicas
* Experimentación
* Código
* Debugging
* Benchmarks
* Lectura de código real
* Documentación
* Diseño y análisis de trade-offs
* Contribuciones open source

La escala de cada proyecto debe estar determinada por **lo que permite aprender**, no por lo impresionante que resulte.

Una implementación pequeña que obliga a comprender memoria, concurrencia o el funcionamiento del kernel vale más que un proyecto enorme construido siguiendo abstracciones que no se entienden.

---

## Principio de trabajo

**1 hora diaria sostenible > 6 horas un domingo y desaparecer dos semanas.**

El ritmo recomendado es:

* **Normal:** ~6 h/semana
* **Con energía:** 8–10 h/semana
* **Semana difícil:** 20 minutos cuentan

HORUS debe coexistir con universidad, trabajo, descanso y vida personal.

No existe una obligación de mantener una streak ni de completar todo el roadmap. **Abandonar un proyecto que dejó de enseñar algo también es progreso.**

---

## Sistema de aprendizaje

Una sesión normal de 60 minutos:

```text
10 min — teoría
40 min — código / experimentación
10 min — journal
```

El journal sigue este formato:

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

Cada semana se realiza una revisión de 30–45 minutos para evaluar:

* Qué se aprendió realmente.
* Qué conceptos siguen sin comprenderse.
* Qué errores fueron importantes.
* Si el proyecto continúa siendo útil.
* Qué debería estudiarse después.

---

## Estructura

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
├── projects/
└── resources/
```

### `README.md`

Descripción general del proyecto, filosofía y estructura.

### `roadmap.md`

Plan completo de estudio, proyectos, checkpoints y preguntas técnicas.

### `journal/`

Registro cronológico del aprendizaje y los experimentos.

### `notes/`

Apuntes técnicos organizados por área.

### `projects/`

Implementaciones desarrolladas durante el recorrido.

### `resources/`

Libros, documentación y referencias utilizadas.

---

## Áreas

### C / C++

Memoria manual, punteros, RAII, ABI, compilación, linking, estructuras de datos y concurrencia.

### Rust

Ownership, borrowing, lifetimes, `unsafe`, concurrencia, FFI y diseño de abstracciones seguras.

### Linux

Procesos, syscalls, memoria virtual, ELF, I/O, file systems, `/proc`, kernel space y herramientas de debugging.

### Concurrencia

Threads, atomics, memory ordering, mutexes, lock-free programming, cache locality y false sharing.

### Networking

Sockets, TCP, UDP, DNS, HTTP, non-blocking I/O, `epoll` y event loops.

### Storage

WAL, memtables, SSTables, indexing, compaction y recuperación ante fallos.

### Runtimes y compiladores

Executors, async I/O, bytecode, máquinas virtuales, parsing, ASTs y compilación.

---

## Proyectos

El roadmap culmina en una serie de proyectos progresivamente más profundos:

| Proyecto               | Tecnologías  |
| ---------------------- | ------------ |
| Arena Allocator        | C++ / Rust   |
| Unix Utilities         | C / POSIX    |
| Data Structures        | C++ / Rust   |
| Concurrent Ring Buffer | C++ / Rust   |
| Mini Shell             | C / Linux    |
| Async TCP Runtime      | Rust / Linux |
| Memory Profiler        | C++ / Linux  |
| Mini Database          | Rust         |
| Compiler / VM          | C++          |
| Rust/C FFI             | C / Rust     |
| Kernel Module          | C / Rust     |
| Reformulación          | Libre        |

Cada proyecto debe priorizar:

**README → diseño → implementación → tests → benchmarks → resultados → conclusiones**

---

## Herramientas

Durante el recorrido se busca dominar progresivamente:

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

La herramienta no es el objetivo. Es el medio para observar aquello que normalmente permanece oculto detrás de las abstracciones.

---

## Checkpoints

### 3 meses

C y C++ sólidos, comprensión profunda de memoria y del proceso de compilación.

### 6 meses

Estructuras de datos, ownership, concurrencia y programación de sistemas básica.

### 9 meses

Procesos, syscalls, memoria virtual y software que interactúa directamente con Linux.

### 12 meses

Networking de bajo nivel y comprensión del funcionamiento de un async runtime.

### 18 meses

Sistemas completos pequeños: profiler, storage engine, VM y FFI.


### 24 meses

Capacidad para leer software de sistemas real, modificarlo, medirlo, explicar sus decisiones y contribuir a proyectos existentes.

---

> Vivo por tu memoria, viejo amigo.
