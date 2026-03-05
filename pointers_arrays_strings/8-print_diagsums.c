#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Sums two diagonales
 * @a: Variable that points to the start of the matrice
 * @size: Size of the matrix in square
 *
 * Return: rien
 */
void print_diagsums(int *a, int size)
{
	int i, b = 0, c = 0;

	for (i = 0; i < size; i++)
	{
		b += *(a + i * size + i);

		c += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", b, c);
}
