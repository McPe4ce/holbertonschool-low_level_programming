#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function that duplicates a string into a newly allocated
 * memory space
 * @str: Stores the string
 * Return: dest (Success)
 */
char *_strdup(char *str)
{
	int length = 0;
	char *dest;
	int index;

	if (str == 0)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

		dest = malloc((length + 1) * sizeof(char));

	if (dest == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < length; index++)
	{
		dest[index] = str[index];
	}
	dest[length] = '\0';
	return (dest);
}
