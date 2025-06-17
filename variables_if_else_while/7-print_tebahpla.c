#include <stdio.h>

/**
 * main - print in reverse
 * Return: 0
 */
int main(void)
{
	int c;

	c = 122;

	while (c >= 97)
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
