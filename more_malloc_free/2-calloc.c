#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - reserve memory for an array
 *         - initialise array to 0
 * @nmemb: size of array
 * @size: bytes per element of array
 * Return: pointer to array or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int array_size = nmemb * size;
	unsigned int i = 0;

	if (array_size == 0)
	{
		return (NULL);
	}

	ptr = malloc(array_size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < array_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

