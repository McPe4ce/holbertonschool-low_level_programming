#include "dog.h"

/**
 * init_dog - Initialises a variable of type struct dog
 * struct dog - Structure that stores the dog data
 * @d: pointer to struct dog to initialise
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
