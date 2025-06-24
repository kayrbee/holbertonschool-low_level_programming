#include "main.h"

/**
 * print_triangle - prints variable-sized triangles to console
 * @size: size of triangle to print (eq to #lines), set by main
 * Return: void
 */
void print_triangle(int size)
{
	int current_line_number = 0;
	int size_of_triangle = size;
	int number_of_spaces_to_print = (size - 1);
	int i;

	if (size <= 0)
		_putchar('\n');

	while (current_line_number < size_of_triangle)
	{
		for (i = number_of_spaces_to_print; i > 0; i--)
		{
			_putchar(' ');
		}

		for (i = number_of_spaces_to_print; i < size_of_triangle; i++)
		{
			_putchar('#');
		}

		number_of_spaces_to_print--;
		_putchar('\n');
		current_line_number++;
	}
}

