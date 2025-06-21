#include "main.h"

/**
 * times_table - prints the times table from (0..9)
 * Return: void
 */
void times_table(void)
{
	int column = 0;
	int row = 0;
	int result;
	int res_ind_1;
	int res_ind_0;

	while (row <= 9)
	{
		column = 0;
		while (column <= 9)
		{
			result = (row * column);
			res_ind_0 = result % 10;
			res_ind_1 = result / 10;

			if (column != 0)
			{
				_putchar(',');

				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
			
			if (result >= 10)
			{
				_putchar('0' + res_ind_1);
				_putchar('0' + res_ind_0);
			}
			else
			{
				_putchar('0' + res_ind_0);
			}

			if (column == 9)
			{
				_putchar('\n');
			}
			column++;
		}
		row++;
	}
}

