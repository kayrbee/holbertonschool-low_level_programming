#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * TO DO: implement a struct for valid format specifiers
 *        Use a key-value pair to look up the format function to use
 */
void print_all(const char * const format, ...)
{
	va_list item;
	int i = 0;

	va_start(item, format);
	while (format[i] != '\0')
	{
		if (format[i] == 's')
			printf("String: %s\n", va_arg(item, char *));
		if (format[i] == 'c')
			printf("Char: %c\n", va_arg(item, int));
		i++;
	}
	va_end(item);
}
int main(void)
{
    print_all("ssci", "stSchool", "second", 'c', 4);
    return (0);
}

