#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints a list of strings
 * @separator: desired separator between strings
 * @n: size of list of strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i = 0;

	va_start(strings, n);
	if (n != 0)
	{
		printf("%s", va_arg(strings, char *));
		for (i = 1; i < n; i ++)
		{
			if (separator != NULL)
			{
				printf("%s%s", separator, va_arg(strings, char *));
			}
			else
			{
				printf("%s", va_arg(strings, char *));
			}
		}
	}
	printf("\n");
	va_end(strings);
}

