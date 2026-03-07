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
	int i, b = 0, c = 0;        // i: loop index, b: sum of main diagonal, c: sum of other diagonal

	for (i = 0; i < size; i++)        // Loop through each row of the matrix
	{
		b += *(a + i * size + i);        // Add value from main diagonal (top-left to bottom-right)

		c += *(a + i * size + (size - 1 - i));        // Add value from other diagonal (top-right to bottom-left)
	}
	printf("%d, %d\n", b, c);        // Print the sums of both diagonals
}
