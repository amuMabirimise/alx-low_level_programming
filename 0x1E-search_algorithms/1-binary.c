#include <stdio.h>

/**
 * binary_search - function to perform binary search in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;
	size_t i = left;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (left <= right)
	{
		printf("Searching in array: ");

	while (i < right)
	{
		printf("%d, ", array[i]);
		i++;
	}
	printf("%d\n", array[i]);

	mid = (left + right) / 2;

	if (array[mid] == value)
	{
		return ((int)mid);
	} else if (array[mid] < value)
	{
		left = mid + 1;
	} else
	{
		 right = mid - 1;
	}
	}

	return (-1);
}
