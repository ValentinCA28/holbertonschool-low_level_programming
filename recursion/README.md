<p align="center">
  <a href="https://www.holbertonschool.com" rel="noopener">
 <img width=200px height=200px src="https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png" alt="Holberton School logo"></a>
</p>

<h3 align="center">C - Recursion</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![Language](https://img.shields.io/badge/language-C-blue.svg)]()
[![Standard](https://img.shields.io/badge/standard-GNU89-red.svg)]()
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center"> Master the art of recursion - when a function calls itself to solve complex problems elegantly.
    <br> 
</p>

## 📝 Table of Contents

- [About](#about)
- [Learning Objectives](#learning_objectives)
- [Requirements](#requirements)
- [Tasks](#tasks)
- [Compilation](#compilation)
- [Usage](#usage)
- [Resources](#resources)
- [Authors](#authors)

## 🧐 About <a name = "about"></a>

This project is part of the Holberton School Low-Level Programming curriculum. It introduces the concept of recursion in C programming - a powerful technique where a function calls itself to solve problems by breaking them down into smaller, similar subproblems.

Recursion is fundamental to understanding algorithms, data structures, and problem-solving patterns that appear throughout computer science.

## 🎯 Learning Objectives <a name = "learning_objectives"></a>

At the end of this project, you should be able to explain:

- What is recursion
- How to implement recursion
- In what situations you should implement recursion
- In what situations you shouldn't implement recursion
- How recursion works under the hood (call stack)
- What is a base case and why it's essential
- What is the difference between recursion and iteration
- When to use recursion vs loops

## 📋 Requirements <a name = "requirements"></a>

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Your code should use the Betty style
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library
- You are allowed to use `_putchar`
- The prototypes of all functions and the prototype of `_putchar` should be included in your header file called `main.h`
- You are not allowed to use any kind of loops
- You are not allowed to use static variables

### Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## 📚 Tasks <a name = "tasks"></a>

### 0. She locked away a secret, deep inside herself...
**File:** `0-puts_recursion.c`

Write a function that prints a string, followed by a new line.

**Prototype:** `void _puts_recursion(char *s);`

**Example:**
```c
_puts_recursion("Inception");
// Output: Inception
```

---

### 1. Why is it so important to dream?
**File:** `1-print_rev_recursion.c`

Write a function that prints a string in reverse.

**Prototype:** `void _print_rev_recursion(char *s);`

**Example:**
```c
_print_rev_recursion("Inception");
// Output: noitpecnI
```

---

### 2. Dreams feel real while we're in them...
**File:** `2-strlen_recursion.c`

Write a function that returns the length of a string.

**Prototype:** `int _strlen_recursion(char *s);`

**Example:**
```c
int n = _strlen_recursion("Corentin Tolisso");
// Returns: 16
```

---

### 3. You mustn't be afraid to dream a little bigger, darling
**File:** `3-factorial.c`

Write a function that returns the factorial of a given number.

**Prototype:** `int factorial(int n);`

**Example:**
```c
int r = factorial(5);
// Returns: 120 (5! = 5 * 4 * 3 * 2 * 1)
```

**Note:** 
- If `n` is lower than 0, return -1 to indicate an error
- Factorial of 0 is 1

---

### 4. Once an idea has taken hold of the brain it's almost impossible to eradicate
**File:** `4-pow_recursion.c`

Write a function that returns the value of `x` raised to the power of `y`.

**Prototype:** `int _pow_recursion(int x, int y);`

**Example:**
```c
int r = _pow_recursion(2, 4);
// Returns: 16 (2^4 = 2 * 2 * 2 * 2)
```

**Note:** If `y` is lower than 0, return -1

---

### 5. Your subconscious is looking for the dreamer
**File:** `5-sqrt_recursion.c`

Write a function that returns the natural square root of a number.

**Prototype:** `int _sqrt_recursion(int n);`

**Example:**
```c
int r = _sqrt_recursion(16);
// Returns: 4
```

**Note:** If `n` does not have a natural square root, return -1

---

### 6. Inception. Is it possible?
**File:** `6-is_prime_number.c`

Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

**Prototype:** `int is_prime_number(int n);`

**Example:**
```c
int r = is_prime_number(17);
// Returns: 1 (17 is prime)

r = is_prime_number(10);
// Returns: 0 (10 is not prime)
```

---

### 7. They say we only use a fraction of our brain's true potential...
**File:** `100-is_palindrome.c` (Advanced)

Write a function that returns 1 if a string is a palindrome and 0 if not.

**Prototype:** `int is_palindrome(char *s);`

**Example:**
```c
int r = is_palindrome("racecar");
// Returns: 1

r = is_palindrome("hello");
// Returns: 0
```

**Note:** An empty string is considered a palindrome

---

### 8. Inception. Now, before you bother telling me it's impossible...
**File:** `101-wildcmp.c` (Advanced)

Write a function that compares two strings and returns 1 if they can be considered identical, otherwise return 0.

**Prototype:** `int wildcmp(char *s1, char *s2);`

**Note:** `s2` can contain the special character `*`, which can replace any string (including an empty string)

**Example:**
```c
int r = wildcmp("main.c", "*.c");
// Returns: 1

r = wildcmp("main.c", "m*a*c");
// Returns: 1

r = wildcmp("main.c", "main.cd");
// Returns: 0
```

---

## 🔧 Compilation <a name = "compilation"></a>

To compile any program in this project:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 [test_file.c] [function_file.c] -o [output_name]
```

**Example:**
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-puts_recursion.c _putchar.c -o 0-puts_recursion
```

## 🎈 Usage <a name="usage"></a>

After compilation, run the executable:

```bash
./[output_name]
```

**Example:**
```bash
./0-puts_recursion
```

### Creating Test Files

Create a `main.c` file to test your functions:

```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    int r;

    r = factorial(5);
    printf("%d\n", r);
    return (0);
}
```

## 📖 Resources <a name = "resources"></a>

**Read or watch:**

- [What is Recursion](https://www.youtube.com/watch?v=Mv9NEXX1VHc)
- [What on Earth is Recursion?](https://www.youtube.com/watch?v=vPEJSJMg4jY)
- [C - Recursion](https://www.tutorialspoint.com/cprogramming/c_recursion.htm)
- [Introduction to Recursion](https://www.geeksforgeeks.org/introduction-to-recursion-data-structure-and-algorithm-tutorials/)
- [Recursion in C](https://www.programiz.com/c-programming/c-recursion)
- [Base case and recursive case](https://www.khanacademy.org/computing/computer-science/algorithms/recursive-algorithms/a/computing-powers-of-a-number)

## 💡 Key Concepts

### What is Recursion?
Recursion is when a function calls itself to solve a problem by breaking it down into smaller instances of the same problem.

### Anatomy of a Recursive Function

```c
int factorial(int n)
{
    // Base case: stops the recursion
    if (n <= 1)
        return (1);
    
    // Recursive case: function calls itself
    return (n * factorial(n - 1));
}
```

### Recursion vs Iteration

| Recursion | Iteration |
|-----------|-----------|
| Function calls itself | Uses loops (for, while) |
| Base case stops recursion | Loop condition stops iteration |
| Uses call stack memory | Uses less memory |
| More elegant for certain problems | Generally faster |
| Can cause stack overflow | No stack overflow risk |

### When to Use Recursion

✅ Tree and graph traversals  
✅ Divide and conquer algorithms  
✅ Mathematical computations (factorial, fibonacci)  
✅ Problems with recursive structure  

❌ Simple iteration tasks  
❌ When performance is critical  
❌ When stack space is limited  

## ✍️ Authors <a name = "authors"></a>

- [@ValentinCA28](https://github.com/ValentinCA28) - Holberton School Student

## 🎉 Acknowledgements

- Holberton School for providing the project requirements and guidelines
- The Inception movie quotes that make recursion more fun
- The C programming community for excellent recursion resources
- Betty style guide for maintaining code quality standards
