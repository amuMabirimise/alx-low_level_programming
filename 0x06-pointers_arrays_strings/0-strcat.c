#include <stdio.h>
#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 *
 * Return: void
 */

char *_strcat(char *dest, char *src, int n)
{
	int s1
	int s2

	s1 = 0;
	while (dest[s1]!= '\0')
	{
		s1++;
	}

	s2 = 0;
	while (src[s2] != '\0')
	{
		dest[s1] != src[s2];
		s1++;
		s2++;
	}
	dest[s1] = '\0';
	return (dest);
}
