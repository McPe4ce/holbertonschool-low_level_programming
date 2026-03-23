# Memory Maps Analysis: Stack vs Heap

As we saw on the previous projects, in Secure Input & Memory Las as well as Malloc, two spaces of memory exist, the Stack and the Heap.

While both are memories, they differ in lots of points, and the reasons below are why it is important to make the difference as soon as possible so we dont confuse ourselves later on.

What a drag it is to use malloc... right? Well in the stack memory, memory manages itself as it stores the local variable that are declared in function al contrario of the environement variables. Those are stored on the heap of the memory, in a vaster space that can get messy quite quickly if (malloc), (free) and pointers dereferencement arent used properly.

Local variable that are stored on the stack usually have lifespan that tends to be closer than the ones on the heap as they are freed automatically after the function is used whereas the ones on the heap are freed only if you free them, meaning technically they could live forever, which in a way can be wrong.

---

## stack_example.c - LIFO Stack Deallocation

"In stack_example.c, when walk_stack(0, 3) returns, all the stack frames are simultaneously freed at once."

In this statement given by the AI, with the help of the map given by it, we can see that the walk_stack() is not freed simulatneously but LIFO way (last in first out). So, this is how it works:

```
walk_stack(0, 3)
  └─ walk_stack(1, 3)
      └─ walk_stack(2, 3)
          └─ walk_stack(3, 3)
             prints "exit depth=3"
             RETURNS → Frame 3 freed ←
          prints "exit depth=2"
          RETURNS → Frame 2 freed ←
      prints "exit depth=1"
      RETURNS → Frame 1 freed ←
  prints "exit depth=0"
  RETURNS → Frame 0 freed ←
```

Each recursive call creates a new stack frame. Variables (*marker*, *local_int*, *local_buf*, *p_local*) exist only during that function call and are automatically freed when it returns. The deepest frame (depth=3) is freed first, then depth=2, then depth=1, then depth=0. This is automatic and safe.

---

## heap_example.c - Memory Leak (Incomplete Deallocation)

In here, now we didnt use --+-, which causes a memory leak.

The Person struct has TWO allocations:
1. The struct itself: `malloc(sizeof(Person))`
2. The name string: `malloc(len + 1)`

```
alice = person_new("Alice", 30)
HEAP:
  [Person struct] (0x20000)
    name → "Alice" (0x30000)
    age = 30

bob = person_new("Bob", 41)
HEAP:
  [Person: alice] (0x20000) → name at 0x30000
  [Person: bob] (0x21000) → name at 0x31000
```

But `person_free_partial(alice)` only does `free(p)`. It does NOT free `p->name`. So "Alice" at 0x30000 is orphaned forever.

**The leak:** Alice's name string (0x30000) is never freed.

---

## aliasing_example.c - Pointer Aliasing & Use-After-Free

In the aliasing_example file, we can see *a takes the address of make_numbers(), and b takes the adress of a. But we can see that as the code executes, a is freed while b is still user after it, which can cause unexpected behavior, leading to serious errors as it becomes a dangling pointer.

```
a = make_numbers(5)     // a → [int array] (0x40000)
b = a                   // b → [int array] (0x40000) ← ALIASING
free(a)                 // Both a and b now point to freed memory
printf("b[2]=%d", b[2]) // USE-AFTER-FREE ← CRASH/UNDEFINED BEHAVIOR
b[3] = 1234             // USE-AFTER-FREE ← Valgrind catches this
```

Both pointers point to the same memory. When freed through *a*, pointer *b* becomes dangling. Reading or writing through a dangling pointer is undefined behavior.

---

## crash_example.c - NULL Pointer Dereference

What a crash it is when you dereference a NULL pointer...

```
n = 0
nums = allocate_numbers(0)
  → allocate_numbers checks: if (n <= 0) return NULL
  → returns NULL, no malloc happens
nums = NULL

nums[0] = 42  // ⚠️ SEGMENTATION FAULT
  → Trying to dereference address 0x00000000
  → Kernel protects this, access denied → CRASH
```

Memory address 0x0 (NULL) is never valid. Any dereference is a segmentation fault.

---

## Summary Table

| File | Memory Type | Issue | Result |
|------|-------------|-------|--------|
| **stack_example.c** | Stack | None | LIFO cleanup, safe |
| **heap_example.c** | Heap | Memory leak | Alice's name orphaned |
| **aliasing_example.c** | Heap | Use-after-free | Dangling pointer accessed |
| **crash_example.c** | Heap | NULL dereference | Immediate segfault |

---

## Key Takeaways

**Stack:** Automatic management, LIFO order, fast and safe, limited size.

**Heap:** Manual (malloc/free), can "live forever" if not freed, larger but messier, requires discipline.

**Aliasing:** Two pointers to same memory = OK. One frees it, others become dangling = PROBLEM.

**Lifetimes:** Know when variables are created/destroyed. Use Valgrind to catch mistakes.