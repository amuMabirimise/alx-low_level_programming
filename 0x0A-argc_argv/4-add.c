#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - a program that adds postive positive numbers
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
	int num = 0;
	char *str = argv[i];

	for (int j = 0; str[j] != '\0'; j++)
	{
	if (!isdigit(str[j]))
	{
	printf("Error\n");
	return (1);
	}
	num = num * 10 + (str[j] - '0');
	}
	sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
