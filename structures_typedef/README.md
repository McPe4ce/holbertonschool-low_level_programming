# C - Structures, typedef

## Description

This project introduces **structures** and the `typedef` keyword in C. Structures allow you to group related variables of different types under a single name, creating custom data types. The `typedef` keyword creates type aliases, making code more readable and maintainable.

---

## Learning Objectives

- Understand what structures are and when to use them
- Define and declare structures in C
- Access and modify structure members using the dot (`.`) operator
- Use `typedef` to create type aliases for structures
- Initialize structures and pass them to functions
- Allocate memory dynamically for structures
- Understand the difference between `struct dog` and `dog_t` (typedef alias)

---

## Files

| File | Description |
|---|---|
| `dog.h` | Header file defining the `dog` structure and function prototypes |
| `1-init_dog.c` | Initializes a variable of type `struct dog` |
| `2-print_dog.c` | Prints the details of a `struct dog` |
| `4-new_dog.c` | Creates a new dog with dynamically allocated memory |
| `5-free_dog.c` | Frees memory allocated for a dog structure |

---

## Structure Definition

```c
struct dog {
    char *name;
    float age;
    char *owner;
};

typedef struct dog dog_t;
```

The structure represents a dog with three attributes:
- `name`: Pointer to the dog's name (string)
- `age`: Dog's age (float)
- `owner`: Pointer to the owner's name (string)

---

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file.c> -o <output>
```

## Key Concepts

- **Structures**: Custom data types that group related variables together
- **typedef**: Creates an alias for a type, simplifying declarations (e.g., `dog_t` instead of `struct dog`)
- **Member Access**: Use the `.` operator to access structure members (e.g., `my_dog.name`)
- **Dynamic Structures**: Allocating structures on the heap using `malloc` and freeing them with `free`
