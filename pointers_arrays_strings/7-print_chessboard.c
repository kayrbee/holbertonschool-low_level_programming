#include "main.h"

/**
 * print_chessboard - prints a multidimensional char array
 * @a: array[8][8] to print
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;
	int inner = 0;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			putchar(a[i][j]);
			inner++;
		}
		putchar('\n');
		j = 0;
	}
}

