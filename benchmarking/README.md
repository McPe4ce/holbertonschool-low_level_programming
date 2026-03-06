# C - Benchmarking & Performance Analysis

## Description

This project explores **performance measurement** in C using `clock()` and wall-clock timing. It compares algorithmic complexity — O(n²) naive approaches versus O(n) single-pass solutions — and includes a green/energy efficiency analysis of the results.

---

## Learning Objectives

- Measure execution time of C programs using `clock()` and `CLOCKS_PER_SEC`
- Understand algorithmic complexity and its impact on performance
- Compare a naive O(n²) algorithm with an optimized O(n) single-pass solution
- Interpret benchmark metrics (CPU time, iterations per second)
- Analyze and document energy efficiency implications of algorithm choice

---

## Files

| File | Description |
|---|---|
| `instrumentation_lab.c` | Pipeline benchmark with BUILD_DATA, PROCESS, and REDUCE phases |
| `baseline_loop-metrics.md` | Metrics collected from a baseline loop test (10⁸ iterations) |
| `comparison_algorithms-metrics.md` | Naive vs. single-pass algorithm comparison — single-pass is 23,647× faster |
| `green_efficiency_analysis.md` | Full performance and energy efficiency analysis report |

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 instrumentation_lab.c -o instrumentation_lab
```

## Usage

```bash
./instrumentation_lab
```
