#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define the properties of a dog
 * @name: name of dog (string)
 * @age: age of dog (float)
 * @owner: owner of dog (string)
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif
