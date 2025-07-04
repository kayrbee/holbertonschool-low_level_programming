#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - find the length of a string recursively
 * @s: string to measure
 * Return: integer size of string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length = _strlen_recursion(s + 1);
		length = length + 1;
	}
		return (length);
}

