#include "main.h"

/**
 * factorial: jfdvhnfu
 * @n: fdishniufh
 * Return: dvchjb
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));

}
