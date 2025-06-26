#include "main.h"

/**
 * puts2 - print every other character in string, starting from [0]
 * @str: string to process, passed from main
 * Return: void
 */

void puts2(char *str)
{
	int e = 0;

	while (str[e] != '\0')
	{
		if (e % 2 == 0)
		{
			_putchar(str[e]);
		}
		e++;
	}
}

