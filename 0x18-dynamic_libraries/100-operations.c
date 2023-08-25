#include "main.h"
#include <stdio.h>
/**
 * add - Adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Sum of @a and @b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Difference between @a and @b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Product of @a and @b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers
 * @a: First integer
 * @b: Second integer (non-zero)
 *
 * Return: Result of @a divided by @b
 */
int custom_div(int a, int b)
{
	return (a / b);
}

/**
 * mod - Computes the modulo of two integers
 * @a: First integer
 * @b: Second integer (non-zero)
 *
 * Return: Remainder of @a divided by @b
 */
int mod(int a, int b)
{
	return (a % b);
}
