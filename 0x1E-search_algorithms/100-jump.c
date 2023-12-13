#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t i = prev - step;
	
	if (array == NULL || size == 0)
	return (-1);

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

	while (prev < size && array[prev] < value)
	{
		if (prev + step < size)
		{
			prev += step;
			printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		}
		else
		break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);

	while (i <= (prev < size ? prev : size - 1))
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		return (i);
		i++;
	
	}
		return (-1);
}

