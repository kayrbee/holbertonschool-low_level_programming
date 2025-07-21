#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

typedef void (*format_ptr)(va_list *);
/**
 * struct lookup - key:value struct to match a string to a function
 *
 * @key: matcher
 * @f: function pointer to matched format specifier
 */
typedef struct lookup
{
	const char *key;
	format_ptr f;
} lookup_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list *item);
void print_int(va_list *item);
void print_float(va_list *item);
void print_str(va_list *item);

#endif
