#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn  - unction that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	char *p = s;

	while (*p && strchr(accept, *p++))
	{
	length++;
	}
	return (length);
}

