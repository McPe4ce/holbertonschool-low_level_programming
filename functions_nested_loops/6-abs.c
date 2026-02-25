#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to get the absolute value of
 *
 * Return: absolute value of `n`
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);

	return (n);
}
