#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *concat;
	const char *empty = "";

	const char *str1 = s1 != NULL ? s1 : empty;
	const char *str2 = s2 != NULL ? s2 : empty;

	concat = (char *)malloc((len1 = len2 + 1)* sizeof(char));

	if (concat == NULL)
	{
		printf("Memory allocation failed.\n");
		return (NULL);
	}

	strcpy(concat, str1);
	strcat(concat, str2);

	return (concat);
}
