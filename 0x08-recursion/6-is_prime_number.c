#include <stdio.h>

int is_prime_number_helper(int n, int i);

/**
 * is_prime_number - a function that checks if a number is prime
 * @n: input number
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	if (n == 2)
	return (1);

	return (is_prime_number_helper(n, 2));
}

/**
 * is_prime_number_helper - a helper function to check if a number is prime
 * @n: input number
 * @i: divisor to check if n is divisible by i
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number_helper(int n, int i)
{
	if (n % i == 0)
	return (0);

	if (i * i > n)
	return (1);

	return (is_prime_number_helper(n, i + 1));
}
