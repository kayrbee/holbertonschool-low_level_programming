#include "main.h"
/**
 * leet - look what they did to my string, ma
 *        converts a string into 1337
 * @s: string to be parsed, passed from main
 * Return: pointer to string
 */

char *leet(char *s)
{
	const char find_chars[] = "aAeEoOtTlL";
	const char swap_chars[] = "4433007711";

	int e = 0;
	int i = 0;
	int eval_done = 0;

	while (s[e] != '\0')
	{
		while (find_chars[i] != '\0' && eval_done == 0)
		{
			if (s[e] == find_chars[i])
			{
				s[e] = swap_chars[i];
				eval_done = 1;
			}
			i++;
		}
		i = 0;
		eval_done = 0;
		e++;
	}
	return (s);
}

