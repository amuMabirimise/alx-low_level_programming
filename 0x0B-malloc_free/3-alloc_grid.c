#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **amu;
	int x,y;
	x = 0;
	y = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	amu = malloc(sizeof(int *) * height);

	if (amu == NULL)
		return (NULL);

	while (x < height)
	{
		amu[x] = malloc(sizeof(int) * width);
		x++;

		if (amu[x] == NULL)
		{
			while (x >= 0)
			{
				free(amu[x]);
				x--;
			}
			free(amu);
			return (NULL);
		}
		x++;
	}
	while (x < height)
	{
		while (y < width)
		{
			amu[x][y] = 0;
			y++;
		}
		x++;
	}
	return (amu);
}
