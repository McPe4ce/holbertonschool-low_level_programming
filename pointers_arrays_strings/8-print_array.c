#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an array of n integers, on the same line
 * @a: Is the array
 * @n: Stores the number of elements to print
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index != n - 1)
		{
			printf(", ");
		}
	}
	_putchar('\n');
	}
