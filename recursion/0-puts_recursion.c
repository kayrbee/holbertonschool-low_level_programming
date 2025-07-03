#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - put chars in a string using recursion
 * @s: string to print out
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}

