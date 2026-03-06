# C - More functions, more nested loops

## Description

This project builds on the fundamentals of functions and nested loops to implement more advanced patterns. It covers character classification functions, arithmetic operations, and using nested loops to draw shapes such as lines, diagonals, squares, and triangles. It also implements the classic **FizzBuzz** algorithm.

---

## Learning Objectives

- Write and use custom character classification functions (`isupper`, `isdigit`)
- Perform arithmetic via functions (`mul`)
- Use nested loops to print number patterns and geometric shapes
- Implement the FizzBuzz algorithm in C
- Apply proper header file usage and Betty style

---

## Files

| File | Description |
|---|---|
| `0-isupper.c` | Checks if a character is uppercase |
| `1-isdigit.c` | Checks if a character is a digit |
| `2-mul.c` | Returns the product of two integers |
| `3-print_numbers.c` | Prints numbers from 0 to 9 |
| `4-print_most_numbers.c` | Prints numbers from 0 to 9 except 2 and 4 |
| `5-more_numbers.c` | Prints numbers from 0 to 14, ten times |
| `6-print_line.c` | Draws a straight line using `_putchar` |
| `7-print_diagonal.c` | Draws a diagonal line |
| `8-print_square.c` | Draws a square using `#` characters |
| `9-fizz_buzz.c` | Prints numbers 1–100 with FizzBuzz rules |
| `10-print_triangle.c` | Draws a triangle using `#` characters |
| `main.h` | Header file containing all function prototypes |

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file.c> -o <output>
```