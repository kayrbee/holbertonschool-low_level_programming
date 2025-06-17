#include <stdio.h>

/**
 * main - description goes in here
 * Return: 0
 */
int main(void)
{
	int d;

	d = 48;

	while (d < 57)
	{
		putchar(d);
		putchar(44);
		putchar(32);
		d++;
	}
	putchar(57);

	return (0);
}

