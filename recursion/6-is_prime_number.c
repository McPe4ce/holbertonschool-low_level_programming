#include "main.h"

/**
 * optimus_prime - Checks if n is divisible by any number from 2 to sqrt(n)
 * @n: Number to check
 * @divisor: Current divisor
 *
 * Description: Recursively checks if n is prime by testing divisibility from 2 up to sqrt(n).
 * Return: 0 if not prime, 1 if prime
 */
int optimus_prime(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (optimus_prime(n, divisor + 1));
}

/**
 * is_prime_number - Returns 1 if n is a prime number, otherwise 0
 * @n: Number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (optimus_prime(n, 2));
}
