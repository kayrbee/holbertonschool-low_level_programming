#include "main.h"

/**
 * _strncat - appends part of a new string to a base string
 * @dest: base string
 * @src: new string, added to end of base string
 * @n: number of bytes to append from src to base string
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int startof_new = 0;
	int endof_base = 0;

	while (dest[endof_base] != '\0')
	{
		endof_base++;
	}

	while (startof_new < n)
	{
		dest[endof_base] = src[startof_new];
		startof_new++;
		endof_base++;
	}

	endof_base = endof_base + 1;
	dest[endof_base] = '\0';

	return (dest);
}

