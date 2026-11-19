*This activity has been created as part of the 42 curriculum by nhussene.*

# Libft

## Description

**Libft** is the first project of the 42 Common Core. The goal is to build our own C library, `libft.a`, containing a set of general-purpose functions that we will reuse in all our future projects.

The project is restricted: we cannot use existing library functions unless explicitly allowed (for example `write()`, `malloc()` and `free()`). Everything else has to be rewritten from scratch.

The library is split into three parts:

### Part 1 - Libc functions

Re-creation of standard libc functions. They have the same prototypes (prefixed with `ft_`) and the same behavior as the originals, as described in their man pages.

| Category | Functions |
|----------|-----------|
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Strings | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Conversion | `ft_atoi` |

### Part 2 - Additional functions

Functions that are either not in the libc, or are part of it in a different form.

| Function | Description |
|----------|-------------|
| `ft_substr` | Extracts a substring from a string. |
| `ft_strjoin` | Concatenates two strings into a new one. |
| `ft_strtrim` | Trims a set of characters from the beginning and end of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter. |
| `ft_itoa` | Converts an integer to a string. |
| `ft_strmapi` | Applies a function to each character of a string and returns a new string. |
| `ft_striteri` | Applies a function to each character of a string (with its index). |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### Part 3 - Linked list functions

Functions to manipulate linked lists, using the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new node. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Counts the number of nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Deletes a single node, using a function to free its content. |
| `ft_lstclear` | Deletes and frees a node and all the nodes after it. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Applies a function to each node and creates a new list from the results. |

## Instructions

### Installation

```bash
git clone 
cd libft
```

### Compilation

| Command | Description |
|---------|-------------|
| `make` | Compiles the object files and creates the library `libft.a`. |
| `make clean` | Deletes the object files. |
| `make fclean` | Runs `clean` and also deletes the library. |
| `make re` | Runs `fclean` then `all` (full recompilation). |

### Usage

Include the header in your source file and link against the library when compiling:

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Resources

### References

- [Koor.fr](https://koor.fr) - documentation on how each function works and what it must return, with example `main` setups.
- Linux man pages (`man 3 <function>`) - reference for the expected behavior of the libc functions.
- [OnlineGDB](https://www.onlinegdb.com) - online compiler used for debugging and quick tests.
- Peers from the 42 community - discussions, test ideas and code reviews.

### Use of AI

AI was used only as a support tool for writing this `README.md` (structure and formatting). No AI-generated code was used in the functions of the library; the code was written by me, with the help of the resources and peers listed above.
