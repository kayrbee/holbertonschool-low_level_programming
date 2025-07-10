#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the attributes of my_dog
 * @d: pointer to struct my_dog, provided by main
 * Return: void
 */
void print_dog(struct dog *d)
{
	int i = 0;

	if (d != NULL)
	{

		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		if (d->age != NULL)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}

