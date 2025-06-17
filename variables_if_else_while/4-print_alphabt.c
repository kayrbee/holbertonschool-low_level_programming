#include <stdio.h>

/**
 * main - print a contiguous series of ascii chars except q and e"
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		if (ch != 113 && ch != 101)
			putchar(ch);
	}
	putchar('\n');

	return (0);
}
