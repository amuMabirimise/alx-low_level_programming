#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _pow_recursion -returns the value of x raised to the power of y
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

	result = pow(x, y);

	return (result);


}
