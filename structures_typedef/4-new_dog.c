#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Function that copies a struct and some of its values
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nv_dog = malloc(sizeof(dog_t));

	if (nv_dog == NULL)
	{
		return (NULL);
	}
	nv_dog->name = malloc(strlen(name) + 1);

	if (nv_dog->name == NULL)
	{
		free(nv_dog);
		return (NULL);
	}

	nv_dog->owner = malloc(strlen(owner) + 1);

	if (nv_dog->owner == NULL)
	{
		free(nv_dog->name);
		free(nv_dog);
		return (NULL);
	}

	strcpy(nv_dog->name, name);
	nv_dog->age = age;
	strcpy(nv_dog->owner, owner);

	return (nv_dog);
}
