#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locate first char c in string s
 * @s: string to be searched
 * @c: character to find
 * Return: pointer to found character or NULL if char not found
 */
char *_strchr(char *s, char c)
{
	int e = 0;

	if (c == '\0')
	{
		while (s[e] != '\0')
		{
			e++;
		}
		return (&s[e]);
	}

	e = 0;
	while (s[e] != '\0')
	{
		if (s[e] == c)
		{
			return (&s[e]);
		}
		e++;
	}
	return (NULL);
}

