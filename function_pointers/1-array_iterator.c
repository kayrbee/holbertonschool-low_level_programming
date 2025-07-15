#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function pointer
 * @array: array to process
 * @size: size of array
 * @action: function pointer to function to call
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (name != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

