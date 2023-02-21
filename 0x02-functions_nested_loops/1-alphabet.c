#include "main.h"
/**
 * main - print all alaphabets
 *
 * Return: Always 0.
 */
void print_alphabet(void);
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);

	_putchar('\n');
}
