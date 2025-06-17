#include <stdio.h>

/**
 * main - print a contiguous series of ascii chars"
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
