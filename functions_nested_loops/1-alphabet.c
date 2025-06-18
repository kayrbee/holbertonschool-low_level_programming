#include "main.h"

void print_alphabet(void);

/**
 * print_alphabet - Defines the function
 * Description: prints the alphabet with _putchar
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

