#include "main.h"
/**
 * leet - look what they did to my string, ma
 *        converts a string into 1337
 * @s: string to be parsed, passed from main
 * Return: pointer to string
 */

char *leet(char *s)
{
	int e = 0;

	while (s[e] != '\0')
	{
		if (s[e] == 'a' || (s[e] == 'A'))
			s[e] = '4';
		else if (s[e] == 'e' || (s[e] == 'E'))
			s[e] = '3';
		else if (s[e] == 'o' || (s[e] == 'O'))
			s[e] = '0';
		else if (s[e] == 't' || (s[e] == 'T'))
			s[e] = '7';
		else if (s[e] == 'l' || (s[e] == 'L'))
			s[e] = '1';
		e++;
	}
	return (s);
}

