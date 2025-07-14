#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - fress heap memory used by structure my_dog
 * @d: points to instance of my_dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	/* free structure, then free pointer */
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		d = NULL;
		printf("Free!");
	}
}

