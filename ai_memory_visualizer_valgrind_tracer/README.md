# C - AI Memory Visualizer & Valgrind Tracer

## Description

This project provides a comprehensive exploration of **memory management debugging** using Valgrind, a powerful tool for detecting memory leaks, invalid memory access, and other memory-related errors in C programs. It includes example programs demonstrating common memory issues and detailed analysis reports.

---

## Learning Objectives

- Understand how to use Valgrind to detect memory leaks and errors
- Differentiate between memory leak categories: `definitely lost`, `still reachable`, `indirectly lost`, and `possibly lost`
- Identify and debug NULL pointer dereferences and invalid memory access
- Analyze stack vs. heap memory allocation patterns
- Interpret Valgrind output and error messages
- Understand memory maps and how the operating system allocates memory to processes
- Practice proper memory management: matching every `malloc` with a corresponding `free`

---

## Project Structure

```
.
├── programs/           # Example C programs demonstrating memory issues
│   ├── crash_example.c      # NULL pointer dereference demonstration
│   ├── heap_example.c       # Memory leak on the heap
│   ├── stack_example.c      # Stack memory demonstration
│   ├── aliasing_example.c   # Pointer aliasing examples
│   └── Makefile            # Build script for all examples
├── analysis/          # Detailed Valgrind analysis reports
│   ├── crash_report.md      # Analysis of crash_example
│   ├── valgrind_analysis.md # Comprehensive Valgrind output analysis
│   └── memory_maps.md       # Memory mapping documentation
└── README.md          # This file
```

---

## Files

### Programs
| File | Description |
|---|---|
| `crash_example.c` | Demonstrates NULL pointer dereference causing SIGSEGV |
| `heap_example.c` | Shows memory leaks from incomplete deallocation |
| `stack_example.c` | Illustrates stack frame allocation across recursive calls |
| `aliasing_example.c` | Demonstrates pointer aliasing scenarios |
| `Makefile` | Compilation script for all example programs |

### Analysis Reports
| File | Description |
|---|---|
| `crash_report.md` | Detailed crash analysis and debugging steps |
| `valgrind_analysis.md` | Comprehensive Valgrind output interpretation |
| `memory_maps.md` | Memory layout and address space documentation |

---

## Compilation

```bash
cd programs/
make
```

Or compile individually:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -g <file.c> -o <output>
```

The `-g` flag is crucial for including debug symbols that Valgrind uses to provide line numbers in error reports.

---

## Running Valgrind

### Basic leak check:
```bash
valgrind --leak-check=full ./program_name
```

### Full diagnostic output:
```bash
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./program_name
```

---

## Key Concepts

### Valgrind Leak Categories

- **definitely lost**: Memory allocated but no pointer references remain (true leak)
- **indirectly lost**: Memory referenced only through lost blocks
- **possibly lost**: Pointer exists but may not point to the start of the block
- **still reachable**: Valid pointers exist at program exit (not necessarily a problem)

### Common Memory Errors

1. **Invalid write/read**: Accessing memory outside allocated bounds
2. **Use after free**: Accessing memory after it has been freed
3. **Double free**: Calling `free()` twice on the same pointer
4. **NULL pointer dereference**: Dereferencing a NULL pointer (causes SIGSEGV)

---

## Usage Example

```bash
# Build all examples
cd programs/
make

# Run with Valgrind
valgrind --leak-check=full ./heap_example

# Expected output shows memory leak detection
# ==PID== definitely lost: 6 bytes in 1 blocks
```

---

## Best Practices

- Always compile with `-g` flag for debugging
- Run Valgrind on all programs during development
- Fix "definitely lost" leaks immediately
- Investigate "invalid read/write" errors as they indicate bugs
- Match every `malloc()` with exactly one `free()`
- Initialize pointers and check for NULL before dereferencing
