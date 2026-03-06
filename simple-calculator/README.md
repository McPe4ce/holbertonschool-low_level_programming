# C - Simple Calculator

## Description

An interactive **command-line calculator** written in C. It supports the four basic arithmetic operations — addition, subtraction, multiplication, and division — with proper division-by-zero handling and a menu-driven interface.

---

## Features

- Menu-driven interface for selecting operations
- Supports: addition (`+`), subtraction (`-`), multiplication (`*`), division (`/`)
- Handles division by zero with an appropriate error message
- Star Wars themed messages for a fun user experience
- Loops until the user chooses to exit

---

## Files

| File | Description |
|---|---|
| `calculator.c` | Main source file implementing the interactive CLI calculator |

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
```

## Usage

```bash
./calculator
```

Enter two numbers when prompted, then select an operation from the menu. The result is displayed immediately. Enter `0` to exit.