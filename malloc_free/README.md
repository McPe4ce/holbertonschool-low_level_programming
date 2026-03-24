# C - malloc, free

## Description

This project explores **dynamic memory allocation** in C using `malloc` and `free`. It covers how to allocate memory at runtime, create arrays and strings dynamically, and properly manage and free allocated memory to prevent memory leaks.

---

## Learning Objectives

- Understand the difference between automatic (stack) and dynamic (heap) memory allocation
- Use `malloc` to allocate memory dynamically
- Use `free` to release dynamically allocated memory
- Understand when and why to use dynamic memory allocation
- Detect and prevent memory leaks
- Implement common string operations using dynamically allocated memory

---

## Files

| File | Description |
|---|---|
| `0-create_array.c` | Creates an array of chars and initializes it with a specific character |
| `1-strdup.c` | Duplicates a string in newly allocated memory (reimplementation of `strdup`) |
| `2-str_concat.c` | Concatenates two strings in newly allocated memory |
| `3-alloc_grid.c` | Allocates a 2D array (grid) of integers |
| `4-free_grid.c` | Frees a 2D array previously allocated by `alloc_grid` |
| `main.h` | Header file containing all function prototypes |

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file.c> -o <output>
```

## Memory Management Best Practices

- Always check if `malloc` returns `NULL` (allocation failure)
- Always `free` dynamically allocated memory when done using it
- Never access memory after it has been freed
- Avoid memory leaks by ensuring every `malloc` has a corresponding `free`
