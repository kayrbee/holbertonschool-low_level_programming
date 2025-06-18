#include "main.h"

/**
 * _isalpha - checks if input is alpha
 * @c: is a char param passed from main to be evaluated
 * Return: 1 if alpha, 0 if not alpha char
 */
int _isalpha(int c)
{
	int i;

	if (c >= 'a' && c <= 'z')
		i = 1;
	else if (c >= 'A' && c <= 'Z')
		i = 1;
	else
		i = 0;

	return (i);
}
