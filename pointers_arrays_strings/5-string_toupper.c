#include "main.h"

/**
 * string_toupper - convert a string to uppercase
 * @s: pointer to string for processing in-place
 * Return: pointer to converted string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}

