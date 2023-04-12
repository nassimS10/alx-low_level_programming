#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Entr
 *@grid: row
 *@height: colum
 * Return: integers or null
 */
void free_grid(int **grid, int height)
{
	int j;
	int *pt;

	for (j = 0; j < height; j++)
	{
		pt = grid[j];
		free(pt);
	}
	free(grid);
}
