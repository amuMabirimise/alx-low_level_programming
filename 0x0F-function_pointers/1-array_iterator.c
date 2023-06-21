#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator- executes a function given as a parameter
 * on each element of an array
 * @size: size of the array
 * @action:pointer to the function you need to use
 * @array: array
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int element;

	if (array && action)
	element = 0;
	while (element < size)
	{
		action(array[element]);
		element++;
	}
}
