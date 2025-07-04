#include "main.h"

/**
 * factorial - calculate the factorial of an integer
 * @n: integer to calculate
 * Return: n! if n is pos; -1 if n is neg
 */
int factorial(int n)
{
	int result = 0;
	int factor = n;

	if (factor < 0)
	{
		return (-1);
	}

	if (factor == 0)
	{
		result = 1;
	}
	else
	{
		result = factor * factorial(n - 1);
	}

	return (result);
}

