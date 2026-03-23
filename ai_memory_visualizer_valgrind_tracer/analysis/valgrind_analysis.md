# Valgrind Analysis & Memory Maps

## 1) Warning Classification

### `crash_example`
- **Bug**: NULL-pointer dereference at `nums[0] = 42;` (n=0, so `allocate_numbers(0)` returns NULL)
- **Valgrind**: `Invalid write of size 4` + `Access not within mapped region 0x0` → SIGSEGV
- **Leak**: `still reachable: 1,024 bytes` (NOT `definitely lost`) — valid pointers exist at exit despite crash

### Program: `heap_example`

Relevant source behavior:
- `person_new` allocates two heap objects per person:
	- one `Person` struct
	- one `name` buffer
- `person_free_partial` frees only the struct (`free(p)`), not `p->name`.
- In `main`:
	- Bob: `free(bob->name); free(bob);` (fully freed)
	- Alice: `person_free_partial(alice);` (Alice struct freed, `alice->name` leaked)

#### Leak summary: `definitely lost: 6 bytes in 1 blocks`
- Classification: **definite heap leak due to lost ownership**.
- Concrete misuse: **owner object freed before owned allocation**, so the only pointer to `alice->name` is lost when `alice` is freed.
- Why 6 bytes: `"Alice"` plus null terminator (`5 + 1`).

#### `ERROR SUMMARY: 0 errors from 0 contexts`
- Interpretation: no invalid reads/writes detected in executed paths.
- Important nuance: Valgrind leak reporting can show leaks even when error summary is `0`.

### Program: `stack_example`

#### `All heap blocks were freed -- no leaks are possible`
- Classification: **no heap leak in this run**.

#### `ERROR SUMMARY: 0 errors from 0 contexts`
- Classification: **no memory safety violation observed**.

The recursive stack-frame addresses printed by the program are expected and illustrate stack growth across calls, not corruption.

## 2) AI Explanation Corrections (Required)

### Incorrect AI claim #1
> "`still reachable` 1024 bytes in `crash_example` means your code leaked 1024 bytes."

Why this is incorrect:
- A true leak due to lost ownership is reported as `definitely lost` (or sometimes `indirectly/possibly lost` depending on pointer graph).
- Here, `definitely lost` is `0`.
- `still reachable` means Valgrind can still find pointers to that memory at exit.

Corrected explanation:
- The key fault in `crash_example` is a **NULL-pointer invalid write**, not a lost-ownership leak.

### Incorrect AI claim #2
> "`heap_example` is a use-after-free because Alice is freed and her name is not accessible anymore."

Why this is incorrect:
- Use-after-free requires an actual read/write through a pointer after its pointee has been freed.
- In `heap_example`, the bug is that `alice->name` is **never freed** before `alice` is freed.
- That is a **definite memory leak due to lost ownership**, not a UAF access.

Corrected explanation:
- The defect is ownership/lifecycle mismatch in deallocation order, producing a 6-byte definite leak.

## 3) Memory Map (Stack vs Heap, Lifetimes, Aliasing)

This section is written to satisfy the `memory_maps.md` requirements.

### A) `crash_example` memory map

At the point just before `nums[0] = 42;`:

- Stack (current frame `main`):
	- `int *nums = NULL` (lifetime: from declaration until `main` returns)
	- `int n = 0` (same lifetime)
- Heap:
	- No `nums` allocation exists because `allocate_numbers(0)` returned `NULL`.

Lifetime notes:
- `nums` variable (pointer object) is alive on stack.
- Its pointee does not exist (null pointer value means no object ownership).

Aliasing notes:
- No aliasing relevant here; there is no valid allocated target for `nums`.

### B) `heap_example` memory map

After successful allocations and before frees:

- Stack (`main` frame):
	- `Person *alice`
	- `Person *bob`
- Heap objects:
	- `alice_struct` (type `Person`)
	- `alice_name` (`char[6]`, "Alice\0")
	- `bob_struct` (type `Person`)
	- `bob_name` (`char[4]`, "Bob\0")

Ownership graph before frees:
- `alice -> alice_struct`
- `alice_struct.name -> alice_name`
- `bob -> bob_struct`
- `bob_struct.name -> bob_name`

After deallocation sequence in code:
- `free(bob->name); free(bob);` removes both `bob_name` and `bob_struct` correctly.
- `person_free_partial(alice);` frees `alice_struct` only.
- `alice_name` remains allocated but unreachable.

Precise lifetime conclusion:
- `alice_name` outlives `alice_struct` unexpectedly and becomes unreachable: **leak due to lost ownership**.

Aliasing accuracy:
- No second alias to `alice_name` is stored elsewhere; losing `alice_struct` loses the last pointer to `alice_name`.

### C) `stack_example` memory map

For each recursion depth `d` in `walk_stack(d, 3)`:

- Stack frame `walk_stack` contains `marker`.
- `dump_frame` creates a nested frame containing:
	- `local_int`
	- `local_buf[16]`
	- `p_local` where `p_local` aliases `&local_int`

Stack vs heap:
- All listed variables are automatic storage (stack).
- No user-managed heap allocation is performed in this program.

Lifetime precision:
- `local_int`, `local_buf`, `p_local` exist only during each `dump_frame` call.
- `marker` exists only during each `walk_stack` call.
- Each recursive call creates a distinct frame; same variable names do not mean same storage object.

Aliasing precision:
- `p_local` and `&local_int` refer to the same stack object during one `dump_frame` activation only.
- That alias becomes invalid when the function returns (pointer would be dangling if retained, though this program does not retain it).

### D) Explicit aliasing example (`aliasing_example.c`)

Although not in the three pasted Valgrind outputs, this repository includes a direct aliasing misuse example:

- `a = make_numbers(n);`
- `b = a;` so `a` and `b` alias the same heap array.
- `free(a);` deallocates that array.
- `b` is now a dangling alias.
- `b[2]` read and `b[3] = 1234` write are **use-after-free** accesses.

Why this matters:
- This is the canonical contrast with `heap_example`:
	- `heap_example`: leak due to lost ownership.
	- `aliasing_example`: dangling alias leading to use-after-free.

## 4) Additional AI Correction for Memory Maps

### Incorrect AI claim #3
> "In `stack_example`, because addresses are close and reused across calls, all recursive frames share one `local_int`."

Why this is misleading:
- Recursive calls have separate activations; each activation has its own automatic objects.
- Similar/adjacent addresses do not imply the same object identity.

Corrected explanation:
- Each depth has a distinct `local_int`, `local_buf`, and `marker` with independent lifetimes bounded by that call frame.
