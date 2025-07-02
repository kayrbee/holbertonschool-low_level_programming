#include "main.h"
#include <stdlib.h>

char *_strchr(char *s, char c)
{
	int e = 0;

	while (s[e] != '\0')
	{
		if (s[e] == c)
		{
			return (&s[e]);
		}
		e++;
	}
	return (NULL);
}

