#include "main.h"
/**
 * _strchr - find first occurrence of a char
 * @s: string to be parsed, sent from main
 * @c: character to find
 * Return: pointer to found char, or null if char not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *location;
	int search_complete = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c && search_complete == 0)
		{
			/* update pointer */
			location = (s + i);
			/* exit loop */
			search_complete = 1;
		}
		i++;
	}
	if (search_complete == 0)
	{
		return (NULL);
	}
	else
	{
		return (location);
	}
}

