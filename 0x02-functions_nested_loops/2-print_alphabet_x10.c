#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char la;

	int i = 0;

		while (i < 10)
		{
			la = 'a';
		
				while (la <= 'z')
				{
					_putchar(la);
					la++;
				}
				_putchar ('\n');
				i++;
		}
}
