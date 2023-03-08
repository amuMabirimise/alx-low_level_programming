#include <stdio.h>
#include "main.h"
#include <strings.h>
/**
 * int factorial - function that returns the factorial of given number
 * @n: input
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
	{
        return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	int result = 1;

	for (int i = 1; i <= n; i++)
	{
	result *= i;
	}
	return (result);
	}
}
