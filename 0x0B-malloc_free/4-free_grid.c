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
	int i;
	i = 0;

	while (i < height)
	{
		free(grid[i]);
	}
	free(grid);
}
