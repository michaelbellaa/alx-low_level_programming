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
	int digit = 0;

	while (digit <= 9)
	{
		putchar (digit + 48);
		if (digit != 9)
		{
		putchar(',');
		putchar(' ');
		}

		digit++;
	}
	putchar('\n');

	return (0);
}
