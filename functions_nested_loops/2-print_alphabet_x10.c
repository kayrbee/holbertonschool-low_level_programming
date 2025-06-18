#include "main.h"

/**
 * print_alphabet_x10 - prints lc a-z 10 times
 * Return: void to main
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i < 10)
	{
		/* Do somethingi 10x */
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}

