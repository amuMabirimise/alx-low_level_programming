#include "main.h"
#include <string.h>
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s1;
	int s2;

	s1 = 0;
	s2 = 0;
	while (dest[s1] != '\0')
	{
		s1++;
	}
	while (s1 < n && src[s2] != '0\')
	{
		dest[s1] = src[s2];
		s1++
		s2++;
	}
	dest[s1] = '\0';
	return (dest);
}
