#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	va_list item;
	int i = 0;

	va_start(item, format);
	while (format[i] != '\0')
	{
		if (*format == 's')
			printf("%s\n", va_arg(item, char *));
		i++;
	}
	va_end(item);
}
int main(void)
{
    print_all("ss", "stSchool", "second");
    return (0);
}

