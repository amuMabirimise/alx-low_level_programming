#include "main.h"
#include <stdio.h>

/**
 * _memset - fills the first n bytes of the memory area pointed
 * @n: value
 * @s: memory
 * @b: memory
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*ptr++ = b;
	}
	return (s);
}
