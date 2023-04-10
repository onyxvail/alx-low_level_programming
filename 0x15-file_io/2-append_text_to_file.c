#include "main.h"

/**
 * _strlen - finds the length of a string
 * @str: pointer to the string
 * Return: length of the string
 */

size_t _strlen(char *str)
{
size_t len = 0;
while (str[len])
len++;
return (len);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, len;

if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

len = text_content ? write(fd, text_content, _strlen(text_content)) : 0;
close(fd);

return (len == -1 ? -1 : 1);
}
