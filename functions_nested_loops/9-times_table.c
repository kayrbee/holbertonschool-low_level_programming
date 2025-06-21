#include "main.h"

void times_table(void);

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

	while (column <= 9)
	{
		row = 0;
		while (row <= 9)
		{
			result = (row * column);
			res_ind_0 = result % 10;
			res_ind_1 = result / 10;

			if (res_ind_1 != 0 && row < 9)
			{
				_putchar('0' + res_ind_1);
				_putchar('0' + res_ind_0);
				_putchar(',');
				_putchar(' ');
			}
			else if (res_ind_1 == 0 && row < 9)
			{
				_putchar('0' + res_ind_0);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}

			else if (res_ind_1 != 0 && row == 9)
			{
				_putchar('0' + res_ind_1);
				_putchar('0' + res_ind_0);
				_putchar('\n');
			}
			else
			{
				_putchar('0' + res_ind_0);
				_putchar('\n');
			}
			row++;
		}
		column++;
	}
	_putchar('\n');
	
}

