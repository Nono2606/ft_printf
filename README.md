*This activity has been created as part of the 42 curriculum by nhussene.*

# ft_printf

## Description

**ft_printf** is a 42 Common Core project whose goal is to recode the `printf()` function from the C standard library. The result is a static library, `libftprintf.a`, exposing a single function:

```c
int ft_printf(const char *format, ...);
```

Like the original, it writes formatted output to the standard output and returns the number of characters printed. The project relies on **variadic functions** (`va_list`, `va_start`, `va_arg`, `va_end`), which makes it a good introduction to how functions with an unknown number of arguments work.

The buffer management of the original `printf()` is intentionally **not** implemented, and the behavior is compared against the real `printf()`.

### Supported conversions

| Conversion | Description |
|------------|-------------|
| `%c` | Prints a single character. |
| `%s` | Prints a string (as defined by the common C convention). |
| `%p` | Prints a `void *` pointer in hexadecimal format. |
| `%d` | Prints a decimal (base 10) number. |
| `%i` | Prints an integer in base 10. |
| `%u` | Prints an unsigned decimal (base 10) number. |
| `%x` | Prints a number in hexadecimal (base 16), lowercase. |
| `%X` | Prints a number in hexadecimal (base 16), uppercase. |
| `%%` | Prints a percent sign. |

## Instructions

### Installation

```bash
git clone <repository_url>
cd <repository_name>
```

### Compilation

The library is built with the `ar` command (`libtool` is forbidden) and is created at the root of the repository.

| Command | Description |
|---------|-------------|
| `make` | Compiles the object files and creates `libftprintf.a`. |
| `make clean` | Deletes the object files. |
| `make fclean` | Runs `clean` and also deletes `libftprintf.a`. |
| `make re` | Runs `fclean` then `all` (full recompilation). |

### Usage

Include the header and link against the library:

```c
#include "ft_printf.h"

int main(void)
{
	int len;

	len = ft_printf("Hello %s, you are %d years old! (%x)\n", "world", 42, 255);
	ft_printf("Printed %d characters\n", len);
	return (0);
}
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lftprintf -o my_program
./my_program
```

## Algorithm and data structure

### Algorithm

`ft_printf` reads the format string **once, from left to right**, in a single loop:

1. If the current character is not `%`, it is written directly to the standard output.
2. If it is `%`, the next character is read and dispatched to the matching handler (`c`, `s`, `p`, `d`, `i`, `u`, `x`, `X`, `%`) according to the conversion specifier.
3. Each handler fetches its argument with `va_arg`, prints it, and returns the number of characters written.
4. The returned values are accumulated into a counter, which is the return value of `ft_printf`.

**Why this approach?**
- A single linear pass is simple, predictable and runs in O(n) on the length of the format string.
- Dispatching on the conversion character keeps each conversion isolated in its own small function, so adding a new conversion only requires a new handler and one new case in the dispatcher.
- Since the buffer management of the original `printf()` is not required, output is written directly with `write()`. This avoids dynamic allocation and the risk of memory leaks, at the cost of more system calls.

**Number conversion.** Numbers are printed with a recursive base conversion: the number is divided by the base, the higher digits are printed first, then the last digit is taken from a base string (`"0123456789"`, `"0123456789abcdef"` or `"0123456789ABCDEF"`). This prints the digits in the right order without needing a temporary array or `malloc`.
- `%d` / `%i`: the sign is handled first, and `INT_MIN` is handled safely by working on a `long`.
- `%u`, `%x`, `%X`: the value is treated as an `unsigned int`.
- `%p`: the pointer is cast to `unsigned long`, printed in lowercase hexadecimal with a `0x` prefix. A `NULL` pointer is printed as `(nil)` to match the behavior of the libc on Linux.
- `%s`: a `NULL` string is printed as `(null)`, like the original `printf()`.

### Data structure

No complex data structure is needed. The only structure used is the **`va_list`**, which gives sequential access to the variadic arguments in the order they were passed, which is exactly the order in which the conversions appear in the format string. Everything else relies on simple types (`int`, `unsigned int`, `unsigned long`, `char *`) and a running `int` counter for the number of printed characters. This keeps the implementation lightweight and free of dynamic memory.

## Resources

### References

- `man 3 printf` and `man 3 stdarg` - reference for the expected behavior of `printf()` and for variadic functions.
- [Koor.fr](https://koor.fr) - documentation on C functions and format specifiers.
- [Stack Overflow](https://stackoverflow.com) - answers and discussions about format specifiers and common pitfalls.
- [OnlineGDB](https://www.onlinegdb.com) - online compiler used for debugging and quick tests.
- [GBDirect](https://publications.gbdirect.co.uk/c_book/chapter9/stdarg.html) - explanation of how `va_list`, `va_start`, `va_arg` and `va_end` work.
- Peers from the 42 community - discussions, test cases and code reviews.

### Use of AI

AI was used only as a support tool for writing this `README.md` (structure, formatting and wording). No AI-generated code was used in the implementation of `ft_printf`; the code was written by me, with the help of the resources and peers listed above.