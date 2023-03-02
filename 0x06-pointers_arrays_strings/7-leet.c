#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */

char *leet(char *str)
{
	char *result = (char *) malloc(strlen(str) + 1); // allocate memory for the result string
	if (result == NULL) { // check if allocation was successful
	printf("Memory allocation failed.");
	exit(1);
	}
	int i, j;
	for (i = 0, j = 0; str[i] != '\0'; i++, j++) { // loop through the input string
	if (str[i] == 'a' || str[i] == 'A') {
	result[j] = '4';
	} else if (str[i] == 'e' || str[i] == 'E') {
	result[j] = '3';
	} else if (str[i] == 'o' || str[i] == 'O') {
	result[j] = '0';
	} else if (str[i] == 't' || str[i] == 'T') {
	result[j] = '7';
	} else if (str[i] == 'l' || str[i] == 'L') {
	result[j] = '1';
	} else {
	result[j] = str[i];
	}
	}
	result[j] = '\0'; // add null terminator to the end of the result string
	return (result);
}
