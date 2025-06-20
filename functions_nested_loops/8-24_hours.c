#include "main.h"

/**
 * jack_bauer - prints every minute of a 24H day
 * Return: void
 */
void jack_bauer(void)
{
	int hour = 0;
	int j;
	int k;
	int minute = 0;
	int n;
	int o;

	while (hour < 24)
	{
		minute = 0;
		while (minute < 60)
		{
			j = hour / 10;
			k = hour % 10;
			n = minute / 10;
			o = minute % 10;

			_putchar('0' + j);
			_putchar('0' + k);
			_putchar(':');
			_putchar('0' + n);
			_putchar('0' + o);
			_putchar('\n');

			minute = minute + 1;
		}
		hour = hour + 1;
	}
}

