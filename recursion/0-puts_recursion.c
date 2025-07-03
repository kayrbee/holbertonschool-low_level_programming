#include "main.h"

/**
 * _puts_recursion - put chars in a string using recursion
 * @s: string to print out
 * Return: nothing
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

