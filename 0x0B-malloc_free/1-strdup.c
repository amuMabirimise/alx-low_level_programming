#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - check the code for ALX School students.
 * @str: dynamic value
 *
 * Return: dup
 */

char *_strdup(char *str)
{
	char *dup = malloc(strlen(str) + 1);

	if (str == NULL)
	{
	return (NULL);
	}
	if (dup != NULL)
	{
	strcpy(dup, str);
	return (NULL);
	}
	return (dup);
}
