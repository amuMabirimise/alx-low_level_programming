#include <stdio.h>
#include "search_algos.h"

/**
 * print_i - Helper function to print the index during each check.
 * @array: Pointer to the array being checked.
 * @i: Index being checked.
 */
void print_i(int *array, size_t i)
{
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
}

/**
 * interpolation_search - Searches for a value in a sorted array using Interpolation search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	pos = l + (((double)(r - l) / (array[r] - array[l]))
		   * (value - array[l]));
	while (pos < size)
	{
		print_i(array, pos);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			l = pos + 1;
		else
			r = pos - 1;
		pos = l + (((double)(r - l) / (array[r] - array[l]))
			   * (value - array[l]));
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
