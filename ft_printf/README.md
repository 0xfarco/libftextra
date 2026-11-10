*This project has been created as part of the 42 curriculum by fcholakk.*

# ft_printf

## Description

The `ft_printf` project is part of the 42 School Common Core curriculum. The goal is to recreate the behavior of the standard C library function `printf()`.

This project introduces variadic functions in C and teaches how to handle a variable number of arguments using `va_list`, `va_start`, `va_arg`, and `va_end`.

The function supports the following format specifiers:

- `%c` — Prints a single character.
- `%s` — Prints a string.
- `%p` — Prints a pointer address in hexadecimal.
- `%d` — Prints a decimal integer.
- `%i` — Prints an integer.
- `%u` — Prints an unsigned decimal integer.
- `%x` — Prints a number in lowercase hexadecimal.
- `%X` — Prints a number in uppercase hexadecimal.
- `%%` — Prints a percent sign.

The function returns the number of characters printed.

## Instructions

### Compilation

Clone the repository and navigate to the project directory:

```bash
git clone <your-repository-url>
cd ft_printf
```

Compile the library using the Makefile:

```bash
make
```

This generates the static library `libftprintf.a`.

### Available Commands

| Command       | Description                                       |
| ------------- | ------------------------------------------------- |
| `make`        | Compiles the library.                             |
| `make clean`  | Removes object files.                             |
| `make fclean` | Removes object files and the compiled library.    |
| `make re`     | Recompiles the project from scratch.              |

### Usage

Include the header file in your C program:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "42");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    return (0);
}
```

Compile your program with the library:

``` bash
cc -Wall -Wextra -Werror main.c -L. -lftprintf -o ft_printf
```

Run the executable:

```bash
./ft_printf
```

## Resources

- [printf(3) — Linux manual page](<https://man7.org/linux/man-pages/man3/printf.3.html>)
- [stdarg.h — Variadic arguments in C](<https://en.cppreference.com/w/c/variadic.html>)
- [C Programming Language Reference](<https://en.cppreference.com/)

