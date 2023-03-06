#include "main.h"
#include <stdio.h>

/**
 * _strchr - Returns a pointer to the first occurrence
 * @s: value
 * @c: value
 * @null: value
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}
	if (c == '\0')
	{
	return (s);
	}
	return (c);
}
