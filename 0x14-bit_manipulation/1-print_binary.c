#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */

void print_binary(unsigned long int n)
{
unsigned long int temp = n;
int shifts = 0;
if (n == 0)
{
printf("0");
return;
}

while (temp > 0)
{
temp >>= 1;
shifts++;
}
while (--shifts >= 0)
{
if ((n >> shifts) &1)
printf("1");
else
printf("0");
}
}
