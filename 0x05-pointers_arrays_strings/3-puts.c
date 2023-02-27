#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 *Return: the length of the string
 */

void _puts(char *str)
{
	int i = 0;
	char c;

	while (c = *(str + i) != '\0')
	{
		putchar(c);
		i++;
	}
	_puchar('\n');
}
