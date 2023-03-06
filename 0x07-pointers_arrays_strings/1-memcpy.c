#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - function copies
 * @src: value
 * @dest: value
 * @n: value
 * Return: desk
 */

#include <stdio.h>

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p++ = *src++;
	}
	return (dest);
}
