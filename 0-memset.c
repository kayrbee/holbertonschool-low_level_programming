#include "main.h"

/**
 * _memset - fills the first n bytes of a string with a constant value
 * @s: string to be modified, sent from main
 * @b: constant byte, to be inserted in string
 * @n: number of bytes to insert
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

