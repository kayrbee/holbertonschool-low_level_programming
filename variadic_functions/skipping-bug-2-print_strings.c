#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * null_check - helper function to check if current va_arg is null
 * Return: (nil) if NULL
 */
int null_check(char *s)
{
	int check_for_null = 0;

	if (s == NULL)
		check_for_null = 1;
	return (check_for_null);
}
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
	int null_flag = 0;

	if (n != 0)
	{
		va_start(strings, n);

		for (i = 0; i < (n - 1); i++)
		{
			null_flag = null_check(va_arg(strings, char *));
			
			if (separator != NULL && null_flag == 0)
			{
				printf("%s%s", separator, va_arg(strings, char *));
			}
			else if (separator != NULL && null_flag == 1)
			{
				printf("%s(nil)", separator);
				va_arg(strings, char *);
			}
			else if (separator == NULL && null_flag == 0)
			{
				printf("%s", va_arg(strings, char *));
			}
			else
			{
				printf("(nil)");
				va_arg(strings, char *);
			}
		}
	}
	printf("\n");
	va_end(strings);
}

int main(void)
{
    print_strings("; ", 3, "Jay", "Django", NULL);
    return (0);
}

