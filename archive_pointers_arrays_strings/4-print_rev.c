#include "main.h"
#include <stdio.h>

/**
 * print_rev - reverses a string
 * @s: string to be reversed, provided by main
 * Return - void
 */
void print_rev(char *s)
{
	int length = 0;
	int element;

	/* find array length */
	while (s[length] != '\0')
	{
		length++;
	}

	for (element = (length - 1); element >= 0; element--)
	{
		_putchar(s[element]);
	}
	_putchar('\n');
}

