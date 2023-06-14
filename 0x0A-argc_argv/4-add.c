#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i = 1, num, sum = 0;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	while (i < argc)
	{
	int j = 0;

	while (argv[i][j] != '\0')
	{
		if (!isdigit(argv[i][j]) && argv[i][j] != '+')
		{
		printf("Error\n");
		return (1);
		}
		j++;
	}
	num = atoi(argv[i]);
	sum += num;
	i++;
	}

	printf("%d\n", sum);
	return (0);
}
