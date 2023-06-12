#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = (char *)malloc(size * sizeof(char));
	if (size == 0 || str == NULL)
		return (NULL);

	while ( i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
