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
	int **mee;
	int x = 0, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);
	while (x < height)
	{
		mee[x] = malloc(sizeof(int) * width);
	       
	if (mee[x] == NULL)
	{
		while (x > 0)
		{
			free(mee[x -1]);
			x--;
		}
		free(mee);
		return (NULL);
	}
	x++;
	
	}

	x = 0;

	while (x < height)
	{
		y = 0;
		while(y < width)
		{
			mee[x][y] = 0;
			y++;
		}
		x++;
	}

	return (mee);
}
