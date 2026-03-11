#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum number to start
 * @max: max number to count to
 * Return: str (Success)
 */

int *array_range(int min, int max)
{
		int *str;
		int index;

	if (min > max)
	{
		return (NULL);
	}

	str = malloc(sizeof(int) * (max - min + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (index = 0; index <= (max - min + 1); index++)
	{
		str[index] = min + index;
	}
	return (str);
}
