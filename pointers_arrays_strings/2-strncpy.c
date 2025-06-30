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
	int e = 0;
	int len_src = 0;
	int len_dest = 0;

	while (src[e] != '0')
	{
		e++;
	}
	len_src = e;
	e = 0;
	while (dest[e] != 0)
	{
		e++;
	}
	len_dest = e;
	e = 0;
	if (len_dest >= len_src)
	{
		while (e < len_src && e < n)
		{
			dest[e] = src[e];
			e++;
		}

		if (n > len_src)
		{
			while (e < n)
			{
				dest[e] = '\0';
				e++;
			}
		}
	}
	return (dest);
}

