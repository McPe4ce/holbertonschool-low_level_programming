#include "main.h"


/**
 * is_it_square - Checks if a number is a natural square root of n
 * @b: Possible square root
 * @n: Number to find the square root of
 *
 * Return: b if b * b == n, -1 if no natural square root, else recursive call
 */

int is_it_square(int b, int n)
{
	if (b * b == n)
	{
		return (b);
	}
	if (b * b > n)
	{
		return (-1);
	}
	return (is_it_square(b + 1, n));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to find the square root of
 *
 * Return: Natural square root, or -1 if none
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (is_it_square(0, n));
}
