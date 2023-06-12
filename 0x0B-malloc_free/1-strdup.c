#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char* _strdup(char* str)
{
	size_t length = strlen(str) + 1;
	char* new_str = (char*)malloc(length * sizeof(char));

	if (str == NULL)
	{
	return (NULL);
	}
    
    
	if (new_str == NULL)
	{
	return (NULL);
	}
    
	strcpy(new_str, str);
	return (new_str);
}
