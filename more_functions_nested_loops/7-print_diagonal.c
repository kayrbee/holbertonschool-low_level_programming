#include "main.h"

/**
 * print_diagonal - print a diagonal line of variable length
 * @n: the number of times to print, set by main
 * Return: void
 */
void print_diagonal(int n)
{
	int line = 1;
	int number_of_spaces;

	if (n <= 0)
		_putchar('\n');

	while (line <= n)
	{
		number_of_spaces = 1;
		while (number_of_spaces < line)
		{
			_putchar(' ');
			number_of_spaces++;
		}
		_putchar('\\');
		_putchar('\n');
		line++;
	}
}


