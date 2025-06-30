#include "main.h"

/**
 * reverse_array - print an integer array in reverse
 * @a: integer array, passed from main
 * @n: number of elements in array @a
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int first_element = 0;
	int mirror_element = n - 1;
	int temp;

	if (n % 2 == 0)
	{
		while (first_element < (n / 2))
		{
			temp = a[first_element];
			a[first_element] = a[mirror_element];
			a[mirror_element] = temp;
			first_element++;
			mirror_element--;
		}
	}
	else
	{
		while (first_element < ((n + 1) / 2))
		{
			temp = a[first_element];
			a[first_element] = a[mirror_element];
			a[mirror_element] = temp;
			first_element++;
			mirror_element--;
		}
	}
}

