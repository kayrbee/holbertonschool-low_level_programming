#include "main.h"

/**
 * _strcmp - compares two strings by ascii numbers
 * @s1: comparator string
 * @s2: string to be compared
 * Return: 0 if strings are identical
 *         <0 if first non-matching character in s1 < s2
 *         >0 if first non-matching character in s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int e = 0;
	int len_s1 = 0;
	int result = 0;

	while (s1[e] != '\0')
		e++;
	len_s1 = e;
	e = 0;
	while ((e <= len_s1) && (result == 0))
	{
		if (s1[e] - s2[e] != 0)
		{
			result = s1[e] - s2[e];
		}
		e++;
	}
	return (result);
}

