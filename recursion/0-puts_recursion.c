#include "main.h"

/**
 * _puts_recursion - check the code
 * @s: pointer to the first string element
 *
 * Return: absolutely nothing.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

