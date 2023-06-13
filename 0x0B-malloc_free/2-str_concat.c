#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat-  concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer should point to a newly allocated space in memory
 * which contains the contents of s1
 * followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0;
	char *new_array, *ptr;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[len_s1] != '\0')
	len_s1++;

	while (s2[len_s2] != '\0')
	len_s2++;

	new_array = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (new_array == NULL)
	{
	return (NULL);
	}

	ptr = new_array;

	while (*s1 != '\0')
	{
	*ptr = *s1;
	ptr++;
	s1++;
	}

	while (*s2 != '\0')
	{
	*ptr = *s2;
	ptr++;
	s2++;
	}

	*ptr = '\0';

	return (new_array);
}
