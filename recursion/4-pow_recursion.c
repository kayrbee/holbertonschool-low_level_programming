#include "main.h"

/**
 * _pow_recursion - find the power of a number
 * @x: - numerical base
 * @y: - power
 * Return: result of x ^ y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	int base = x;
	int power = y;
	int result = 0;

	if (power < 0)
	{
		return (-1);
	}
	if (power == 0)
	{
		result = 1;
	}
	else
	{
		result = base * _pow_recursion(base, (power - 1));
	}
	return (result);
}

