#include "main.h"

/**
 * _puts_recursion - fscv fsg
 * @s :fjdnvijvbnfid
 * Return: fvnjfdv
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0')
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
