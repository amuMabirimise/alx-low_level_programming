#include <stdio.h>
/**
 * *_strncpy - function should work exatly like strncpy
 * @src: the source string to append to
 * @dest: the destiation string to be concatenated upon
 *
 * Return:pointer to the resulting string
*/

char *_strncpy(char *dest, const char *src, int n)
{
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++) {
	dest[i] = src[i];
	}
	for ( ; i < n; i++) {
	dest[i] = '\0';
	}
	return dest;
}
