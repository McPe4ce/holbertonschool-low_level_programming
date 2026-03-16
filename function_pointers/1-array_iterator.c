#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator -function that executes a function given
 * as a parameter on each element of an array.
 * @array: The array
 * @size: stores the size of the array
 * @action: Function that points to the function i need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (action)
	{
		for (index = 0; index < size; index++)
		{
			action(array[index]);
		}
	}
}
