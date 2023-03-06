#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
	return (haystack);
	}
	while (*haystack != '\0')
	{

	char *h = haystack;
	char *n = needle;

	while (*n != '\0' && *h == *n)
	{
	h++;
	n++;
	}
	if (*n == '\0')
	{
	return (haystack);
	}
	haystack++;
	}
	return (NULL);
}
