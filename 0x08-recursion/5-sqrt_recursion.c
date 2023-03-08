#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input
 * @low: input
 * @high: input
 * _sqrt: calculate natural square root
 *
 * Return: Always 0.
 */
int _sqrt_helper(int n, int low, int high);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	return (_sqrt_helper(n, 0, n));
}

int _sqrt_helper(int n, int low, int high)
{

	if (low == high)
	{
	if (low * low == n)
	{
	return (low);
	}
	else
	{
	return (-1);
	}
	}

	int mid = (low + high) / 2;

	if (mid * mid == n)
	{
	return (mid);
	}
	else if (mid * mid > n)
	{
	return (_sqrt_helper(n, low, mid - 1));
	}
	else
	{
	return (_sqrt_helper(n, mid + 1, high));
	}
}
