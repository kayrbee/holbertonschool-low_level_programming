#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses the elements in a string array
 * @s: string to reverse, passed from main
 * Return: nothing
 */
void rev_string(char *s)
{
	int length = 0;
	int element = 0;
	int inverse_e;
	int temp;

	while (s[length] != '\0')
	{
		length++;
	}

	length = length - 1;

	while (element <= (length / 2))
	{
		inverse_e = length - element;
		temp = s[element];
		s[element] = s[inverse_e];
		s[inverse_e] = temp;
		element++;
	}
	printf("\n");
}

