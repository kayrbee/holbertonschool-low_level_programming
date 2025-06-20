#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: passed from main for processing
 * Return: int last_digit
 */
int print_last_digit(int n)
{
	/* implement */
	int last_digit;

	/* handle negative numbers */
	if (n < 0)
	{
		n = (n / -1);
	}

	last_digit = (n % 10);

	return (last_digit);
}

