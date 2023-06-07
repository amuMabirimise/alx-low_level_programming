#include <stdio.h>

int sqrt_helper(int n, int start, int end);

/**
 * _sqrt_recursion - a function that returns the square root of a number
 * @n: input number
 * Return: square root of n, -1 if not a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
    
	return (sqrt_helper(n, 0, n));
}

/**
 * sqrt_helper - a helper function to calculate the square root of a number
 * using binary search
 * @n: input number
 * @start: start of the range for binary search
 * @end: end of the range for binary search
 * Return: square root of n, -1 if not a natural square root
 */
int sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (start > end)
	return (-1);
    
	if (mid * mid == n)
	return (mid);
    
	if (mid * mid > n)
	return (sqrt_helper(n, start, mid - 1));
    
	return (sqrt_helper(n, mid + 1, end));
}
