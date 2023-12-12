#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - function to perform linear search in an array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	while (i < size)
	{
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);

	if (array[i] == value)
	{
		return ((int)i);
	}
		i++;
	}

	return (-1);
}
