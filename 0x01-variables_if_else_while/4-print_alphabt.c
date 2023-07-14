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
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
