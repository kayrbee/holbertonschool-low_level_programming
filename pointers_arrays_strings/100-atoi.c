#include "main.h"
#include <stdio.h>

/**
 * _atoi: convert a string array to an integer LITE
 * @s: string, passed from main
 * Return: integer including sign
 */
int _atoi(char *s)
{
	int element = 0;
	int final_integer = 0;

	while (s[element] != '\0')
	{
		if (s[element] >= '0' && s[element] <= '9')
		{
			final_integer = s[element] - 48;
		}
		element++;
	}
	return (final_integer);
}

int main(void)
{
    int nb;

    nb = _atoi("9");
    printf("%d\n", nb);
/*    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);*/
    return (0);
}

