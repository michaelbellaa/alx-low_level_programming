#include "main.h"

/**
 * _isuper - check if c is upper
 *
 * @c: input for alphabet
 *
 * Return: 1 if its uppercase, 0 if not
*/

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
		return (1);
	else
		return (0);
}
