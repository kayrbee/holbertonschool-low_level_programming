#include "calc.h"
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
	return (a + b);
}

/**
 * op_sub - subtract two integers
 * @a: first integer
 * @b: second integer
 * Return: diff of a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: first int
 * @b: second int
 * Return: product of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers
 * @a: first int
 * @b: second int
 * Return: division of a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - find remainder of two integers
 * @a: first int
 * @b: second int
 * Return: remainder of a / b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

