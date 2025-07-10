#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * new_dog - function to create a new dog
 *           store a copy of the name and owner details
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggorego;
	char *cpy_name;
	char *cpy_owner;

	doggorego = malloc(sizeof(dog_t));
	if (doggorego == NULL)
	{
		return (NULL);
	}
	cpy_name = malloc(strlen(name) + 1);

	if (cpy_name == NULL)
	{
		return (NULL);
	}

	strcpy(cpy_name, name);

	cpy_owner = malloc(strlen(owner) + 1);

	if (cpy_owner == NULL)
	{
		return (NULL);
	}

	strcpy(cpy_owner, owner);

	doggorego->name = cpy_name;
	doggorego->age = age;
	doggorego->owner = cpy_owner;

	return (doggorego);
}

