#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory with size b
 * @b: allocated memory
 * Return: pSTR (Success)
 */
void *malloc_checked(unsigned int b)
{
	void *pSTR = malloc(b);

	if (pSTR == NULL)
	{
		exit(98);
	}
	return (pSTR);
}
