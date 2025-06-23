#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: c is the character passed from main to be checked
 * Return: 1 if uppercase, 0 if not
 */
int _isupper(int c)
{
	int result;

	if (c >= 65 && c <= 90)
		result = 1;
	else
		result = 0;

	return (result);
}
