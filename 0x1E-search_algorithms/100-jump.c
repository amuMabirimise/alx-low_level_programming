#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not present or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, current;

	if (!array || size == 0)
		return (-1);

	step = sqrt(size);
	prev = 0;
	current = 0;

	while (current < size && array[current] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", current, array[current]);
		prev = current;
		current += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, min(current, size));

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
	}

	if (prev < size && array[prev] == value)
	{
		printf("Found %d at index: %lu\n", value, prev);
		return (prev);
	}

	printf("Value not present in array\n");
	return (-1);
}

/**
 * min - Returns the smaller of two values
 * @a: First value
 * @b: Second value
 *
 * Return: The smaller of the two values
 */
size_t min(size_t a, size_t b)
{
	return (a < b ? a : b);
}
