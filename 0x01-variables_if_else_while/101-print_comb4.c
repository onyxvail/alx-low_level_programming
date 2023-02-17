#include <stdio.h>
#include <unistd.h>

/**
*main - prints all possible different combinations of three digits
*
*Return: Always 0 (Success)
*/

int main(void)
{
int b, i, m;
for (b = '0'; b <= '9'; b++)
{
for (i = '0'; i <= '9'; i++)
{
for (m = '0'; m <= '9'; m++)
{
if (b < i && i < m)
{
putchar(b);
putchar(i);
putchar(m);
if (b != '7')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
