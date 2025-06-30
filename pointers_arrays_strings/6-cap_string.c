#include "main.h"


/**
 * is_separator - helper function
 * @c: character to check
 * Return: true when char is separator
 */
int is_separator(char c)
{
	const char *separators = " \n\t,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != 0; i++)
	{
		if (c == separators[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalise each word in a string
 * @s: string to be parsed and modified in-place
 * Return: string pointer
 */
char *cap_string(char *s)
{
	int e = 0;
	int next;

	if (s[e] >= 'a' && s[e] <= 'z')
	{
		s[e] = s[e] - 32;
	}

	while (s[e] != '\0')
	{
		if (is_separator(s[e]))
		{
			next = e + 1;
			if (s[next] >= 'a' && s[next] <= 'z')
			{
				s[next] = s[next] - 32;
			}
		}
		e++;
	}
	return (s);
}

