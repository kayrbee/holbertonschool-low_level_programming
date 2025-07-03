#include "main.h"

/**
 * _strlen_recursion - find the length of a string recursively
 * @s: string to measure
 * Return: integer size of string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '0')
	{
		length = length + 1;
		_strlen_recursion(s + 1);
	}
	return (length);
}
