#include "main.h"

/**
 * reset_to_98 - Function that contains a pointer *n that points towards an int
 * @n: Variable pointed by the pointer
 * What happens here: Create a pointer variable n with int *n,
 * then you dereference the pointer with * n = 98 which updates the value
 * stored in the memory address.
 */
void reset_to_98(int *n)
{
	*n = 98;
}
