#include <stdio.h>
#include <unistd.h>

/**
*main - prints all the numbers of base 16
*in lowercase
*followed by a new line
*Return: Always 0 (Success)
*/

int main(void)
{
char c;
char b = '0';
while (b <= '9')
{
putchar(b);
b++;
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
