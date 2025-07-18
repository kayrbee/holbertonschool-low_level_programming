#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - print a variable-length list of numbers with a separator
 * @separator: specifies the separator to use
 * @n: size of list
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i = 0;

	va_start(numbers, n);
	if (n != 0)
	{
		printf("%d", va_arg(numbers, int));
		for (i = 1; i < n; i++)
		{
			if (separator != NULL)
			{
				printf("%s%d", separator, va_arg(numbers, int));
			}
			else
			{
				printf("%d", va_arg(numbers, int));
			}
		}
	}
	printf("\n");
	va_end(numbers);
}

