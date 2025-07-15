#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: first int
 * @b: second int
 * Return: sum of a, b
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;

	return (sum);
}

/**
 * op_sub - subtract two integers
 * @a: first integer
 * @b: second integer
 * Return: diff of a - b
 */
int op_sub(int a, int b)
{
	int diff;

	diff = a - b;

	return (diff);
}

/**
 * op_mul - multiply two integers
 * @a: first int
 * @b: second int
 * Return: product of a * b
 */
int op_mul(int a, int b)
{
	int product;

	product = a * b;

	return (product);
}

/**
 * op_div - divide two integers
 * @a: first int
 * @b: second int
 * Return: division of a / b
 */
int op_div(int a, int b)
{
	int div;

	if (b == 0)
	{
		return (-1);
	}
	div = a / b;
	return (div);
}

/**
 * op_mod - find remainder of two integers
 * @a: first int
 * @b: second int
 * Return: remainder of a / b
 */
int op_mod(int a, int b)
{
	int remainder;

	if (b == 0)
	{
		return (-1);
	}

	remainder = a % b;
	return (remainder);
}

