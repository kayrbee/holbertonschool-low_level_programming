#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a char array
 * @str: string requiring duplication, provided by main
 * Return: pointer to duplicate array, or NULL if failure occurs
 */
char *_strdup(char *str)
{
	int size = 0;
	char *ptr;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	size = size + 1;
	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = str[i];

	return (ptr);
}

