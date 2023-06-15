#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1 = strlen(s1);
	unsigned int length2 = strlen(s2);
	unsigned int totalLength = length1 + n;
	unsigned int i = 0;
	unsigned int j = 0;
	char *concat;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= length2)
	{
		n = length2;
	}

	concat = (char *)malloc((totalLength + 1) * sizeof(char));

	if (concat == NULL)
	{
        	return (NULL);
	}

	while (s1[i] != '\0')
	{
	concat[i] = s1[i];
	i++;
	}

	while (j < n && s2[j] != '\0')
	{
		concat[i] = s2[j];
		i++;
		j++;
	}

	concat[i] = '\0';

	return (concat);
}
