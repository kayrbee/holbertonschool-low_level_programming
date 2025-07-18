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
	unsigned int i = 0, j = 0;
	char *tmp;

	va_start(strings, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			tmp = va_arg(strings, char *);

			if (tmp != NULL)
				printf("%s", tmp);
			else
				printf("(nil)");

			if (separator != NULL && i < (n - 1))
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}

