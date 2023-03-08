#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - check the code
 *  @sqrt: input
 *  @n: input
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
	if (n % i == 0)
	{
	return (0);
	}
	}
	return (1);
}
