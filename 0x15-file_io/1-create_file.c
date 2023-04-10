#include "main.h"

/**
 * create_file - creates an array of chars, and initializes
 * @text_content: is a NULL terminated string to write to the file
 * @filename: is the name of the file to create
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
int o, w, len = 0;
char *p = text_content;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (*p)
{
len++;
p++;
}
}

o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = 0;
while (len > 0 && (w = write(o, text_content, len)) > 0)
{
len -= w;
text_content += w;
}
if (o == -1 || w == -1)
return (-1);
close(o);
return (1);
}
