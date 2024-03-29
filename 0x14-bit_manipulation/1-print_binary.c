#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 */

void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << 63;
int flag = 0;

/* Print the binary representation of the number */
while (mask != 0)
{
if ((mask & n) != 0 || flag == 1)
{
if ((mask & n) != 0)
_putchar('1');
else
_putchar('0');

flag = 1;
}

mask = mask >> 1;
}

if (flag == 0)
_putchar('0');
}
