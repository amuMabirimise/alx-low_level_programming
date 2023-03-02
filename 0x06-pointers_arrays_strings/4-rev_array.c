#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
#include <stdio.h>

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
	}
	}

	int main(void)
	{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	int i;

	printf("Original array: ");
	for (i = 0; i < n; i++)
	{
	printf("%d ", arr[i]);
	}
	printf("\n");

	reverse_array(arr, n);

	printf("Reversed array: ");
	for (i = 0; i < n; i++)
	printf("%d ", arr[i]);
	}
	printf("\n");

	return (0);
}
