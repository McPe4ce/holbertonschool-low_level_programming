#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that prints an array and initialises the character
 * @size: size of the array
 * @c: character that will be printed
 * Return: str (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		str[index] = c;
	}
	return (str);
}
