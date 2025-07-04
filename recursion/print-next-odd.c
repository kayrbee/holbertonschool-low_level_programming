#include "main.h"
#include <stdio.h>

/**
 *  _sqrt_recursion - calculates the square root
 *  @n: number to be evaluated
 *  Return: integer of natural sqrt, or -1 if no natural sqrt
 */
int print_next_odd(int n)
{
	int next_odd = n;

	if (n % 2 == 0)
	{
		next_odd = n + 1;
	}
	if (next_odd < 10)
	{
		printf("Next odd: %d\n", next_odd);
		next_odd = print_next_odd(next_odd + 2);
		printf("Returning: %d\n", next_odd);
	}
	else
	{
		printf("Final odd reached! %d\n", next_odd);
	}
	return (next_odd);
}

int main(void)
{
	int n = 1;

	printf("Starting value: %d\n", n);
	print_next_odd(n);

	return (0);
}

