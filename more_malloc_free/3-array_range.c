#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - use malloc to create an int array
 * @min: value to be assiged to array[0]
 * @max: value to be assigned to array[last]
 * Return: pointer to array or NULL
 */
int *array_range(int min, int max)
{
	int size = max - min;
	int *ptr;
	int i = 0;

	if (size < 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (size + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		ptr[i] = min;
	}
	while (i < size)
	{
		ptr[i] = min;
		i = i + 1;
		min = min + 1;
	}

	return (ptr);
}

