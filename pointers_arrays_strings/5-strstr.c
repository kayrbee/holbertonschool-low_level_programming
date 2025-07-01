#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strstr - locates a substring within a string
 * @haystack: string to look in
 * @needle: string to find
 * Return: pointer to beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int h = 0;
	int n = 0;
	int part_match = 0;
	int match_counter = 0;
	int needle_length = 0;
	int full_match = 0;

	while (needle[n] != '\0')
	{
		needle_length++;
		n++;
	}
	printf("needle_length: %d\n", needle_length);
	n = 0;
	while (haystack[h] != '\0')
	{
		while (needle[n] != '\0' && part_match == 0)
		{
			if (haystack[h] == needle[n])
			{
				part_match = 1;
			}
			n++;
		}

		if (part_match == 1)
		{
			match_counter++;
		}

		if (match_counter == (needle_length - 1))
		{
			full_match = 1;
			return(&haystack[h]);
		}
		part_match = 0;
		h++;
		n = 0;
		printf("match_counter: %d\n", match_counter);
	}
	printf("match_counter: %d\n", match_counter);
	return (NULL);
}

int main(void)
{
    char *s = "hello, world";
    char *f = "hello";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
