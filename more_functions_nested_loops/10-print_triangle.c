#include "main.h"

/**
 * print_triangle - prints variable-sized triangles to console
 * @size: size of triangle to print (eq to #lines), set by main
 * Return: void
 */
void print_triangle(int size)
{
	int row = 0;
	int stop = size;
	int spaces = (size - 1);
	int i;

	if (size <= 0)
		_putchar('\n');

	while (row < stop)
	{
		for (i = spaces; i > 0; i--)
		{
			_putchar(' ');
		}

		for (i = spaces; i < stop; i++)
		{
			_putchar('#');
		}

		spaces = spaces - 1;
		_putchar('\n');
		row++;
	}
}

