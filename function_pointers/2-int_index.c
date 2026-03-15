#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Function that seeks an integer in the array
 * @array: The array
 * @size: Size of the array
 * @cmp: Function that points to the integer we need
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)

			return (index);
	}
	return(-1);
}