#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 *
 * Return: sum of all parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;

	va_list args;
	va_start(args, n);
		
	if (n == 0)
	{
		va_end(args);
		return (0);
	}

	while (i < n)
	{
		int num = va_arg(args, int);
		sum += num;
		i++;
	}

	va_end (args);

	return (sum);
}
