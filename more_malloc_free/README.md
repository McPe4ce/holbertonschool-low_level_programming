# C - More malloc, free

## Description

This project builds upon dynamic memory allocation concepts by implementing more advanced memory management functions. It covers `malloc` error handling with exit codes, partial string concatenation, memory initialization with `calloc`, and creating integer arrays with specified ranges.

---

## Learning Objectives

- Implement safer memory allocation with automatic error handling
- Use `exit()` to terminate a program with specific status codes
- Concatenate strings with byte limits
- Understand and reimplement `calloc` (initialized memory allocation)
- Allocate and initialize arrays with custom ranges
- Validate memory allocation success and handle edge cases

---

## Files

| File | Description |
|---|---|
| `0-malloc_checked.c` | Allocates memory using `malloc` and exits with status 98 on failure |
| `1-string_nconcat.c` | Concatenates two strings using at most `n` bytes from the second string |
| `2-calloc.c` | Allocates and initializes memory for an array (reimplementation of `calloc`) |
| `3-array_range.c` | Creates an array of integers from `min` to `max` (inclusive) |
| `main.h` | Header file containing all function prototypes |

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file.c> -o <output>
```

## Key Concepts

- **malloc_checked**: Ensures memory allocation succeeds or terminates the program gracefully
- **calloc**: Allocates memory and initializes all bytes to zero (vs. `malloc` which leaves memory uninitialized)
- **Exit codes**: Using `exit(98)` to signal allocation failure to the calling process
