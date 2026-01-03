*This activity has been created as part of the 42 curriculum by rajarada.*

# get_next_line

## Description

In this project, I implemented the function **get_next_line**, which reads a file line by line from a given file descriptor in C.  
The main goal of this activity is to better understand how file descriptors work, how to use static variables, and how to manage memory correctly while reading from files.

Each call to `get_next_line()` returns the next line from the file, including the newline character (`\n`) if it exists.  
The function must work with different values of `BUFFER_SIZE` and must be able to handle multiple file descriptors at the same time.

---

## Instructions

### Project Structure

- `get_next_line.c`  
  Contains the main implementation of the `get_next_line` function.

- `get_next_line_utils.c`  
  Contains helper functions used for string manipulation and memory handling.

- `get_next_line.h`  
  Header file with function prototypes and required macros.

- `main.c` (optional)  
  Used only for testing purposes.

---

### Compilation

To compile the project with a test file, run:

cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c
After compilation, run
./a.out

## Algorithm

The read data is stored in a temporary buffer.

This buffer is appended to a static storage (stash) associated with the file descriptor.

I check if the storage contains a newline character (\n).

If a newline is found:

I extract the line up to and including the newline.

I update the storage to keep only the remaining data.

The extracted line is returned.

## Resources
## References
Linux manual pages:

man read

man open

man close

man limits.h

POSIX documentation

Official 42 get_next_line subject

## Use of AI
AI tools were used as a learning assistant to:

Help me understand file descriptors, BUFFER_SIZE, and OPEN_MAX

Clarify the logic behind buffered reading

Review explanations and improve my understanding of the algorithm
