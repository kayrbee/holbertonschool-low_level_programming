#include "main.h"
#include <stdio.h>
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
		{
			s[e] = '4';
		}
		e++;
	}
	return (s);
}

int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}

