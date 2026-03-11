#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Function that creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: nv_dog (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nv_dog;
	int index;

	if (name == NULL || owner == NULL)
		return (NULL);
	nv_dog = malloc(sizeof(dog_t));
	if (nv_dog == NULL)
		return (NULL);
	for (index = 0; name[index]; index++)
		;
	nv_dog->name = malloc(index + 1);
	if (nv_dog->name == NULL)
	{
		free(nv_dog);
		return (NULL);
	}
	for (index = 0; name[index]; index++)
		nv_dog->name[index] = name[index];
	nv_dog->name[index] = '\0';
	for (index = 0; owner[index]; index++)
		;
	nv_dog->owner = malloc(index + 1);
	if (nv_dog->owner == NULL)
	{
		free(nv_dog->name);
		free(nv_dog);
		return (NULL);
	}
	for (index = 0; owner[index]; index++)
		nv_dog->owner[index] = owner[index];
	nv_dog->owner[index] = '\0';
	nv_dog->age = age;
	return (nv_dog);
}
