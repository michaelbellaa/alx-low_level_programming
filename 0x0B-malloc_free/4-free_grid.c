#include "main.h"

/**
 * free_grid - dcisjahb
 * @grid: dcnwlknc
 * @height: sdchjubfc
 * Return: bdhc
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
