#include "main.h"
#include <stdio.h>

/**
 * _puts - like its puts counterpart but make it basic
 *         Prints a string to stout and finishes with a new line
 * @str: the string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	int element = 0;
	int end_of_string = '\0';

	for (element = 0; str[element] != end_of_string; element++)
	{
		_putchar(str[element]);
	}
	_putchar('\n');
}

