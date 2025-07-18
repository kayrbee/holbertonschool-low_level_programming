#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all integers passed to it
 * @n: size of variable-sized list
 * Return: result, or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list values;
	unsigned int i = 0;
	int sum = 0;

	va_start(values, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(values, int);
	}
	va_end(values);
	return (sum);
}
