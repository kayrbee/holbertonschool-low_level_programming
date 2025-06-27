#include "main.h"

/**
 * _strcpy - copy string to new location
 * @dest: new location of string
 * @src: original location of string
 * Return: character pointer
 */
char *_strcpy(char *dest, char *src)
{
	int element = 0;

	while (src[element] != '\0')
	{
		dest[element] = src[element];
		element++;
	}

	dest[element] = '\0';
	return (dest);
}

