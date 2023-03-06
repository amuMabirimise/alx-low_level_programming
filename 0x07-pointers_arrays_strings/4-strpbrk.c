#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
	char *p = accept;

	while (*p != '\0')
	{
	if (*s == *p)
	{
	return (s);
	}
	p++;
	}
	s++;
	}
	return (NULL);
}
