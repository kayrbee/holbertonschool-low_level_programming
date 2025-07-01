#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - locate the first occurrence of a reference char in string
 * @s: string to evaluate, from main
 * @accept: reference string
 * Return: pointer to first matching char, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int s_elmt = 0;
	int ref_elmt = 0;
	int match = 0;
	char *result;

	while (s[s_elmt] != '\0')
	{
		while (accept[ref_elmt] != '\0' && match == 0)
		{
			if (s[s_elmt] == accept[ref_elmt])
			{
				match = 1;
			}
			ref_elmt++;
		}
		if (match == 1)
		{
			result = &s[s_elmt];
			return (result);
		}
		s_elmt++;
		ref_elmt = 0;
	}

	return (NULL);
}

