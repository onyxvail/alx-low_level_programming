#include "main.h"

/**
 * _islower - that checks for lowercase character
 *@c: int that return the lowercase char
 *Return:1 if c is lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
