#include <stdio.h>
#include <unistd.h>

/**
*main - prints all possible different combinations of two digits
*
*Return: Always 0 (Success)
*/

int main(void)
{
int b, i;
for (b = '0'; b <= '9'; b++)
{
for (i = '0'; i <= '9'; i++)
{
if (b < i)
{
putchar(b);
putchar(i);
if (b != '8' || (b == '8' && i != '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
