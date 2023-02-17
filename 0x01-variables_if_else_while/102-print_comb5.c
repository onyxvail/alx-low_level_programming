#include <stdio.h>
#include <unistd.h>

/**
*main - prints all possible combinations of two two-digit numbers
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int b, i, m, j;

	for (b = 48; b <= 57; b++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (m = 48; m <= 57; m++)
			{
				for (j = 48; j <= 57; j++)
				{
				if (((m + j) > (b + i) &&  m >= b) || b < m)
				{
					putchar(b);
					putchar(i);
					putchar(' ');
					putchar(m);
					putchar(j);

					if (b + i + m + j == 227 && b == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
