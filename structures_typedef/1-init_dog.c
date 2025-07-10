#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - function initialises values for my_dog
 * @d: pointer to my_dog implementation created in main
 * @name: requested name of dog
 * @age: requested age of dog
 * @owner: requested owner of dog
 * Return: nothing!
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}

