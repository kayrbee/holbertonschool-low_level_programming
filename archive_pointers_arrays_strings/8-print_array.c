#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements in an array in order from a[0]
 * @a: array to be read
 * @n: number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int element = 0;
	int elements_to_print = n;

	if (elements_to_print > 0)
	{
		printf("%d", a[element]);
		element++;

		while (element < elements_to_print)
		{
			printf(", %d", a[element]);
			element++;
		}
	}
	printf("\n");
}

