#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list args;

	va_start(args, n);

	while (i < n)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
