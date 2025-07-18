#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	va_list item;
	int i = 0;

	va_start(item, format);
	if (*format == 's')
		printf("%s\n", va_arg(item, char *));
	va_end(item);
}
int main(void)
{
    print_all("s", "stSchool");
    return (0);
}

