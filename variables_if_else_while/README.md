<p align="center">
  <a href="https://www.holbertonschool.com" rel="noopener">
 <img width=200px height=200px src="https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png" alt="Holberton School logo"></a>
</p>

<h3 align="center">C - Variables, if, else, while</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![Language](https://img.shields.io/badge/language-C-blue.svg)]()
[![Standard](https://img.shields.io/badge/standard-GNU89-red.svg)]()
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center"> Introduction to C programming fundamentals: variables, conditional statements, and loops.
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

This project is part of the Holberton School Low-Level Programming curriculum. It focuses on understanding and implementing basic C programming concepts including variables, data types, conditional statements (if/else), and loop structures (while, for).

Through a series of exercises, you'll learn to manipulate variables, make decisions with conditional statements, and create iterative processes using loops.

## 🎯 Learning Objectives <a name = "learning_objectives"></a>

At the end of this project, you should be able to explain:

- What are the arithmetic operators and how to use them
- What are the logical operators (&&, ||, !) and how to use them
- What are the relational operators and how to use them
- What values are considered TRUE and FALSE in C
- What are the boolean operators and how to use them
- How to use the `if`, `if...else` statements
- How to use comments
- How to declare variables of types `char`, `int`, `unsigned int`
- How to assign values to variables
- How to print the values of variables using `printf`
- How to use the `while` loop
- How to use variables with the `while` loop
- How to print variables using `printf`
- What is the ASCII character set
- What are the purpose of the `gcc` flags `-m32` and `-m64`

## 📋 Requirements <a name = "requirements"></a>

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Your code should use the Betty style
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library functions except `printf` and `puts`
- The prototypes of all functions should be included in a header file

### Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## 📚 Tasks <a name = "tasks"></a>

### 0. Positive anything is better than negative nothing
**File:** `0-positive_or_negative.c`

This program will assign a random number to the variable `n` each time it is executed and print whether the number is positive, negative, or zero.

**Example:**
```bash
$ ./0-positive_or_negative
-520693284 is negative
$ ./0-positive_or_negative
0 is zero
$ ./0-positive_or_negative
404960187 is positive
```

---

### 1. The last digit
**File:** `1-last_digit.c`

This program prints the last digit of a random number stored in the variable `n`.

**Example:**
```bash
$ ./1-last_digit
Last digit of 629438752 is 2 and is less than 6 and not 0
$ ./1-last_digit
Last digit of -9 is -9 and is less than 6 and not 0
```

---

### 2. I sometimes suffer from insomnia...
**File:** `2-print_alphabet.c`

Write a program that prints the alphabet in lowercase, followed by a new line.

**Requirements:**
- You can only use the `putchar` function
- You can only use `putchar` twice in your code

---

### 3. alphABET
**File:** `3-print_alphabets.c`

Write a program that prints the alphabet in lowercase, then in uppercase, followed by a new line.

**Requirements:**
- You can only use the `putchar` function
- You can only use `putchar` three times in your code

---

### 4. When I was having that alphabet soup...
**File:** `4-print_alphabt.c`

Write a program that prints the alphabet in lowercase except `q` and `e`, followed by a new line.

---

### 5. Numbers
**File:** `5-print_numbers.c`

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

---

### 6. Numberz
**File:** `6-print_numberz.c`

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

**Requirements:**
- You are not allowed to use any variable of type `char`
- You can only use `putchar` twice

---

### 7. Smile in the mirror
**File:** `7-print_tebahpla.c`

Write a program that prints the lowercase alphabet in reverse, followed by a new line.

---

### 8. Hexadecimal
**File:** `8-print_base16.c`

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

---

### 9. Patience, persistence and perspiration...
**File:** `9-print_comb.c`

Write a program that prints all possible combinations of single-digit numbers.

**Example:**
```bash
$ ./9-print_comb
0, 1, 2, 3, 4, 5, 6, 7, 8, 9
```

---

## 🔧 Compilation <a name = "compilation"></a>

To compile any program in this project:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 [filename.c] -o [output_name]
```

**Example:**
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-positive_or_negative.c -o positive_or_negative
```

## 🎈 Usage <a name="usage"></a>

After compilation, run the executable:

```bash
./[output_name]
```

**Example:**
```bash
./positive_or_negative
```

## 📖 Resources <a name = "resources"></a>

**Read or watch:**

- [Everything you need to know to start with C](https://www.youtube.com/playlist?list=PLCv0RMhVHRhTbOkGZTQwkZJHSKN9zAMZX)
- [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)
- [Integers](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html)
- [Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)
- [If statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html)
- [if…else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)
- [Relational operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm)
- [Logical operators](https://www.fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)
- [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm)
- [While loop](https://www.youtube.com/watch?v=Ju1LYO9pkaI)

**man or help:**
- `ascii`

## ✍️ Authors <a name = "authors"></a>

- [@ValentinCA28](https://github.com/ValentinCA28) - Holberton School Student

## 🎉 Acknowledgements

- Holberton School for providing the project requirements and guidelines
- The C programming community for excellent documentation
- Betty style guide for maintaining code quality standards
