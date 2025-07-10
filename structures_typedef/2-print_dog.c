#include "dog.h"
#include <stdio.h>
#include <math.h>
/**
 * print_dog - print the attributes of my_dog
 * @d: pointer to struct my_dog, provided by main
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{

		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		if (isnan(d->age))
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}

