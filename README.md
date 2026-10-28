*This project has been created as part of the 42 curriculum by ssaavedr.*
 
# Libft
 
## Description
 
Libft is the first project of the 42 curriculum's C track. The goal is to
build from scratch a C library (`libft.a`) that re-implements a set of
standard `libc` functions and adds a collection of general-purpose utilities
that will be reused in later projects of the cursus.
 
The library is organised in three parts:
 
1. **libc functions** – re-implementations of standard functions, with the same
   prototypes and behaviour as the originals described in their `man` pages
   (only the `ft_` prefix is added).
2. **Additional functions** – string, memory and file-descriptor utilities that
   are either not part of `libc` or are implemented differently.
3. **Linked lists** – a minimal singly linked list API built on top of the
   `t_list` structure.

### Project constraints
 
- Written in C, following the 42 Norm.
- Compiled with `cc -Wall -Wextra -Werror`.
- No global variables; helper functions are declared `static`.
- No unexpected crashes (segfault, double free, etc.) and no memory leaks.
- The library is built with `ar` (`libtool` is not allowed).
- `libft.a` is generated at the root of the repository, and the Makefile does
  not relink.

### Library overview
 
#### Part 1 – libc functions
 
| Category | Functions |
|---|---|
| Character checks (return `1` / `0`) | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| String inspection | `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr` |
| String copy / concatenation | `ft_strlcpy`, `ft_strlcat` |
| Memory manipulation | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` |
| Conversion | `ft_atoi` |
| Allocation (use `malloc`) | `ft_calloc`, `ft_strdup` |
 
#### Part 2 – Additional functions
 
| Function | Description |
|---|---|
| `ft_substr` | Allocates and returns a substring of `s`, starting at index `start`, with a maximum length `len`. |
| `ft_strjoin` | Allocates and returns a new string that is the concatenation of `s1` and `s2`. |
| `ft_strtrim` | Allocates and returns a copy of `s1` with the characters in `set` removed from the beginning and the end. |
| `ft_split` | Splits `s` using `c` as delimiter. Returns a `NULL`-terminated array of freshly allocated strings. |
| `ft_itoa` | Allocates and returns the string representation of an integer (handles negative numbers). |
| `ft_strmapi` | Applies `f(index, char)` to every character of `s` and returns a new string with the results. |
| `ft_striteri` | Applies `f(index, &char)` to every character of `s` in place. |
| `ft_putchar_fd` | Writes a character to the given file descriptor. |
| `ft_putstr_fd` | Writes a string to the given file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to the given file descriptor. |
| `ft_putnbr_fd` | Writes an integer to the given file descriptor. |
 
#### Part 3 – Linked lists
 
The following structure is defined in `libft.h`:
 
```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;
```
 
| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node with the given content; `next` is set to `NULL`. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstsize` | Counts the number of nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstdelone` | Frees one node's content (using `del`) and the node itself, without touching the next one. |
| `ft_lstclear` | Deletes and frees a node and all its successors, then sets the list pointer to `NULL`. |
| `ft_lstiter` | Applies a function to the content of every node. |
| `ft_lstmap` | Builds a new list by applying a function to each node's content; uses `del` to clean up if an allocation fails. |
 
### Implementation notes
 
- `ft_calloc` returns a unique pointer that can be passed to `free()` even if
  `nmemb` or `size` is `0`, and returns `NULL` if `nmemb * size` would overflow.
- `ft_putnbr_fd` handles `INT_MIN` explicitly, without using `long` casts.
- Auxiliary functions (for example the word-counting and word-copying helpers
  used by `ft_split`) are `static`, so they are only visible in their own file.

## Instructions
 
### Requirements
 
- A C compiler (`cc`), `make` and `ar`.

### Compilation
 
From the root of the repository:
 
```sh
make          # builds libft.a
make clean    # removes the object files
make fclean   # removes the object files and libft.a
make re       # fclean + all
```
 
Running `make` a second time does not recompile or relink anything if no source
file has changed.
 
### Usage
 
1. Include the header in your source file:
```c
   #include "libft.h"
```
 
2. Compile your program and link it against the library:
```sh
   cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```
 
   (or `cc ... main.c libft.a -o my_program`; add `-I<path>` if `libft.h` is
   in another directory).
 
### Example
 
```c
#include "libft.h"
#include <stdlib.h>

int	main(void)
{
	char	*raw_input;
	char	*clean_str;
	char	*greeting;

	raw_input = "   ### Welcome to 42 Madrid! ###   ";
	clean_str = ft_strtrim(raw_input, " #");
	if (!clean_str)
		return (1);
	greeting = ft_strjoin(clean_str, " - ssaavedr\n");
	free(clean_str);
	if (!greeting)
		return (1);
	ft_putstr_fd(greeting, 1);
	free(greeting);
	return (0);
}
```
 
### Testing
 
Test programs are not part of the submission. A good approach is to write your
own `main.c` and compare each function against the system version. Note that
`strlcpy`, `strlcat` and `bzero` may require `#include <bsd/string.h>` and
`-lbsd` on glibc-based systems. Use `valgrind` (or `-fsanitize=address`) to
check for memory leaks and invalid accesses.
 
## Resources
 
### References
 
- `man 3` pages of every re-implemented function (`man 3 strlen`,
  `man 3 memmove`, `man 3 strlcpy`, …).
- [The GNU C Library documentation](https://www.gnu.org/software/libc/manual/)
- Kernighan & Ritchie, *The C Programming Language* (2nd edition).
- [GNU Make manual](https://www.gnu.org/software/make/manual/make.html)

### Use of AI
 
In line with the project's AI guidelines, all the library code (the C source
files, `libft.h` and the `Makefile`) was written by me. AI was used
only to help structure this `README.md`. I reviewed the result and I am able to
explain every part of it.