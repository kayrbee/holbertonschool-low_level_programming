#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - use function pointer to find a matching index
 * @array: array to process
 * @size: size of array
 * @cmp: function pointer to function to call
 * Return: index position of first matching element, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int result = 0;

	if (size <= 0)
		return (-1);

	if (array != NULL)
	{
		while (i < size && result == 0)
		{
			result = cmp(array[i]);
			i++;
		}

		if (result == 0)
			return (-1);

		i = i - 1;
		return (i);
	}
	return (-1);
}

