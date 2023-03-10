
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * main - prints a function str
 * @argv: value
 * @argc: input
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
	for (int i = 1; i < argc; i++)
	{
	char *s = argv[i];
	int j = 0;

	while (s[j])
	{
	if (!isdigit(s[j]))
	{
	printf("Error\n");
	return (1);
	}
	j++;
	}
	sum += atoi(s);
	}
	printf("%d\n", sum);
	return (0);
}
