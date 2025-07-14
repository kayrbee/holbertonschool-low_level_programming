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

	printf("name: %s\n", name);
	printf("strlen name: %ld\n", strlen(name));
	
	cpy_name = malloc(sizeof(char) * strlen(name));

	if (cpy_name == NULL)
	{
		return (NULL);
	}
	
	cpy_owner = malloc(sizeof(char) * strlen(owner));
	
	if (cpy_owner == NULL)
	{
		return (NULL);
	}

	free(cpy_name);
	free(cpy_owner);

	doggorego->name = cpy_name;
	doggorego->age = age;
	doggorego->owner = owner;

	return (doggorego);
}

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}

