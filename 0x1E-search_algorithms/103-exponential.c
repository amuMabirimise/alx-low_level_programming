#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array using Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t low = bound / 2;
	size_t high = (bound < size) ? bound : size - 1;
	
	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}

	while (bound < size && array[bound] < value)
	{
	printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
	bound *= 2;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (binary_search(array, low, high, value));
}

/**
 * binary_search - Searches for a value in a sorted array using Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @low: Lower bound of the search interval
 * @high: Upper bound of the search interval
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid = (low + high) / 2;

	while (low <= high)
	{
		printf("Searching in array: ");
	for (size_t i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
		printf(", ");
	}
	printf("\n");

	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		low = mid + 1;
	else
		high = mid - 1;
	}

	return (-1);
}
