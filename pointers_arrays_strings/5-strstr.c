#include "main.h"
#include <stdlib.h>
/**
 * _strstr - find a string within a string
 * @haystack: string to search within
 * @needle: substring to find
 * Return: pointer to first occurrence of substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int h = 0;
	int n = 0;
	int start;

	while (haystack[h] != '\0')
	{
		start = h;

		while (needle[n] != '\0')
		{
			if (haystack[h] == needle[n])
			{
				h++;
				n++;
			}
			else
			{
				break;
			}
		}
		if (needle[n] == '\0')
		{
			return (&haystack[start]);
		}
		h++;
		n = 0;
	}
	return (NULL);
}

