#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints the second half of a string
 * @str: string from main
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int half_len;

	while (str[len] != '\0')
	{
		len++;
	}

	half_len = (len / 2);

	while (half_len < len)
	{
		_putchar(str[half_len]);
		half_len++;
	}

	_putchar('\n');
}

