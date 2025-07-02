#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - adds along the diagonal axes of multidimensional array
 * @a: integer array[][]
 * @size: size of array (describes both axes)
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int start = 1;
	int stop = size * size;
	int next_left = size + 1;
	int sum_left = 0;
	int next_right = size - 1;
	int sum_right = 0;
	int reference = 0;

	while (start <= stop)
	{
		reference = start - 1;
		sum_left = sum_left + a[reference];
		start = start + next_left;
	}

	start = size;
	while (start < stop)
	{
		reference = start - 1;
		sum_right = sum_right + a[reference];
		start = start + next_right;
	}
	printf("%d, %d\n", sum_left, sum_right);
}

