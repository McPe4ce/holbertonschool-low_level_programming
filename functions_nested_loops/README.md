# C - Functions, nested loops

## Description

This project introduces **function declarations**, **prototypes**, **header files**, and **nested loops** in C. It covers writing and calling custom functions, understanding the difference between declarations and definitions, and using header files to share function prototypes across files.

---

## Learning Objectives

- Understand the difference between a function declaration and a definition
- Write and use function prototypes in a header file
- Use nested `for` and `while` loops
- Understand variable scope in C
- Use GCC flags to compile multi-file programs

---

## Files

| File | Description |
|---|---|
| `0-putchar.c` | Prints `_putchar` string using `_putchar` |
| `1-alphabet.c` | Prints the lowercase alphabet using a custom function |
| `2-print_alphabet_x10.c` | Prints the lowercase alphabet 10 times |
| `3-islower.c` | Checks if a character is lowercase |
| `4-isalpha.c` | Checks if a character is alphabetic |
| `5-sign.c` | Prints the sign of a number |
| `6-abs.c` | Computes the absolute value of an integer |
| `7-print_last_digit.c` | Prints the last digit of a number |
| `8-24_hours.c` | Prints every minute of the day in `HH:MM` format |
| `9-times_table.c` | Prints the 9 times table |
| `10-add.c` | Returns the sum of two integers |
| `11-print_to_98.c` | Prints all natural numbers from a given number up to 98 |
| `_putchar.c` | Custom implementation of `putchar` |
| `main.h` | Header file containing all function prototypes |

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file.c> _putchar.c -o <output>
```
