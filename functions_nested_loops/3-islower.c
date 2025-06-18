#include "main.h"

/**
 * _islower - similar to islower but hand-rolled
 * @c: is the character passed from main to be checked
 * Return: 1 if lowercase, 0 if not
 */
int _islower(int c)
{
	int i;

	if (c >= 98 && c <= 122)
	{
		i = 1;
	} else
	{
		i = 0;
	}
	return (i);
}

