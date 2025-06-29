#include "main.h"

/**
 * _strcat - appends a new string to a base string
 * @dest: base string
 * @src: new string, added to end of base string
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int startof_new = 0;
	int endof_base = 0;

	while (dest[endof_base] != '\0')
	{
		endof_base++;
	}

	while (src[startof_new] != '\0')
	{
		dest[endof_base] = src[startof_new];
		startof_new++;
		endof_base++;
	}

	endof_base = endof_base + 1;
	dest[endof_base] = '\0';

	return (dest);
}

