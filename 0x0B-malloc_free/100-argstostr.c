#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates old to new, set conditions from problem
 * @ptr: pointer to memory prev alloc, must free end
 * @old_size: input old
 * @new_size: input new
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *dest, *src;
	unsigned int i;

	if (new_size == old_size)
	return (ptr);

	if (ptr == NULL)
	{
	ptr = malloc(new_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}

	dest = malloc(new_size);
	if (dest == NULL)
	return (NULL);

	src = ptr;
	i = 0;

	while (i < new_size && i < old_size)
	{
	dest[i] = src[i];
	i++;
	}

	free(ptr);

	return (dest);
}
