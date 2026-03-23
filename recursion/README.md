# C - Recursion

## Description

This project introduces **recursion** — a programming technique where a function calls itself to solve a problem by breaking it down into smaller, similar subproblems. Recursion is particularly useful for problems that can be defined in terms of themselves, such as factorials, exponentiation, and prime number checking.

---

## Learning Objectives

- Understand what recursion is and when to use it
- Identify the base case and recursive case in recursive functions
- Implement recursive functions to solve mathematical problems
- Understand the call stack and how recursion works in memory
- Recognize problems that are naturally suited for recursion
- Avoid infinite recursion by ensuring proper base cases

---

## Files

| File | Description |
|---|---|
| `0-puts_recursion.c` | Prints a string followed by a newline using recursion |
| `1-print_rev_recursion.c` | Prints a string in reverse using recursion |
| `2-strlen_recursion.c` | Returns the length of a string using recursion |
| `3-factorial.c` | Returns the factorial of a given number using recursion |
| `4-pow_recursion.c` | Returns the value of `x` raised to the power of `y` using recursion |
| `5-sqrt_recursion.c` | Returns the natural square root of a number using recursion |
| `6-is_prime_number.c` | Checks if a number is prime using recursion |
| `main.h` | Header file containing all function prototypes |
| `_putchar.c` | Custom implementation of `putchar` |

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file.c> _putchar.c -o <output>
```

## Key Concepts

- **Base Case**: The condition that stops the recursion (prevents infinite loops)
- **Recursive Case**: The function calling itself with modified parameters
- **Call Stack**: Each recursive call adds a new frame to the stack until the base case is reached
- **Recursion vs. Iteration**: Recursion can be more elegant but uses more memory; iteration is often more efficient
