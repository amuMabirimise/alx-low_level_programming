#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - Write a function that prints a string in reverse
 * @s: input
 * Return: always 0
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
