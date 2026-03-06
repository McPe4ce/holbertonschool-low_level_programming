# C - argc, argv

## Description

This project covers **command-line arguments** in C using `argc` (argument count) and `argv` (argument vector). It demonstrates how to access, validate, and use values passed to a program at runtime from the terminal.

---

## Learning Objectives

- Understand how `main` can receive arguments via `argc` and `argv`
- Access and print command-line arguments
- Validate the number and type of arguments passed to a program
- Perform operations on arguments (e.g., multiplication)
- Handle invalid input gracefully with appropriate exit codes

---

## Files

| File | Description |
|---|---|
| `0-whatsmyname.c` | Prints the name of the program |
| `1-args.c` | Prints the number of arguments passed to the program |
| `2-args.c` | Prints all command-line arguments, one per line |
| `3-mul.c` | Multiplies two numbers passed as command-line arguments |
| `4-add.c` | Sums the total numbers in arguments |

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file.c> -o <output>
```

## Usage Example

```bash
$ ./3-mul 3 7
21
```
