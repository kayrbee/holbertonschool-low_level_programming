#include <stdio.h>

/**
 * main - print the literal string _putchar
 * Return: 0
 * Description: only use putchar
 */
int main(void)
{
	char myString[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\0'};
	int i;

	for (i = 0; myString[i] != '\0'; i++)
	{
		putchar(myString[i]);
	}
	putchar('\n');

	return (0);
}

