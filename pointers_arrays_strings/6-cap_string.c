#include "main.h"
#include <stdio.h>
char *cap_string(char *);
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

	while (s[e] != '0')
	{
		if (s[e] == ' ' || s[e] == '\n')
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

int main(void)
{
/*    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n"; */
	char str[] = "start here\nnext word";
	char *ptr;

	printf("ptr og: %s\n", ptr);
	printf("str og: %s\n", str);
	ptr = cap_string(str);
	printf("ptr nw: %s\n", ptr);
	printf("str nw: %s\n", str);
	return (0);
}

