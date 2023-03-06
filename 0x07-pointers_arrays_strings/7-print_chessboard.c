#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: always 0
 */
#include <stdio.h>

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
	for (j = 0; j < 8; j++)
		putchar(a[i][j]);
	putchar('\n');
	}
}
