#include "main.h"

/**
 * _strncpy - appends n bytes of a new string to a base string
 * @dest: base string
 * @src: new string, added to end of base string
 * @n: number of bytes to append from src to base string
 *     if n > src length, append null characters until n bytes are written
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int startof_new = 0;
	int lengthof_new = 0;
	int endof_base = 0;

	while (dest[endof_base] != '\0')
	{
		endof_base++;
	}

	while (src[lengthof_new] != '\0')
	{
		lengthof_new++;
	}
	if (lengthof_new >= n)
	{
		while (startof_new < n)
		{
			dest[endof_base] = src[startof_new];
			startof_new++;
			endof_base++;
		}
	}
	else
	{
		while (startof_new < lengthof_new)
		{
			dest[endof_base] = src[startof_new];
			startof_new++;
			endof_base++;
		}

		while (startof_new < n)
		{
			dest[endof_base] = '\0';
			startof_new++;
			endof_base++;
		}
	}

	endof_base = endof_base + 1;
	dest[endof_base] = '\0';

	return (dest);
}

