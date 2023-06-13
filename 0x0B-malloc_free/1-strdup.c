#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be duplicated
 * Return: NULL if str = NULL, pointer upon success
 */
char *_strdup(char *str)
{
	int len_str = 0;
	char *new_array, *ptr;

	if (str == NULL)
	return (NULL);

	while (str[len_str] != '\0')
	len_str++;

	new_array = malloc((len_str + 1) * sizeof(char));
	if (new_array == NULL)
	return (NULL);

	ptr = new_array;

	while (*str != '\0')
	{
	*ptr = *str;
	ptr++;
	str++;
	}

	*ptr = '\0';

	return (new_array);
}
