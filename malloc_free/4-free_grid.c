#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - clear memory for a 2D int array
 * @grid: grid to remove
 * @height: number of rows in grid
 * Return: void 
 */
void free_grid(int **grid, int height)
{
	int h = height;

	while (h >= 0)
	{
		free(grid[h]);
		h = h - 1;
	}
	free(grid);
}

