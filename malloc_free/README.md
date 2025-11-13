<p align="center">
  <a href="https://www.holbertonschool.com" rel="noopener">
 <img width=200px height=200px src="https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png" alt="Holberton School logo"></a>
</p>

<h3 align="center">C - malloc, free</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![Language](https://img.shields.io/badge/language-C-blue.svg)]()
[![Standard](https://img.shields.io/badge/standard-GNU89-red.svg)]()
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center"> Introduction to dynamic memory allocation - learn to manage memory at runtime with malloc and free.
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

This project is part of the Holberton School Low-Level Programming curriculum. It introduces dynamic memory allocation in C - a fundamental concept that allows programs to request memory at runtime rather than compile time.

You'll learn the difference between automatic (stack) and dynamic (heap) allocation, how to use `malloc` and `free`, and why proper memory management is crucial to prevent memory leaks and other issues.

## 🎯 Learning Objectives <a name = "learning_objectives"></a>

At the end of this project, you should be able to explain:

### Memory Allocation
- What is the difference between automatic and dynamic allocation
- What is `malloc` and `free` and how to use them
- Why and when to use `malloc`
- How to use `valgrind` to check for memory leaks

### Memory Management
- What is a memory leak and how to avoid it
- The difference between the stack and the heap
- How memory is organized in a C program
- Best practices for allocating and freeing memory

### Practical Skills
- How to allocate memory for arrays dynamically
- How to allocate memory for strings
- How to allocate memory for 2D arrays
- How to properly free allocated memory

## 📋 Requirements <a name = "requirements"></a>

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Your code should use the Betty style
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc` and `free`
- You are allowed to use `_putchar`
- The prototypes of all functions and the prototype of `_putchar` should be included in your header file called `main.h`
- All header files should be include guarded

### Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## 📚 Tasks <a name = "tasks"></a>

### 0. Float like a butterfly, sting like a bee
**File:** `0-create_array.c`

Write a function that creates an array of chars, and initializes it with a specific char.

**Prototype:** `char *create_array(unsigned int size, char c);`

**Requirements:**
- Returns `NULL` if size is 0
- Returns a pointer to the array, or `NULL` if it fails

**Example:**
```c
char *buffer;

buffer = create_array(98, 'H');
// Creates array: ['H', 'H', 'H', ..., 'H'] (98 times)
```

---

### 1. The woman who has no imagination has no wings
**File:** `1-strdup.c`

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

**Prototype:** `char *_strdup(char *str);`

**Requirements:**
- Returns `NULL` if str is `NULL`
- Returns a pointer to the duplicated string
- Returns `NULL` if insufficient memory was available

**Example:**
```c
char *s;

s = _strdup("Holberton");
// Creates a new string: "Holberton"
// Must be freed later
```

**Note:** The `_strdup()` function returns a pointer to a new string which is a duplicate of the string `str`. Memory for the new string is obtained with `malloc`, and can be freed with `free`.

---

### 2. He who is not courageous enough to take risks will accomplish nothing in life
**File:** `2-str_concat.c`

Write a function that concatenates two strings.

**Prototype:** `char *str_concat(char *s1, char *s2);`

**Requirements:**
- The returned pointer should point to a newly allocated space in memory
- The contents should be s1 followed by s2, and null terminated
- If `NULL` is passed, treat it as an empty string
- Returns `NULL` on failure

**Example:**
```c
char *s;

s = str_concat("Best ", "School");
printf("%s\n", s); // Output: Best School
free(s);

s = str_concat(NULL, "School");
printf("%s\n", s); // Output: School
free(s);
```

---

### 3. If you even dream of beating me you'd better wake up and apologize
**File:** `3-alloc_grid.c`

Write a function that returns a pointer to a 2 dimensional array of integers.

**Prototype:** `int **alloc_grid(int width, int height);`

**Requirements:**
- Each element of the grid should be initialized to 0
- Returns `NULL` on failure
- Returns `NULL` if width or height is 0 or negative

**Example:**
```c
int **grid;

grid = alloc_grid(6, 4);
// Creates a 4x6 grid initialized to 0:
// [0, 0, 0, 0, 0, 0]
// [0, 0, 0, 0, 0, 0]
// [0, 0, 0, 0, 0, 0]
// [0, 0, 0, 0, 0, 0]
```

---

### 4. It's not bragging if you can back it up
**File:** `4-free_grid.c`

Write a function that frees a 2 dimensional grid previously created by your `alloc_grid` function.

**Prototype:** `void free_grid(int **grid, int height);`

**Requirements:**
- Note that we will compile with your `alloc_grid.c` file. Make sure it compiles.

**Example:**
```c
int **grid;

grid = alloc_grid(6, 4);
// ... use grid ...
free_grid(grid, 4);
```

---

### 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe
**File:** `100-argstostr.c` (Advanced)

Write a function that concatenates all the arguments of your program.

**Prototype:** `char *argstostr(int ac, char **av);`

**Requirements:**
- Returns `NULL` if `ac == 0` or `av == NULL`
- Returns a pointer to a new string, or `NULL` if it fails
- Each argument should be followed by a `\n` in the new string

**Example:**
```c
char *s;

s = argstostr(3, ["./program", "Hello", "World"]);
printf("%s", s);
// Output:
// ./program
// Hello
// World
```

---

### 6. I will show you how great I am
**File:** `101-strtow.c` (Advanced)

Write a function that splits a string into words.

**Prototype:** `char **strtow(char *str);`

**Requirements:**
- Returns a pointer to an array of strings (words)
- Each element of this array should contain a single word, null-terminated
- The last element of the returned array should be `NULL`
- Words are separated by spaces
- Returns `NULL` if `str == NULL` or `str == ""`
- If your function fails, it should return `NULL`

**Example:**
```c
char **words;

words = strtow("Hello World from Holberton");
// Returns: ["Hello", "World", "from", "Holberton", NULL]
```

---

## 🔧 Compilation <a name = "compilation"></a>

To compile any program in this project:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 [test_file.c] [function_file.c] -o [output_name]
```

**Example:**
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-create_array.c -o create_array
```

### Checking for Memory Leaks

Always use `valgrind` to check for memory leaks:

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
./create_array
```

### Creating Test Files

Create a `main.c` file to test your functions:

```c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    
    // Use buffer
    printf("%c%c%c\n", buffer[0], buffer[1], buffer[2]);
    
    free(buffer);
    return (0);
}
```

## 💡 Key Concepts <a name = "key_concepts"></a>

### What is malloc?

`malloc` (Memory ALLOCation) allocates a specified number of bytes on the heap and returns a pointer to the allocated memory.

```c
#include <stdlib.h>

int *ptr = malloc(sizeof(int));  // Allocate memory for one integer
```

**Syntax:**
```c
void *malloc(size_t size);
```

**Returns:**
- Pointer to allocated memory on success
- `NULL` on failure

### What is free?

`free` deallocates memory previously allocated by `malloc`, `calloc`, or `realloc`.

```c
int *ptr = malloc(sizeof(int));
// ... use ptr ...
free(ptr);
```

**Syntax:**
```c
void free(void *ptr);
```

**Important:**
- Only free memory allocated with `malloc`, `calloc`, or `realloc`
- Never free the same pointer twice
- After freeing, set pointer to `NULL` to avoid dangling pointers

### Stack vs Heap

| Stack | Heap |
|-------|------|
| **Automatic allocation** | **Manual allocation** |
| Fixed at compile time | Dynamic at runtime |
| Fast access | Slower access |
| Limited size (~8MB) | Large size (GB) |
| LIFO structure | No structure |
| Automatic cleanup | Manual cleanup required |
| Local variables | malloc/free |

**Stack example:**
```c
void function(void)
{
    int x = 10;        // Allocated on stack
    char str[100];     // Allocated on stack
}  // Automatically freed when function returns
```

**Heap example:**
```c
void function(void)
{
    int *x = malloc(sizeof(int));         // Allocated on heap
    char *str = malloc(100);               // Allocated on heap
    
    // Must manually free
    free(x);
    free(str);
}
```

### Basic malloc Usage

**Allocating a single variable:**
```c
int *num = malloc(sizeof(int));
if (num == NULL) {
    return (NULL);
}
*num = 42;
free(num);
```

**Allocating an array:**
```c
int *arr = malloc(sizeof(int) * 10);  // Array of 10 integers
if (arr == NULL) {
    return (NULL);
}

arr[0] = 1;
arr[9] = 10;

free(arr);
```

**Allocating a string:**
```c
char *str = malloc(sizeof(char) * 50);  // String of up to 49 chars + '\0'
if (str == NULL) {
    return (NULL);
}

strcpy(str, "Hello, World!");
free(str);
```

### Memory Allocation Process

1. **Request memory:**
```c
char *ptr = malloc(100);
```

2. **Check if allocation succeeded:**
```c
if (ptr == NULL) {
    // Handle error
    return (NULL);
}
```

3. **Use the memory:**
```c
strcpy(ptr, "Hello");
```

4. **Free the memory when done:**
```c
free(ptr);
```

5. **Prevent dangling pointer (optional but recommended):**
```c
ptr = NULL;
```

### Common Memory Errors

❌ **Memory Leak - Forgetting to free:**
```c
void leak(void)
{
    char *str = malloc(100);
    // Oops! Forgot to free(str)
}  // Memory is lost
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

❌ **Freeing Stack Memory:**
```c
char arr[100];
free(arr);  // CRASH! arr is on stack
```

❌ **Not Checking malloc Return:**
```c
char *str = malloc(100);
str[0] = 'A';  // CRASH if malloc failed!
```

❌ **Buffer Overflow:**
```c
char *str = malloc(5);
strcpy(str, "Hello World!");  // Overflow!
```

### Best Practices

✅ **Always check if malloc succeeded:**
```c
char *str = malloc(100);
if (str == NULL) {
    return (NULL);
}
```

✅ **Free every malloc:**
```c
char *str = malloc(100);
// ... use str ...
free(str);
```

✅ **Set pointer to NULL after freeing:**
```c
free(ptr);
ptr = NULL;
```

✅ **Use sizeof for portability:**
```c
// Good: works on any system
int *arr = malloc(sizeof(int) * 10);

// Bad: assumes int is 4 bytes
int *arr = malloc(4 * 10);
```

✅ **Free in reverse order of allocation:**
```c
char *s1 = malloc(10);
char *s2 = malloc(20);

free(s2);
free(s1);
```

### Allocating 2D Arrays

**Method 1: Array of pointers (flexible rows)**
```c
int **grid;
int i, height = 4, width = 6;

// Allocate array of pointers
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
    return (NULL);

// Allocate each row
for (i = 0; i < height; i++) {
    grid[i] = malloc(sizeof(int) * width);
    if (grid[i] == NULL) {
        // Free previously allocated rows
        for (int j = 0; j < i; j++)
            free(grid[j]);
        free(grid);
        return (NULL);
    }
}

// Use: grid[row][col]
grid[0][0] = 42;

// Free in reverse
for (i = 0; i < height; i++)
    free(grid[i]);
free(grid);
```

**Method 2: Single block (contiguous memory)**
```c
int *grid;
int height = 4, width = 6;

grid = malloc(sizeof(int) * height * width);
if (grid == NULL)
    return (NULL);

// Access: grid[row * width + col]
grid[0 * width + 0] = 42;  // grid[0][0]
grid[2 * width + 3] = 10;  // grid[2][3]

// Single free
free(grid);
```

### String Duplication

```c
char *_strdup(char *str)
{
    char *dup;
    unsigned int i, len = 0;

    if (str == NULL)
        return (NULL);

    // Calculate length
    while (str[len])
        len++;

    // Allocate memory (length + 1 for '\0')
    dup = malloc(sizeof(char) * (len + 1));
    if (dup == NULL)
        return (NULL);

    // Copy string
    for (i = 0; i <= len; i++)
        dup[i] = str[i];

    return (dup);
}
```

### Memory Layout of a C Program

```
High Address
+------------------+
|   Command Line   |  Arguments & Environment
|    & Environment |
+------------------+
|      Stack       |  Local variables, function calls
|        ↓         |  Grows downward
+------------------+
|                  |  Unused space
+------------------+
|        ↑         |  Grows upward
|      Heap        |  malloc allocates here
+------------------+
|   BSS Segment    |  Uninitialized global/static variables
+------------------+
|   Data Segment   |  Initialized global/static variables
+------------------+
|   Text Segment   |  Program code (read-only)
+------------------+
Low Address
```

### Using Valgrind

Valgrind helps detect memory errors:

```bash
# Compile with debugging symbols
gcc -g -Wall -Werror -Wextra -pedantic program.c -o program

# Run with valgrind
valgrind --leak-check=full --show-leak-kinds=all ./program
```

**What Valgrind detects:**
- Memory leaks
- Use of uninitialized memory
- Invalid memory access
- Double frees
- Mismatched malloc/free

**Example output:**
```
HEAP SUMMARY:
    in use at exit: 0 bytes in 0 blocks
  total heap usage: 2 allocs, 2 frees, 1,124 bytes allocated

All heap blocks were freed -- no leaks are possible
```

## 📖 Resources <a name = "resources"></a>

**Read or watch:**

- [Dynamic Memory Allocation in C](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
- [malloc and free](https://www.tutorialspoint.com/c_standard_library/c_function_malloc.htm)
- [Valgrind](https://valgrind.org/)
- [Automatic and Dynamic Allocation](https://www.youtube.com/watch?v=R0qIYWo8igs)
- [Understanding the Heap and Stack](https://www.youtube.com/watch?v=_8-ht2AKyH4)
- [What and where are the stack and heap?](https://stackoverflow.com/questions/79923/what-and-where-are-the-stack-and-heap)

**man or help:**
- `malloc`
- `free`
- `valgrind`

## 🎓 Practice Tips

1. **Always use Valgrind** - Make it a habit to check every program
2. **Draw memory diagrams** - Visualize heap allocations
3. **Start simple** - Master single allocations before 2D arrays
4. **Read error messages** - Valgrind output is very informative
5. **Practice defensive programming** - Check every malloc
6. **Understand the lifecycle** - Allocate → Use → Free
7. **Learn from mistakes** - Debug memory errors to understand them

## 🚨 Memory Checklist

Before submitting, verify:

- [ ] Every `malloc` has a corresponding `free`
- [ ] All `malloc` return values are checked
- [ ] No memory is accessed after `free`
- [ ] No double frees occur
- [ ] Valgrind shows "All heap blocks were freed"
- [ ] Edge cases handled (NULL, 0 size, etc.)
- [ ] No buffer overflows

## ✍️ Authors <a name = "authors"></a>

- [@ValentinCA28](https://github.com/ValentinCA28) - Holberton School Student

## 🎉 Acknowledgements

- Holberton School for providing comprehensive memory management curriculum
- The Valgrind development team for an essential debugging tool
- Dennis Ritchie for creating C and its memory model
- Betty style guide for maintaining code quality standards
