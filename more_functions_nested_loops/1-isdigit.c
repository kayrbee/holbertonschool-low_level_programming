#include "main.h"

/**
 * _isdigit - checks for digit characters
 * @c: c is the character passed from main to be checked
 * Return: 1 if digit, 0 if not
 */
int _isdigit(int c)
{
	int result;

	if (c >= 48 && c <= 57)
		result = 1;
	else
		result = 0;

	return (result);
}
