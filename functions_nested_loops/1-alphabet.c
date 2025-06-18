#include "main.h"

/**
 * main - print the alphabet using _putchar
 * Return: 0
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

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


