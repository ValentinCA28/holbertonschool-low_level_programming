<p align="center">
  <a href="https://www.holbertonschool.com" rel="noopener">
 <img width=200px height=200px src="https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png" alt="Holberton School logo"></a>
</p>

<h3 align="center">C - More malloc, free</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![Language](https://img.shields.io/badge/language-C-blue.svg)]()
[![Standard](https://img.shields.io/badge/standard-GNU89-red.svg)]()
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center"> Advanced dynamic memory allocation - mastering malloc, calloc, realloc, and proper memory management.
    <br> 
</p>

## 📝 Table of Contents

- [About](#about)
- [Learning Objectives](#learning_objectives)
- [Requirements](#requirements)
- [Tasks](#tasks)
- [Compilation](#compilation)
- [Usage](#usage)
- [Key Concepts](#key_concepts)
- [Resources](#resources)
- [Authors](#authors)

## 🧐 About <a name = "about"></a>

This project is part of the Holberton School Low-Level Programming curriculum. It extends the concepts of dynamic memory allocation introduced in the malloc_free project, focusing on more advanced techniques and memory management functions.

You'll learn to implement memory allocation functions like `malloc`, `calloc`, `realloc`, and understand how to properly handle memory, prevent memory leaks, and manage complex data structures dynamically.

## 🎯 Learning Objectives <a name = "learning_objectives"></a>

At the end of this project, you should be able to explain:

### Dynamic Memory Allocation
- How to use `malloc` and `free` effectively
- What is `calloc` and how it differs from `malloc`
- What is `realloc` and when to use it
- How to check if memory allocation succeeded
- Why and when to use dynamic memory allocation

### Memory Management
- How to avoid memory leaks
- How to properly free memory
- What happens when you don't free memory
- How to use `valgrind` to check for memory leaks
- Best practices for memory management in C

### Advanced Concepts
- How to allocate multidimensional arrays dynamically
- How to resize allocated memory
- How to handle memory allocation failures
- The difference between the stack and the heap

## 📋 Requirements <a name = "requirements"></a>

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Your code should use the Betty style
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, and `exit`
- You are allowed to use `_putchar`
- The prototypes of all functions should be included in your header file called `main.h`
- All header files should be include guarded

### Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

### Testing with Valgrind

```bash
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./program
```

## 📚 Tasks <a name = "tasks"></a>

### 0. Trust no one
**File:** `0-malloc_checked.c`

Write a function that allocates memory using `malloc`.

**Prototype:** `void *malloc_checked(unsigned int b);`

**Requirements:**
- Returns a pointer to the allocated memory
- If `malloc` fails, the function should cause normal process termination with status value of 98

**Example:**
```c
char *c;
int *i;

c = malloc_checked(sizeof(char) * 1024);
i = malloc_checked(sizeof(int) * 402);
```

---

### 1. string_nconcat
**File:** `1-string_nconcat.c`

Write a function that concatenates two strings.

**Prototype:** `char *string_nconcat(char *s1, char *s2, unsigned int n);`

**Requirements:**
- The returned pointer shall point to a newly allocated space in memory
- Contains `s1`, followed by the first `n` bytes of `s2`, and null terminated
- If `n` is greater or equal to the length of `s2`, then use the entire string `s2`
- If `NULL` is passed, treat it as an empty string
- If the function fails, it should return `NULL`

**Example:**
```c
char *concat;

concat = string_nconcat("Best ", "School", 6);
printf("%s\n", concat); // Output: Best School
free(concat);

concat = string_nconcat("Best ", "School", 3);
printf("%s\n", concat); // Output: Best Sch
free(concat);
```

---

### 2. _calloc
**File:** `2-calloc.c`

Write a function that allocates memory for an array, using `malloc`.

**Prototype:** `void *_calloc(unsigned int nmemb, unsigned int size);`

**Requirements:**
- Allocates memory for an array of `nmemb` elements of `size` bytes each
- Returns a pointer to the allocated memory
- The memory is set to zero
- If `nmemb` or `size` is 0, return `NULL`
- If `malloc` fails, return `NULL`

**Example:**
```c
char *a;

a = _calloc(98, sizeof(char));
// Memory is allocated and initialized to 0
```

**Note:** This function mimics the behavior of the standard library function `calloc`.

---

### 3. array_range
**File:** `3-array_range.c`

Write a function that creates an array of integers.

**Prototype:** `int *array_range(int min, int max);`

**Requirements:**
- The array created should contain all the values from `min` (included) to `max` (included)
- Ordered from min to max
- Return a pointer to the newly created array
- If `min` > `max`, return `NULL`
- If `malloc` fails, return `NULL`

**Example:**
```c
int *a;

a = array_range(0, 10);
// Creates array: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

a = array_range(-5, 5);
// Creates array: [-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5]
```

---

### 4. _realloc
**File:** `100-realloc.c` (Advanced)

Write a function that reallocates a memory block using `malloc` and `free`.

**Prototype:** `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);`

**Requirements:**
- The contents will be copied to the newly allocated space, in the range from the start of `ptr` up to the minimum of the old and new sizes
- If `new_size` > `old_size`, the "added" memory should not be initialized
- If `new_size` == `old_size`, return `ptr`
- If `ptr` is `NULL`, equivalent to `malloc(new_size)`
- If `new_size` is 0 and `ptr` is not `NULL`, equivalent to `free(ptr)`, return `NULL`

**Example:**
```c
char *p;

p = malloc(sizeof(char) * 10);
p = _realloc(p, 10, 20);  // Expands to 20 bytes
p = _realloc(p, 20, 5);   // Shrinks to 5 bytes
```

**Note:** This function mimics the behavior of the standard library function `realloc`.

---

### 5. We must accept finite disappointment, but never lose infinite hope
**File:** `101-mul.c` (Advanced)

Write a program that multiplies two positive numbers.

**Usage:** `mul num1 num2`

**Requirements:**
- `num1` and `num2` will be passed in base 10
- Print the result followed by a new line
- If the number of arguments is incorrect, print `Error`, followed by a new line, and exit with status 98
- `num1` and `num2` should only be composed of digits. If not, print `Error`, followed by a new line, and exit with status 98
- You are allowed to use more than 5 functions in this file

**Example:**
```bash
$ ./mul 10 98
980

$ ./mul 235234693269436436223446526546334576437634765378653875874687649698659586695898579 28658034365084365083426083109679137608216408631430814308651084650816406134060831608310853086103769013709675067130586570832760732096730978014607369739567864508634086304807450973045703428580934825098342095832409850394285098342509834209583425345267413639564755650879887873965624413299059347652283442946725256931098457091836732
6741363964607347056176327409052296664017629207115885799431825298732218285979253477675378163152252433498090444638371516851949000607693344005774221826791707640084109858283118638554415252024501334562199385211388077542813729999062492062003535112140135114951296012092625870670053750049614491961369284467875909840387094058741829076834681712481507039064761949964510556011155131311922716640894339164963358984664477251507124113217996391
```

---

## 🔧 Compilation <a name = "compilation"></a>

To compile any program in this project:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 [test_file.c] [function_file.c] -o [output_name]
```

**Example:**
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-malloc_checked.c -o malloc_checked
```

### Checking for Memory Leaks

Always test your programs with `valgrind`:

```bash
valgrind --leak-check=full --show-leak-kinds=all ./program
```

## 🎈 Usage <a name="usage"></a>

After compilation, run the executable:

```bash
./[output_name]
```

**Example:**
```bash
./malloc_checked
```

### Creating Test Files

Create a `main.c` file to test your functions:

```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
```

## 💡 Key Concepts <a name = "key_concepts"></a>

### malloc() - Memory Allocation

Allocates a specified number of bytes and returns a pointer to the allocated memory.

```c
int *ptr = malloc(sizeof(int) * 10);  // Allocate array of 10 integers

if (ptr == NULL) {
    // Allocation failed
    return (NULL);
}

// Use the memory
ptr[0] = 42;

// Always free when done
free(ptr);
```

**Key points:**
- Returns `NULL` if allocation fails
- Memory is NOT initialized (contains garbage values)
- Always check if allocation succeeded
- Always free allocated memory

### calloc() - Contiguous Allocation

Allocates memory for an array and initializes all bytes to zero.

```c
int *ptr = calloc(10, sizeof(int));  // Allocate and zero-initialize

// Equivalent to:
int *ptr = malloc(10 * sizeof(int));
if (ptr != NULL) {
    memset(ptr, 0, 10 * sizeof(int));
}
```

**Difference from malloc:**
- `calloc` initializes memory to zero
- `malloc` leaves memory uninitialized
- `calloc` takes two arguments (count and size)
- `malloc` takes one argument (total size)

### realloc() - Resize Allocation

Changes the size of a previously allocated memory block.

```c
int *ptr = malloc(sizeof(int) * 5);
// ... use memory ...

// Need more space
ptr = realloc(ptr, sizeof(int) * 10);
if (ptr == NULL) {
    // Reallocation failed
    // Original pointer is still valid
}
```

**Important behaviors:**
- If `ptr` is `NULL`, acts like `malloc`
- If `new_size` is 0, acts like `free`
- Original content is preserved (up to minimum of old and new size)
- May move memory to new location
- Returns `NULL` on failure (original pointer still valid)

### Memory Allocation Best Practices

✅ **Always check return values:**
```c
char *str = malloc(100);
if (str == NULL) {
    return (EXIT_FAILURE);
}
```

✅ **Free memory when done:**
```c
char *str = malloc(100);
// ... use str ...
free(str);
str = NULL;  // Prevent use-after-free
```

✅ **Initialize allocated memory:**
```c
// Option 1: Use calloc
int *arr = calloc(10, sizeof(int));

// Option 2: Manual initialization
int *arr = malloc(10 * sizeof(int));
for (int i = 0; i < 10; i++)
    arr[i] = 0;
```

✅ **Don't lose pointers:**
```c
// BAD: Memory leak
char *ptr = malloc(100);
ptr = malloc(200);  // Lost reference to first allocation!

// GOOD: Free before reassigning
char *ptr = malloc(100);
free(ptr);
ptr = malloc(200);
```

### Common Memory Errors

❌ **Memory Leak:**
```c
void leak_example(void) {
    char *str = malloc(100);
    // Forgot to free!
}  // str goes out of scope, memory is lost
```

❌ **Use After Free:**
```c
char *str = malloc(100);
free(str);
printf("%s\n", str);  // UNDEFINED BEHAVIOR!
```

❌ **Double Free:**
```c
char *str = malloc(100);
free(str);
free(str);  // CRASH!
```

❌ **Invalid Free:**
```c
char arr[100];
free(arr);  // CRASH! Can only free heap memory
```

❌ **Buffer Overflow:**
```c
char *str = malloc(10);
strcpy(str, "This is too long!");  // Overflow!
```

❌ **Dereferencing NULL:**
```c
char *str = malloc(100);
if (str == NULL)
    str[0] = 'A';  // CRASH if malloc failed!
```

### Stack vs Heap Memory

| Stack | Heap |
|-------|------|
| Automatic allocation | Manual allocation (malloc) |
| Fixed size | Dynamic size |
| Fast access | Slower access |
| Limited size (~8MB) | Large size (GB available) |
| Automatic cleanup | Manual cleanup (free) |
| Local variables | Dynamic data structures |

**Stack example:**
```c
void function(void) {
    int x = 10;          // On stack
    char arr[100];       // On stack
}  // Automatically freed
```

**Heap example:**
```c
void function(void) {
    int *x = malloc(sizeof(int));     // On heap
    char *arr = malloc(100);           // On heap
    
    free(x);   // Must manually free
    free(arr);
}
```

### Dynamic 2D Arrays

**Method 1: Single malloc (contiguous memory)**
```c
int rows = 3, cols = 4;
int *array = malloc(rows * cols * sizeof(int));

// Access: array[i * cols + j]
array[0 * cols + 0] = 1;  // array[0][0]
array[1 * cols + 2] = 5;  // array[1][2]

free(array);
```

**Method 2: Array of pointers (row-by-row)**
```c
int rows = 3, cols = 4;
int **array = malloc(rows * sizeof(int *));

for (int i = 0; i < rows; i++) {
    array[i] = malloc(cols * sizeof(int));
}

// Access: array[i][j]
array[0][0] = 1;
array[1][2] = 5;

// Free in reverse order
for (int i = 0; i < rows; i++) {
    free(array[i]);
}
free(array);
```

### Using Valgrind

Valgrind is essential for detecting memory errors:

```bash
# Basic leak check
valgrind ./program

# Detailed leak check
valgrind --leak-check=full ./program

# Show all leak types
valgrind --leak-check=full --show-leak-kinds=all ./program

# Track uninitialized values
valgrind --track-origins=yes ./program
```

**Interpreting results:**
- `definitely lost`: Direct memory leak
- `indirectly lost`: Leaked through lost pointer
- `possibly lost`: Pointer arithmetic issues
- `still reachable`: Memory not freed but still accessible

## 📖 Resources <a name = "resources"></a>

**Read or watch:**

- [Dynamic Memory Allocation in C](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
- [malloc, free, calloc, realloc](https://www.tutorialspoint.com/c_standard_library/c_function_malloc.htm)
- [Valgrind Tutorial](https://valgrind.org/docs/manual/quick-start.html)
- [Memory Leaks in C](https://www.tutorialspoint.com/valgrind/valgrind_memory_leaks.htm)
- [C Dynamic Memory Allocation](https://www.programiz.com/c-programming/c-dynamic-memory-allocation)
- [Understanding the Heap](https://www.youtube.com/watch?v=lQP4X3odvHE)

**man or help:**
- `malloc`
- `free`
- `calloc`
- `realloc`
- `exit`

## 🎓 Practice Tips

1. **Use Valgrind religiously** - Run it on every program
2. **Draw memory diagrams** - Visualize heap allocations
3. **Check every malloc** - Never assume allocation succeeds
4. **Free in reverse** - Free in opposite order of allocation
5. **Set pointers to NULL** - After freeing to prevent use-after-free
6. **Use static analysis tools** - Cppcheck, scan-build
7. **Read man pages** - Understand function behaviors
8. **Practice with structures** - Allocate complex data types

## 🚨 Memory Management Checklist

Before submitting code, verify:

- [ ] Every `malloc` is checked for NULL
- [ ] Every `malloc` has a corresponding `free`
- [ ] No memory is accessed after `free`
- [ ] No double frees
- [ ] No buffer overflows
- [ ] Valgrind shows no memory leaks
- [ ] All edge cases handled (NULL, 0 size, etc.)
- [ ] No uninitialized memory used

## ✍️ Authors <a name = "authors"></a>

- [@ValentinCA28](https://github.com/ValentinCA28) - Holberton School Student

## 🎉 Acknowledgements

- Holberton School for providing comprehensive project requirements
- The Valgrind team for creating an essential memory debugging tool
- The C programming community for excellent malloc/free resources
- Betty style guide for maintaining code quality standards
