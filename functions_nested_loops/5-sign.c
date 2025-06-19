#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: takes number n from main and evaluates its sign
 * Return: 1 "+", 0 "0", -1 "-" respectively if n > 0, = 0 or  < 0
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		i = 0;
	}
	else
	{
		_putchar('-');
		i = -1;
	}

	return (i);
}
