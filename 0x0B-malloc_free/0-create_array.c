#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array -  creates an array of chars, and initializes.
 * @size: dynamic value
 * @c: dynamic value
 * Return: array
 */

char *create_array(unsigned int size, char c);
{
	char *array = malloc(size * sizeof(char c));
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
