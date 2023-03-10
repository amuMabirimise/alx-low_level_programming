
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
	int i = 1;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	while (i < argc)
	{
	for (int j = 0; argv[i][j] != '\0'; j++)
	{
	if (!isdigit(argv[i][j]))
	{
	printf("Error\n");
	return (1);
	}
	}

	int num = atoi(argv[i]);

	if (num > 0)
	{
	sum += num;
	}
	i++;
	}
	printf("%d\n", sum);
	return (0);
}
