#include <stdio.h>

/**
 * _sqrt_recursion - a function that returns the natural square root of a number
 * @n: input number
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return -1;
	}
	else if (n == 0 || n == 1)
	{
	return n;
	}
	else
	{
	int start = 1;
	int end = n;
	int result = -1;

        while (start <= end)
	{
		int mid = (start + end) / 2;

		if (mid * mid == n)
		{
		return mid;
		}
		else if (mid * mid < n)
		{
		start = mid + 1;
		result = mid;
		}
		else
		{
		end = mid - 1;
		}
	}

	return result;
	}
}
