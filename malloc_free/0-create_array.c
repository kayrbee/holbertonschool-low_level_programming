#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates a char array of given size & initialises to given c
 * @size: desired array size, provided by main
 * @c: desired initial value of array, provided by main
 * Return: pointer to array, or NULL if failure occurs
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i = 0;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(c) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size, i++)
		ptr[i] = c;

	return (ptr);
}

