#include "main.h"

/**
 * _sqrt_recursion - vfdsuhvfsdihu
 * @n: foidksjnfvcoidvfn
 * @val: dbsdvhb
 * Return: vbfsdhvyb
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - vfsdnvju
 * @val: vfsdnnv
 * @n : d fc vfn
 * Return: sdfhbhsdv
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
