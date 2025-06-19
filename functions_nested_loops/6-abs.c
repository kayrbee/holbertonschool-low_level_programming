#include "main.h"

/**
 * _abs - returns the absolute value of an integer
 * @n: passed from main for evaluation
 * Return: unsigned integer
 */
int _abs(int n)
{
	int i;

	if (n < 0)
	{
		i = (n / -1);
	} else
	{
		i = n;
	}

	return (i);
}

