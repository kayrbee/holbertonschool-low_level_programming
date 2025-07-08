#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - allocate memory for a 2D int array
 * @width: number of columns to set
 * @height: number of rows to set
 * Return: pointer to array of pointers or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int w = 0;
	int h = 0;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	while (h < height)
	{
		grid[h] = malloc(sizeof(int) * width);

		if (grid[h] == NULL)
		{
			while (h >= 0)
			{
				free(grid[h]);
				h = h - 1;
			}
			free(grid);
		}
		while (w < width)
		{
			grid[h][w] = 0;
			w = w + 1;
		}
		w = 0;
		h = h + 1;
	}

	return (grid);
}

