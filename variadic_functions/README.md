# C - Variadic Functions

## Description

This project explores **variadic functions** in C — functions that can accept a variable number of arguments. Using the `<stdarg.h>` library and macros like `va_start`, `va_arg`, and `va_end`, variadic functions enable flexible function signatures similar to `printf` and `scanf`.

---

## Learning Objectives

- Understand what variadic functions are and when to use them
- Use the `<stdarg.h>` library to handle variable arguments
- Implement functions that accept a variable number of parameters
- Use `va_list`, `va_start`, `va_arg`, and `va_end` macros
- Understand how `printf` works internally with format specifiers
- Handle different data types in variadic functions

---

## Files

| File | Description |
|---|---|
| `0-sum_them_all.c` | Returns the sum of all its parameters |
| `1-print_numbers.c` | Prints numbers followed by a newline, separated by a given string |
| `2-print_strings.c` | Prints strings followed by a newline, separated by a given string |
| `3-print_all.c` | Prints any type of data (char, int, float, string) based on format specifiers |
| `variadic_functions.h` | Header file containing all function prototypes and structures |

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file.c> -o <output>
```

## Key Concepts

- **Variadic Functions**: Functions that accept a variable number of arguments (e.g., `printf`, `scanf`)
- **`<stdarg.h>` Macros**:
  - `va_list`: Type to hold information about variable arguments
  - `va_start`: Initializes a `va_list` to retrieve variable arguments
  - `va_arg`: Retrieves the next argument of a specified type
  - `va_end`: Cleans up the `va_list` when done
- **Format Specifiers**: Characters that indicate the expected type of argument (e.g., `'c'` for char, `'i'` for int, `'f'` for float, `'s'` for string)

## Usage Example

```c
sum_them_all(3, 10, 20, 30);  // Returns 60
print_numbers(", ", 4, 0, 98, -1024, 402);  // Prints: 0, 98, -1024, 402
print_all("ceis", 'H', 0, "Hello");  // Prints: H, 0, , Hello
```
