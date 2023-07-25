#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - fbvhifhdvbihbv
 * Return: zero
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
	putchar(2272 - sum);
	return (0);
}
