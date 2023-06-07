#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - a function that returns the value of x raised to the power of y
 * @x: input
 * @y: input
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	int result = 1;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	while (y > 0)
	{
		result *= x;
		y--;
	}

	return (result);	

}
