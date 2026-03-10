#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings together in a
 * new allocated memory
 * @s1: First string
 * @s2: Second string
 * Return: dest (Success)
 */

char *str_concat(char *s1, char *s2)
{
	int index;
	int lenght1 = 0;
	int lenght2 = 0;
	char *dest;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lenght1] != '\0')
	{
		lenght1++;
	}
	while (s2[lenght2] != '\0')
	{
		lenght2++;
	}

	dest = malloc(sizeof(char) * (lenght1 + lenght2 + 1));

	if (dest == NULL)
		return (NULL);

	for (index = 0; index < lenght1; index++)
		dest[index] = s1[index];

	for (index = 0; index < lenght2; index++)
		dest[lenght1 + index] = s2[index];

	dest[lenght1 + lenght2] = '\0';

	return (dest);
}
