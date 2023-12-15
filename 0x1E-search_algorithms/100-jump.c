#include "search_algos.h"
#include <math.h>

/**
 * min - Returns the smaller of two values.
 * @step: The first value (step).
 * @size: The second value (max array limit).
 *
 * Return: The smaller of the two values.
 */
size_t min(size_t step, size_t size)
{
	if (step <= size)
		return (step);
	return (size);
}

/**
 * jump_search - Searches for a value in a sorted array using the Jump search algorithm.
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not present or array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step;
	size_t prev = 0;

	if (!array || size == 0)
		return (-1);
	step = sqrt(size);
	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;
		if (prev >= size)
			break;
	}
	prev -= step;
	printf("Value found between indexes [%lu] and [%lu]\n", prev, prev + step);
	while (array[prev] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
		if (prev == size)
			return (-1);
	}
	return (-1);
}
