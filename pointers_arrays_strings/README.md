# C - Pointers, arrays and strings

## Description

This project explores **pointers**, **arrays**, and **string manipulation** in C. It covers how to pass data by reference using pointers, how arrays and strings are stored in memory, and how to implement standard string and memory operations from scratch.

---

## Learning Objectives

- Understand the difference between a pointer and a value
- Use pointers to modify variables in functions (pass by reference)
- Understand how strings are stored as arrays of characters in memory
- Implement standard library functions such as `strlen`, `strcpy`, `strcat`, `strcmp`, `strchr`, `strstr`
- Implement memory functions such as `memset` and `memcpy`
- Use `atoi` to convert strings to integers

---

## Files

| File | Description |
|---|---|
| `0-reset_to_98.c` | Sets the value of an integer to 98 via a pointer |
| `0-memset.c` | Fills memory with a constant byte |
| `0-strcat.c` | Concatenates two strings |
| `1-swap.c` | Swaps the values of two integers |
| `1-memcpy.c` | Copies memory area |
| `1-strncat.c` | Appends at most `n` bytes from one string to another |
| `2-strlen.c` | Returns the length of a string |
| `2-strchr.c` | Locates a character in a string |
| `2-strncpy.c` | Copies at most `n` bytes of a string |
| `3-puts.c` | Prints a string followed by a newline |
| `3-strcmp.c` | Compares two strings |
| `3-strspn.c` | Gets the length of a prefix substring |
| `4-print_rev.c` | Prints a string in reverse |
| `4-rev_array.c` | Reverses an array of integers |
| `4-strpbrk.c` | Searches a string for any of a set of bytes |
| `5-rev_string.c` | Reverses a string in place |
| `5-string_toupper.c` | Converts a string to uppercase |
| `5-strstr.c` | Locates a substring |
| `6-puts2.c` | Prints every other character of a string |
| `6-cap_string.c` | Capitalizes words in a string |
| `7-puts_half.c` | Prints the second half of a string |
| `7-leet.c` | Encodes a string into leet speak |
| `7-print_chessboard.c` | Prints a chessboard pattern |
| `8-print_array.c` | Prints an array of integers |
| `8-print_diagsums.c` | Prints the sum of the diagonal elements of a matrix |
| `9-strcpy.c` | Copies a string |
| `100-atoi.c` | Converts a string to an integer |
| `_putchar.c` | Custom implementation of `putchar` |
| `main.h` | Header file containing all function prototypes |

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file.c> _putchar.c -o <output>
```
