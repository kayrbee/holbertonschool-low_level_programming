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
	unsigned int i = 0;
	unsigned char *p;

	/* Handle invalid array size requests */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/* request memory */
	ptr = malloc(nmemb * size);

	/* validate result of malloc */
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* Initialise array to 0 */
	p = (unsigned char *)ptr;

	while (i < (nmemb * size))
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}

