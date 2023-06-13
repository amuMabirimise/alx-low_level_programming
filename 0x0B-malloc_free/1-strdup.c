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
	int i = 0;
	int r = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	duplicate = (char *)malloc((len + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	while (str[r] != '\0')
	{
		duplicate[r] = str[r];
		r++;
	}

	strcpy(duplicate, str);
	return (duplicate);

}
