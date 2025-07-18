#include "main.h"
/**
 * _strspn - count positive char matches in string from a given set of chars
 * @s: string to evaluate
 * @accept: set of reference chars
 * Return: number of matches in string
 */
unsigned int _strspn(char *s, char *accept)
{
	int element = 0;
	int reference = 0;
	int match = 0;
	unsigned int length = 0;

	while (s[element] != '\0') /* Loop through s */
	{
		while (accept[reference] != '\0' && match == 0) /* Loop through accept */
		{
			if (s[element] == accept[reference])
			{
				length++;
				match = 1;
			}
			reference++;
		}

		if (match == 0)
		{
			return (length);
		}

		reference = 0;
		match = 0;
		element++;
	}
	return (length);
}

