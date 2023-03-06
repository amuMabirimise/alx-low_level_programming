#include "main.h"
#include <stdio.h>

/**
 * _memset() - fills the first n bytes of the memory area pointed 
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
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
