#include <stdio.h>

/**
 * main - description here
 * Return: 0
 */
int main(void)
{
	int h;

	h = 0;

	while (h <= 9)
	{
		putchar('0' + h);
		h++;
	}
	while (h <= 15)
	{
		putchar('a' + (h - 10));
		h++;
	}
	putchar('\n');

	return (0);
}

