# C - Hello, World

## Description

This project introduces the **C compilation pipeline** and basic output functions. It covers each stage of turning a C source file into an executable — preprocessing, compiling, assembling, and linking — as well as the differences between `printf` and `puts` and how to use `sizeof`.

---

## Learning Objectives

- Understand the roles of the preprocessor, compiler, assembler, and linker
- Use `gcc` to stop at each compilation stage (`-E`, `-S`, `-c`)
- Use `printf` and `puts` to print text to standard output
- Use `sizeof` to determine the size of a type
- Follow the Betty coding style

---

## Files

| File | Description |
|---|---|
| `0-preprocessor` | Script that runs a C file through the preprocessor and saves the output |
| `1-compiler` | Script that compiles a C file without linking |
| `2-assembler` | Script that generates the assembly code from a C file |
| `3-name` | Script that compiles a C file and creates an executable named `cisfun` |
| `4-puts.c` | Program that prints a string using `puts` |
| `5-printf.c` | Program that prints a formatted string using `printf` |
| `6-size.c` | Program that prints the sizes of various C types using `sizeof` |

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file.c> -o <output>
```
