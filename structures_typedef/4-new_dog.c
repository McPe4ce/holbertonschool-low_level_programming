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
	int i;

	if (name == NULL || owner == NULL)
		return (NULL);

	nv_dog = malloc(sizeof(dog_t));
	if (nv_dog == NULL)
		return (NULL);

	i = 0;
	while (name[i])
		i++;
	nv_dog->name = malloc(i + 1);
	if (nv_dog->name == NULL)
	{
		free(nv_dog);
		return (NULL);
	}
	i = 0;
	while (name[i])
	{
		nv_dog->name[i] = name[i];
		i++;
	}
	nv_dog->name[i] = '\0';

	i = 0;
	while (owner[i])
		i++;

	nv_dog->owner = malloc(i + 1);
	
	if (nv_dog->owner == NULL)
	{
		free(nv_dog->name);
		free(nv_dog);
		return (NULL);
	}
	i = 0;
	while (owner[i])
	{
		nv_dog->owner[i] = owner[i];
		i++;
	}
	nv_dog->owner[i] = '\0';

	nv_dog->age = age;
	return (nv_dog);
}
