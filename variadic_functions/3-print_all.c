#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - takes a variable number of inputs
 *             and looks up the right function for each input
 * @format: single char key indicating desired format specifier
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list item;
	int i = 0, j = 0;
	int printed_one = 0;
	lookup_t lookup[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str}
	};

	va_start(item, format);
	while (format != NULL && format[i] != '\0')
	{
		while (j < 4)
		{
			if (*lookup[j].key == format[i])
			{
				if (printed_one == 1)
					printf(", ");

				lookup[j].f(&item);
				printed_one = 1;
			}
			j++;
		}
		j = 0;
		i++;
	}
	va_end(item);
	printf("\n");
}
/**
 * print_char - prints input in char format
 * @item: input to print
 * Return: void
 */
void print_char(va_list *item)
{
	int c;

	c = va_arg(*item, int);

	printf("%c", c);
}
/**
 * print_int - prints input in integer format
 * @item: input to print
 * Return: void
 */
void print_int(va_list *item)
{
	int i;

	i = va_arg(*item, int);

	printf("%d", i);
}
/**
 * print_float - prints input in float format
 * @item: input to print
 * Return: void
 */
void print_float(va_list *item)
{
	float f;

	f = va_arg(*item, double);

	printf("%f", f);
}
/**
 * print_str - prints input in string format
 * @item: input to print
 * Return: void
 */
void print_str(va_list *item)
{
	char *str;

	str = va_arg(*item, char *);

	printf("%s", str ? str : "(nil)");
}

