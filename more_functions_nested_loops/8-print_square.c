#include "main.h"

/**
 * print_square - print the same number of columns as rows
 * @size: integer from main which governs the number of columns and rows
 * Return: void
 */
void print_square(int size)
{
	int row = 0;
	int col;

	if (size <= 0)
		_putchar('\n');

	while (size > row)
	{
		col = 0;
		while (size > col)
		{
			_putchar('#');
			col++;
		}
		_putchar('\n');
		row++;
	}
}

