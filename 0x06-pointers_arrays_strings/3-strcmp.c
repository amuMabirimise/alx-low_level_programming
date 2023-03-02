#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings which are similar
 * @s1:second value
 * @s2: third value
 * Return:pointer to the resulting string
*/
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
