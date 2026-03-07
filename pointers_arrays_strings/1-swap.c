#include "main.h"

/**
 * swap_int - Function that swaps the value of two variables
 * @a: Variable that stores an integer
 * @b: Variable that stores an integer
 */

void swap_int(int *a, int *b)
{
	int help;					//Variable that stores the value of a before being swapped

	help = *a;
	*a = *b;					//Value pointed by a becomes the one pointed by b
	*b = help;					//Value pointed by b becomes the one stored in help (so originally a)
}
