#include "main.h"

/**
 * _strcmp - dshfbrevc
 *
 * @s1: fdhbsdhvcbdvc
 * @s2: cdbchwbgydwcvu
 * Return: iwufhdifhweyvfbcyw
*/


int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
				break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
