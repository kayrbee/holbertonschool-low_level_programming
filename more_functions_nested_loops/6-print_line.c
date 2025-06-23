#include "main.h"

/**
 * print_line - prints a variable length line
 * @n: the number of times to print, set by main
 * Return: void
 */
void print_line(int n)
{
	int start = 0;

	while (start != n)
	{
		if (!(n < 0))
		{
			_putchar('_');
			start++;
		}
		else
		{
			start = n;
		}
	}
	_putchar('\n');
}

