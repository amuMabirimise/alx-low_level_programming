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
	char *dest;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	concat = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	dest = concat;

	while (*s1 != '\0')
	{
		*dest = *s1;
		dest++;
		s1++;
	}

	while (*s2 != '\0')
	{
		*dest = *s2;
		dest++;
		s2++;
	}

	*dest = '\0';

	return (concat);
}
