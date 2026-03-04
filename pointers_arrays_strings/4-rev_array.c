#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Variable that stores the string
 * @n: Variable that stores the byte where it stops reversing
 */
void reverse_array(int *a, int n)
{
	int first_index = 0;
	int last_index = n - 1;
	int temp;

	while (first_index < last_index)
	{
		temp = a[first_index];
		a[first_index] = a[last_index];
		a[last_index] = temp;

		first_index++;
		last_index--;
	}
}
