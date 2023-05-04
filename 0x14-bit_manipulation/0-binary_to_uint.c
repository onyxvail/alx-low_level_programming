#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 characters
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int final_result = 0;

	/* check if input is NULL */
	if (b == NULL)
		return (0);

	/* iterate through the string until a null character is reached */
	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		/* left shift the final_result by 1 bit and add the current bit */
		final_result = (final_result << 1) + (*b - '0');
	}

	return (final_result);
}
