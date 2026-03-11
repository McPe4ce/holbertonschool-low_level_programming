#include "dog.h"

/**
 * free_dog - Function that frees the dog struct
 * @d: pointer to the structure
 */
void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
