#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - fbvhifhdvbihbv
 * return: zero
*/

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 120;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
