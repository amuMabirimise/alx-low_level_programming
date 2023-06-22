#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list args;
	va_start(args, n);

	while (i < n)
	{
		char *str = va_arg(args, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		
		if (separator != NULL && i < n - 1)
		{
		
			printf("%s", separator);
		}

		i++;
	}
	printf("\n");

	va_end(args);
}
