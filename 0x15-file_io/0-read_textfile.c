#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 * @filename: A pointer to the name of the file
 * @letters: The number of letters the function should read and print
 * Return: If the function fails or filename is NULL - 0.
 *Otherwise - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, r, w, total = 0;
char *buf;

if (filename == NULL)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buf);
return (0);
}

while ((r = read(fd, buf + total, letters - total)) > 0 &&
total < (int) letters)
total += r;

w = write(STDOUT_FILENO, buf, total);
free(buf);

if (w == -1 || w != total)
return (0);

close(fd);
return (w);
}
