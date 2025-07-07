#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocate memory for a 2D int array
 * @width: number of columns to set
 * @height: number of rows to set
 * Return: pointer to created array or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int size = width * height;
	int **int_array;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	int_array = malloc(sizeof(int) * size);

	if (int_array == NULL)
	{
		return (NULL);
	}

	int_array[width][height] = { 0 };

	return (int_array);
}
