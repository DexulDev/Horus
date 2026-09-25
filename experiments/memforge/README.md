# MemForge

> Experimental, for learning purposes only.

A toy process and resource management simulator written in C++, built to practice OOP design and basic memory allocator concepts.

## What it is

MemForge simulates, in a simplified way, how an OS manages processes and hardware resources: a Kernel creates and schedules processes, requests resources from a simulated Hardware, and suspends lower-priority processes under memory pressure. Interaction happens through a simple CLI.

**Status: work in progress.** Nothing here is finished — see `TODO.md` for current progress.

## Structure

```text
memforge/
├── include/     # headers
├── src/         # implementation
└── build/       # build output (generated, not committed)
```

## Principle

Don't abstract for the sake of abstraction. A class exists because it represents a real entity or responsibility; a feature exists because it meaningfully changes the simulation.
