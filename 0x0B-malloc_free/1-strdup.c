#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	size_t len = strlen(str);
	char *duplicate;

	if (str == NULL)
		return NULL;
	duplicate = (char *)malloc((len + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);
	return (duplicate);

}
