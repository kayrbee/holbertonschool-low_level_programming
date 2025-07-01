#include "main.h"
#include <stdio.h>
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
	unsigned int counter = 0;

	while (s[element] != '\0')
	{
		while (accept[reference] != '\0')
		{
			if (s[element] == accept[reference])
			{
				counter++;
			}
			reference++;
		}
		reference = 0;
		element++;
	}
	return (counter);
}

int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}

