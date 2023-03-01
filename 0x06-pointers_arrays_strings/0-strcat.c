#include <stdio.h>
#include "main.h"

/**
 * main - A function that concatenates two strings
 *
 * Return: 0
 */

int main(void)
{
	char s1[50];
	char s2[50];
	char *p1;
	char *p2;

	_putchar("\n, s1");
	gets(s1);
	_putchar("\n, s2");
	gets(s2);

	p1 = s1;
	while (*p1 != '\0')
	{
		++p1;
	}

	p2 = s2;
	while (*p2 != '\0')
	{
	p1 = p2;
	p1++;
	p2++;
	}
	*p1 = '\0';
	_putchar("\nConcatenated String = %s", s1);
	return (0);
}
