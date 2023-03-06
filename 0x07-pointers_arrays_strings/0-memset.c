#include "main.h"
#include <stdio.h>

/**
 * _memset(): fills the first n bytes of the memory area pointed to by s with the constant byte b 
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: s
 */

#include <stdio.h>

char *_memset(char *s, char b, unsigned int n)
{
    for (unsigned int i = 0; i < n; i++)
	{
        s[i] = b;
	}
	return s;
	}

int main()
{
	char str[20] = "Hello, world!";
	printf("Before memset: %s\n", str);
	_memset(str, '$', 7);
	printf("After memset: %s\n", str);
	return 0;
}
