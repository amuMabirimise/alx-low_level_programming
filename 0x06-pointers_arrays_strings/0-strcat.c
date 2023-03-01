#include <stdio.h>
#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: first param
 * @src: second param
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, g;

	while (dest[len])
		len++;

	for (g = 0; src[g] != '\0'; i++)
	{
		dest[len] = src[g];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
