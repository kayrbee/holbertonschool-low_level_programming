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
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

char *_strcpy(char *dest, char *src)
{
	int element = 0;

	while (src[element] != '\0')
	{
		dest[element] = src[element];
		element++;
	}

	dest[element] = '\0';
	return (dest);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggorego;
	int len_name = _strlen(name);
	int len_owner = _strlen(owner);
	char *cpy_name;
	char *cpy_owner;

	doggorego = malloc(sizeof(dog_t));
	if (doggorego == NULL)
	{
		return (NULL);
	}
	cpy_name = malloc(len_name + 1);

	if (cpy_name == NULL)
	{
		free(doggorego);
		return (NULL);
	}

	_strcpy(cpy_name, name);

	cpy_owner = malloc(len_owner + 1);

	if (cpy_owner == NULL)
	{
		free(doggorego);
		return (NULL);
	}

	_strcpy(cpy_owner, owner);

	doggorego->name = cpy_name;
	doggorego->age = age;
	doggorego->owner = cpy_owner;

	return (doggorego);
}

