#include "main.h"

/**
 * more_numbers - print 10 lines of numbers 0-14
 * Return: void
 */
void more_numbers(void)
{
	int row = 0;
	int column;

	while (row <= 10)
	{
		column = 0;
		while (column < 15)
		{
			int ind_1 = column / 10;
			int ind_0 = column % 10;

			if (column > 9)
			{
				_putchar(48 + ind_1);
			}

			_putchar(48 + ind_0);
			column++;
		}
		_putchar('\n');
		row++;
	}
}

