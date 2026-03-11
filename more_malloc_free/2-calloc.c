#include "main.h"
#include <stdlib.h>

/**
 * _calloc - initialises the allocated memory with 0
 * @nmemb: number of elements in the array
 * @size: size of the units in bytes
 * Return: str (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int index;
	char *str;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	str = malloc(size * nmemb);

	if (str == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < nmemb * size; index++)
	{
		str[index] = 0;
	}
	return (str);
}
