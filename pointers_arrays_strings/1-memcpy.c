#include "main.h"

/**
 * _memcpy - copies the first n bytes of a src string to a dest string
 * @dest: string to be modified, sent from main
 * @src: string to be copied
 * @n: number of bytes to copy
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

