# libft

*This project has been created as part of the 42 curriculum by fcholakk.*

## Description

libft is a project from the 42 curriculum that consists of creating a personal C library by reimplementing standard C library functions and developing additional utility functions.

The goal of this project is to strengthen the understanding of C programming fundamentals, including pointers, memory allocation, string manipulation, and linked lists. It also encourages writing clean, reusable, and reliable code while following the 42 Norm.

The library contains functions for:

Character manipulation: checking and converting characters.
String manipulation: copying, comparing, searching, and processing strings.
Memory manipulation: allocating, setting, copying, and moving memory.
Conversions and output: converting strings to integers and writing to file descriptors.
Linked lists: creating, adding, removing, and iterating through list elements.

The compiled library, libft.a, can be reused in future C projects.

## Instructions
### Compilation

Clone the repository and navigate to the project directory:
```
git clone <repository-url>
cd libft
```

Compile the library using the Makefile:
```
make
```

This generates the static library libft.a.

### Makefile Rules
|Command        | Description                                   |
|---------------|-----------------------------------------------|
|make           | Compiles the library.                         |
|make clean     | Removes object files.                         |
|make fclean    | Removes object files and the compiled library.|
|make re        | Recompiles the library from scratch.          |
### Usage

Include the library header in your C source file:
```
#include "libft.h"
```

Compile your program by linking the library:
```
cc main.c -L. -lft -I. -o program
```

Execute the resulting program:
```
./program
```

Ensure that libft.a and libft.h are available in the appropriate locations.

## Resources
### Documentation and References
- cppreference.com — C language reference
- GNU C Library Manual
- GNU Make Manual
42 School — information about the curriculum and its projects.

These resources were used as references for understanding C functions, memory management, compilation, and library development.

### AI Usage

AI tools, including ChatGPT, were used as supplementary learning and development resources during this project.

Their use included:

Documentation: assisting with the structure and wording of this README.
Concept clarification: helping explain C programming concepts and standard library function behavior when needed.
Development support: providing guidance on implementation approaches and debugging strategies when needed.
