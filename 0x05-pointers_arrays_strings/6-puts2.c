#include "main.h"

/**
 * puts - prints every character of a string
 *
 * @str:  jsdvfcdgycvweyvc
 *
 * Return: abdscb
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
