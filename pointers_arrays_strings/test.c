#include "main.h"
#include <stdio.h>

char *_strstr(char *haystack, char *needle)
{
	int h = 0;
	int n = 0;
	int start;

	while (haystack[h] != '\0')
	{
		start = h;

		while (needle[n] != '\0')
		{
			if (haystack[h] == needle[n])
			{
				h++;
				n++;
			}
			else
			{
				break;
			}
		}
		if (needle[n] == '\0')
		{
			return (&haystack[start]);
		}
		h++;
		n = 0;
	}
	return (NULL);
}

int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}

