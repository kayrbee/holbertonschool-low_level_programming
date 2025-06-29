#include "main.h"

/**
 * _strlen - measures the length of a string
 * @s: string to be measured, passed from main
 * Return: the number of characters in @s,
 *         excluding the null element
 */
int _strlen(char *s)
{
	int array_length = 0;
	int end_of_array = '\0';
	int element;

	for (element = 0; s[element] != end_of_array; element++)
	{
		array_length = array_length + 1;
	}
	return (array_length);
}

