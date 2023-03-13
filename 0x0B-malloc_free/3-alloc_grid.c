#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - check the code for ALX School students.
 * @width: input
 * @height: input
 * Return: 0.
 */

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}

	int **grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
	return (NULL);
	}
	while (int i = 0; i < height; i++)
	{
	grid[i] = (int *)calloc(width, sizeof(int));
	if (grid[i] == NULL)
	{
	while (int j = 0; j < i; j++)
	{
	free(grid[j]);
	}
	free(grid);
	return (NULL);
	}
	}
	return (grid);
}
