#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters except q and e:wq:
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'z';

	while (ch  >=  'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
