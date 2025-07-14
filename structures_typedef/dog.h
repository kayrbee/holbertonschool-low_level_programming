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
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);

#endif
