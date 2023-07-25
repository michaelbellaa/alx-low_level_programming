#include "main.h"

/**
 * rev_string - bdhcdc
 *
 * @s: string
 *
 * Return: nothing
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	/*find string length*/
	for (l = 0; s[l] != '\0'; ++l)
		;

	/*swao the string*/
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
