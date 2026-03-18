#include "main.h"

/**
 * factorial - Prints the factorial of a number
 * @n: Number to be factorised
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
