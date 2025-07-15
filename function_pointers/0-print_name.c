#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function pointer
 * @name: name to print
 * @f: function pointer to function to call
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
}

