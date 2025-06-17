#include <stdio.h>

/**
 * main - description goes in here
 * Return: 0
 */
int main(void)
{
	int d;

	d = 48;

	while (d <= 57)
	{
		putchar(d);
		if (d != 57)
		{
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar('\n');
		}

		d++;
	}

	return (0);
}

