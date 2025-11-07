<p align="center">
  <a href="https://www.holbertonschool.com" rel="noopener">
 <img width=200px height=200px src="https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png" alt="Holberton School logo"></a>
</p>

<h3 align="center">Holberton School - Low Level Programming</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/ValentinCA28/holbertonschool-low_level_programming.svg)](https://github.com/ValentinCA28/holbertonschool-low_level_programming/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/ValentinCA28/holbertonschool-low_level_programming.svg)](https://github.com/ValentinCA28/holbertonschool-low_level_programming/pulls)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center"> A comprehensive collection of C programming projects and exercises from Holberton School's Low Level Programming curriculum.
    <br> 
</p>

## 📝 Table of Contents

- [About](#about)
- [Getting Started](#getting_started)
- [Project Structure](#project_structure)
- [Usage](#usage)
- [Compilation](#compilation)
- [Built Using](#built_using)
- [Authors](#authors)
- [Acknowledgments](#acknowledgement)

## 🧐 About <a name = "about"></a>

This repository contains all the low-level programming projects completed as part of the Holberton School curriculum. The projects cover fundamental concepts in C programming, including variables, functions, pointers, arrays, data structures, memory allocation, file I/O, and more.

Each project is designed to build a strong foundation in computer science fundamentals and develop problem-solving skills through hands-on coding exercises.

## 🏁 Getting Started <a name = "getting_started"></a>

These instructions will help you get a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

To compile and run the programs in this repository, you will need:

- GCC compiler (GNU Compiler Collection)
- Ubuntu 20.04 LTS or similar Linux distribution
- Make (build automation tool)

```bash
# Install GCC on Ubuntu/Debian
sudo apt-get update
sudo apt-get install build-essential
```

### Installing

Clone the repository to your local machine:

```bash
git clone https://github.com/ValentinCA28/holbertonschool-low_level_programming.git
```

Navigate to the project directory:

```bash
cd holbertonschool-low_level_programming
```

Choose a specific project directory:

```bash
cd [project-name]
```

## 📁 Project Structure <a name = "project_structure"></a>

The repository is organized by topics, with each directory containing related exercises:

- **hello_world** - Introduction to C programming
- **variables_if_else_while** - Variables, conditionals, and loops
- **functions_nested_loops** - Functions and nested loops
- **pointers_arrays_strings** - Pointers, arrays, and string manipulation
- **more_pointers_arrays_strings** - Advanced pointer operations
- **malloc_free** - Dynamic memory allocation
- **structures_typedef** - Structures and type definitions
- **function_pointers** - Function pointers
- **variadic_functions** - Variadic functions
- **file_io** - File input/output operations
- **doubly_linked_lists** - Doubly linked list implementation
- **hash_tables** - Hash table data structure
- And more...

## 🔧 Compilation <a name = "compilation"></a>

All programs are compiled using GCC with the following flags:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o program_name
```

- `-Wall`: Enable all warnings
- `-Werror`: Treat warnings as errors
- `-Wextra`: Enable extra warnings
- `-pedantic`: Strict ISO C compliance
- `-std=gnu89`: Use GNU89 C standard

## 🎈 Usage <a name="usage"></a>

Each project directory contains:
- C source files (*.c)
- Header files (*.h)
- A README.md with specific project instructions
- Main files for testing (provided by Holberton School)

To run a program:

```bash
# Compile
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c function.c -o output

# Execute
./output
```

## ⛏️ Built Using <a name = "built_using"></a>

- [C](https://en.wikipedia.org/wiki/C_(programming_language)) - Programming Language
- [GCC](https://gcc.gnu.org/) - GNU Compiler Collection
- [Vim](https://www.vim.org/) - Text Editor
- [Ubuntu 20.04 LTS](https://ubuntu.com/) - Operating System

## ✍️ Authors <a name = "authors"></a>

- [@ValentinCA28](https://github.com/ValentinCA28) - Holberton School Student

## 🎉 Acknowledgements <a name = "acknowledgement"></a>

- Holberton School for providing the curriculum and project guidelines
- All the peers who contributed to peer learning and code reviews
- The C programming community for excellent documentation and resources
- Betty style guide for C coding standards
