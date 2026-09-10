# Libft

## Description

Libft is a C library that I created as part of the 42 curriculum. The main goal of the project is to recreate some standard C library functions and create additional functions that can be useful in future projects.

The project helped me practice pointers, strings, memory allocation, file descriptors and linked lists.

The library is compiled into a static library called `libft.a`.

---

## Part 1 - Libc Functions

### Character Functions

| Function     | Description                                               |
| ------------ | --------------------------------------------------------- |
| `ft_isalpha` | Checks if a character is an alphabetic character.         |
| `ft_isdigit` | Checks if a character is a digit from `0` to `9`.         |
| `ft_isalnum` | Checks if a character is either alphabetic or numeric.    |
| `ft_isascii` | Checks if a character belongs to the ASCII character set. |
| `ft_isprint` | Checks if a character is printable.                       |

### String and Memory Functions

| Function     | Description                                                   |
| ------------ | ------------------------------------------------------------- |
| `ft_strlen`  | Returns the length of a string.                               |
| `ft_memset`  | Fills a memory area with a specific byte value.               |
| `ft_bzero`   | Sets a given number of bytes in memory to zero.               |
| `ft_memcpy`  | Copies a number of bytes from one memory area to another.     |
| `ft_memmove` | Copies memory while handling overlapping memory areas safely. |
| `ft_strlcpy` | Copies a string into a destination buffer with a size limit.  |
| `ft_strlcat` | Appends a string to another string with a size limit.         |
| `ft_memchr`  | Searches for a byte in a memory area.                         |
| `ft_memcmp`  | Compares two memory areas byte by byte.                       |

### String Search and Comparison

| Function     | Description                                                           |
| ------------ | --------------------------------------------------------------------- |
| `ft_strchr`  | Finds the first occurrence of a character in a string.                |
| `ft_strrchr` | Finds the last occurrence of a character in a string.                 |
| `ft_strncmp` | Compares two strings up to a specified number of characters.          |
| `ft_strnstr` | Searches for a string inside another string up to a specified length. |

### Character Conversion

| Function     | Description                                |
| ------------ | ------------------------------------------ |
| `ft_toupper` | Converts a lowercase letter to uppercase.  |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

### Number and Memory Allocation

| Function    | Description                                              |
| ----------- | -------------------------------------------------------- |
| `ft_atoi`   | Converts a string representing an integer into an `int`. |
| `ft_calloc` | Allocates memory and initializes all bytes to zero.      |
| `ft_strdup` | Creates a newly allocated copy of a string.              |

---

## Part 2 - Additional Functions

These functions are not direct copies of the standard functions. They are additional tools for working with strings and output.

| Function        | Description                                                                                      |
| --------------- | ------------------------------------------------------------------------------------------------ |
| `ft_substr`     | Creates a new string from a part of another string, starting at a given index.                   |
| `ft_strjoin`    | Creates a new string by joining two strings together.                                            |
| `ft_strtrim`    | Removes characters from the beginning and end of a string if they are contained in a given set.  |
| `ft_split`      | Splits a string into an array of strings using a delimiter character.                            |
| `ft_itoa`       | Converts an integer into a string.                                                               |
| `ft_strmapi`    | Applies a function to every character of a string and creates a new string with the results.     |
| `ft_striteri`   | Applies a function to every character of a string and allows the original string to be modified. |
| `ft_putchar_fd` | Writes a single character to a given file descriptor.                                            |
| `ft_putstr_fd`  | Writes a string to a given file descriptor.                                                      |
| `ft_putendl_fd` | Writes a string followed by a newline to a given file descriptor.                                |
| `ft_putnbr_fd`  | Writes an integer to a given file descriptor.                                                    |

---

## Part 3 - Linked Lists

For the linked list part, I used the `t_list` structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

The `content` member is a `void *`, so the list can store different types of data. The `next` member points to the next node in the list.

| Function          | Description                                                           |
| ----------------- | --------------------------------------------------------------------- |
| `ft_lstnew`       | Allocates and creates a new list node with the given content.         |
| `ft_lstadd_front` | Adds a new node to the beginning of a list.                           |
| `ft_lstsize`      | Counts and returns the number of nodes in a list.                     |
| `ft_lstlast`      | Returns the last node of a list.                                      |
| `ft_lstadd_back`  | Adds a new node to the end of a list.                                 |
| `ft_lstdelone`    | Deletes one node and frees its content using a given delete function. |
| `ft_lstclear`     | Deletes and frees a node and all the nodes after it.                  |
| `ft_lstiter`      | Applies a function to the content of every node in a list.            |
| `ft_lstmap`       | Creates a new list by applying a function to every node's content.    |

---

## Compilation

The project includes a Makefile that compiles all source files and creates `libft.a`.

To compile the library:

```bash
make
```

The following commands are also available:

```bash
make clean
make fclean
make re
```

* `make clean` removes the object files.
* `make fclean` removes the object files and `libft.a`.
* `make re` removes everything and recompiles the library.

The project is compiled with:

```text
-Wall -Wextra -Werror
```

and `ar` is used to create the static library.

---

## Usage

To use Libft in another C project, include the header:

```c
#include "libft.h"
```

Then compile the program with the library:

```bash
cc main.c -L. -lft
```

---

## Resources

I used the 42 Libft subject, `man` pages and C documentation while working on the project.

Some of the functions can be checked with commands such as:

```bash
man strlen
man memcpy
man memset
man malloc
man free
```
and many more.