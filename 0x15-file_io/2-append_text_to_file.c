#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: Name of the file
 * @text_content: Text to append
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, ret, len;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

if (text_content == NULL)
return (1);

for (len = 0; text_content[len] != '\0'; len++)
;

ret = write(fd, text_content, len);
close(fd);

if (ret == -1)
return (-1);

return (1);
}
