#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: decimal number
 * @index: index, starting from 0 of the bit you want to get
 *
 * Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8)) /* check if index is valid */
return (-1);
return ((n >> index) & 1);
}
