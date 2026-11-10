*This project has been created as part of the 42 curriculum by fcholakk.*

# get_next_line

## Description

`get_next_line` returns one line at a time from a file descriptor. Each call to
`get_next_line(fd)` gives back the next line, including its trailing `\n` if
there is one, and `NULL` when there is nothing left to read or an error occurs.
It works on regular files and on standard input.

```c
char	*get_next_line(int fd);
```

### How it works

The function reads the file in blocks of `BUFFER_SIZE` bytes, but builds the
line **one character at a time**:

1. **Per-fd state (`t_state`)** keeps what must survive between calls: the
   read buffer (`buf`), the position of the next unread byte (`ptr`) and how
   many bytes are left in it (`left`).
2. **Per-call line (`t_line`)** holds the line being built: `data`, `len` and
   `cap`.
3. `fill()` calls `read()` only when the buffer is empty.
4. `push_char()` appends one character to the line and doubles the capacity
   when the line is full, so lines of any length work whatever `BUFFER_SIZE` is.
5. The loop stops when a `\n` is copied, or at end of file. A last line
   without a trailing newline is still returned.
6. The buffer is freed at end of file, on a read error and on a malloc
   failure. A failed call leaves no leaks.

The bonus version keeps one `static t_state st[MAX_FD]`, so each file
descriptor has its own buffer and several files can be read alternately.

### Files

| File | Content |
|------|---------|
| `get_next_line.c`, `get_next_line_utils.c`, `get_next_line.h` | Mandatory part (single fd) |
| `get_next_line_bonus.c`, `get_next_line_utils_bonus.c`, `get_next_line_bonus.h` | Bonus part (several fds, one static variable) |

### Notes

- `BUFFER_SIZE` defaults to 2048 and can be set at compile time with
  `-D BUFFER_SIZE=n`. `MAX_FD` (bonus) defaults to 4096.
- A bad fd (`fd < 0`, or `fd >= MAX_FD` in the bonus) or `BUFFER_SIZE <= 0`
  returns `NULL`.
- The returned line is allocated with `malloc`. The caller must `free` it.
- Allowed functions: `read`, `malloc`, `free`.

## Instructions

### Compile

Mandatory:

```sh
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 main.c get_next_line.c get_next_line_utils.c -o gnl
```

Bonus:

```sh
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 main.c get_next_line_bonus.c get_next_line_utils_bonus.c -o gnl
```

Do not link the mandatory and bonus files together.

### Use

```c
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (0);
}
```

To read from standard input, pass `0` as the fd.

### Test

Try several buffer sizes, including the extremes:

```sh
for n in 1 2 42 9999 10000000; do ./build.sh m $n && ./gnl test.txt; done
```

Run it under valgrind to check for leaks:

```sh
valgrind --leak-check=full ./gnl test.txt
```

## Resources

- `man 2 read`, `man 3 malloc`, `man 3 free`: the only system calls and library
  functions the project may use.
- [Wikipedia - Static variable](https://en.wikipedia.org/wiki/Static_variable)
- [Build Your Own Text Editor](https://viewsourcecode.org/snaptoken/kilo/)