#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void);
{
	char la;

	for (la = 'a'; la <= 'z'; la++ 10)
		_putchar(la);
	_putchar('\n');
}
