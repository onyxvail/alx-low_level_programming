#include <stdio.h>
#include <unistd.h>

/**
*main - prints the lowercase alphabet in reverse
*followed by a new line
*Return: Always 0 (Success)
*/

int main(void)
{
int b;
for (b = 'z'; b >= 'a'; b--)
{
putchar(b);
}
putchar('\n');
return (0);
}
