#include "main.h"

/**
 * *_memset - fhviufhd
 * @s: xcbscdhb
 * @b: fedihsdvbfsvu
 * @n: chgdfusaygf
 * Return: sdfisiyfh
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}

	return (s);
}
