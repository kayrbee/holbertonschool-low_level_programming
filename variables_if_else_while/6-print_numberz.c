#include <stdio.h>

/**
 * main - description goes here
 * Return: 0
 */
int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}

