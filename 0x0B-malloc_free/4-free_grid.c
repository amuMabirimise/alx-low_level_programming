#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2d array
 * @grid: 2D grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i = height - 1;

	if (grid == NULL)
	return;

	while (i >= 0)
	{
	free(grid[i]);
	i--;
	}

	free(grid);
}